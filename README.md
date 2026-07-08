# ⚡ IoT-Based Smart Energy Monitoring System

An **Embedded Systems and IoT project** that monitors **real-time Voltage, Current, and Power Consumption** using **Arduino Uno**, **ESP32**, **Voltage Sensor**, and **Current Sensor**. The measured electrical parameters are transmitted to an ESP32 web server, allowing users to monitor energy usage wirelessly through a web browser.

---

# 🚀 Project Overview

The IoT-Based Smart Energy Monitoring System is designed to measure and monitor electrical parameters in real time. The system integrates Arduino Uno, ESP32, voltage sensor, and current sensor to acquire, process, and display live electrical data.

Using embedded systems and IoT technologies, the project hosts a web-based dashboard where users can monitor voltage, current, and power consumption from any connected device within the network. This project demonstrates sensor interfacing, UART communication, embedded systems programming, and real-time data acquisition for smart energy management applications.

---

# 🛠️ Components Used

* Arduino Uno
* ESP32 Development Board
* Voltage Sensor Module
* Current Sensor Module
* Relay Module
* LED Bulb (Load)
* Breadboard
* Jumper Wires
* USB Power Supply

---

# 💻 Technologies Used

* Arduino IDE
* Embedded C / Arduino Programming
* ESP32 Wi-Fi
* UART Communication
* HTML
* Embedded Systems
* IoT

---

# ✨ Key Features

* Real-time Voltage Monitoring
* Real-time Current Measurement
* Power Consumption Calculation
* ESP32 Web Server Dashboard
* Sensor Interfacing
* UART Communication
* Wireless Data Monitoring
* Embedded Systems-Based Energy Monitoring

---

# 📷 Project Preview

## Hardware Setup

![Hardware Setup](Images/project_setup.jpg)

---

## Web Dashboard

Displays real-time electrical parameters through the ESP32 web server.

![Web Dashboard](Images/web_dashboard.png)

---

# ⚙️ Working Principle

1. The voltage and current sensors measure electrical parameters from the connected load.
2. Arduino Uno reads the sensor values and calculates voltage, current, and power.
3. The measured data is transmitted to the ESP32 through UART communication.
4. ESP32 creates a Wi-Fi Access Point and hosts a web server.
5. Users connect to the ESP32 web page to monitor live Voltage, Current, and Power values.

---

# 🌍 Applications

* Smart Home Energy Monitoring
* Industrial Energy Monitoring
* Electrical Load Analysis
* IoT-Based Energy Management
* Laboratory Demonstrations
* Embedded Systems Projects
* Smart Grid Research

---

# 📈 Future Enhancements

* Cloud Data Logging
* Mobile Application Integration
* Energy Consumption History
* Power Factor Monitoring
* Daily and Monthly Energy Reports
* Remote Monitoring over the Internet
* Email and SMS Alerts

---

# 📂 Repository Structure

```text
IoT-Based-Smart-Energy-Monitoring-System
│
├── Arduino_Code
│   └── energy_meter.ino
│
├── Images
│   ├── project_setup.jpg
│   └── web_dashboard.png
│
├── Circuit_Diagram
│
└── README.md
```

---

# 👩‍💻 Author

**Trishasree Dewan**

Final Year B.Tech, Electrical Engineering

Interested in Embedded Systems, IoT, Power Systems, and Data Analytics.

---

# 📄 License

This repository is shared for academic learning, project demonstration, and portfolio purposes. Reuse or modification is permitted with appropriate acknowledgment to the author.
