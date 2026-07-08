#include <WiFi.h>

// WiFi hotspot
const char* ssid = "EnergyMeter";
const char* password = "12345678";

WiFiServer server(80);

// UART pins
#define RXD2 16
#define TXD2 17

float voltage = 0, current = 0, power = 0;

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);

  WiFi.softAP(ssid, password);
  Serial.print("IP: ");
  Serial.println(WiFi.softAPIP());

  server.begin();
}

void loop() {
  // 🔹 Read UART
  if (Serial2.available()) {
    String data = Serial2.readStringUntil('\n');

    sscanf(data.c_str(), "%f,%f,%f", &voltage, &current, &power);
  }

  WiFiClient client = server.available();

  if (client) {
    String html = "<html><head>";
    html += "<meta http-equiv='refresh' content='2'>";
    html += "<style>body{text-align:center;font-family:Arial;}</style>";
    html += "</head><body>";

    html += "<h1>⚡ Energy Meter</h1>";

    html += "<h2>Voltage: " + String(voltage,1) + " V</h2>";
    html += "<h2>Current: " + String(current,2) + " A</h2>";
    html += "<h2>Power: " + String(power,1) + " W</h2>";

    html += "</body></html>";

    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println();
    client.println(html);

    client.stop();
  }
}