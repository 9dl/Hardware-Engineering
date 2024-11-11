# ⚙️ Hardware Engineering Repository

Welcome to the **Hardware Engineering** repository! This collection is dedicated to exploring, experimenting with, and building various hardware projects, from **ESP32 DevKits** to other versatile boards. Dive into the world of electronics with us and discover how different modules interact, communicate, and work together.

---

## 🌐 Project Overview

Each board project includes:
- **Hands-on Tutorials**: Step-by-step guides to help you set up, wire, and test hardware modules.
- **Code Examples**: Ready-to-run scripts and snippets for each module to get you up and running quickly.
- **Documentation**: Schematics, explanations, and tips to help you make the most of each component.

## 📚 Boards and Modules

This repository includes the following boards (with more to come!):

- **[ESP32 C6](esp32_c6/esp32_c6.md)**
    - Project includes the **nRF24L01** wireless module possibly for Jamming.
- **[ESP8266](esp8266/esp8266.md)**
  - Wi-Fi deauthentication and Fake Access Points 

These examples should only be used for **ethical, legal educational purposes**, such as **penetration testing in authorized environments**, **security research**, and **networking experiments** on **isolated or private networks**. It is important to **never** use these techniques on public networks or unauthorized systems.

![image](https://github.com/user-attachments/assets/26834f66-9c90-41d9-bc94-95bdf34a820a)


> 🚀 Stay tuned as we add more boards, exciting modules, and features!

## 🧭 Getting Started

Whether you're a beginner in hardware engineering or looking to enhance your knowledge, each project is designed to provide a clear path from setup to full functionality. Follow along with the tutorials and code examples for hands-on learning.

### 📜 How to Navigate This Repository

- **[Boards](#boards-and-modules)**: A breakdown of each supported board, tutorials, and example code.
- **Code and Libraries**: Organized within each board folder, allowing easy access to example code and reusable libraries.
- **Tools and Scripts**: Find automation scripts, useful utilities, and setup tools for smoother workflows.

---

| Module                  | Chip    | Flash Memory | PSRAM      | Wi-Fi Support         | Bluetooth Support    | Key Features                                 | Best IoT Application                                      |
|-------------------------|---------|--------------|------------|-----------------------|----------------------|----------------------------------------------|-----------------------------------------------------------|
| **ESP32 C6 WROOM-1-N16** | CH343P  | 16 MB       | 512KB   | Wi-Fi 6 (802.11ax)    | Bluetooth 5.0 (BLE)   | Advanced IoT with Wi-Fi 6, secure protocols  | High-throughput IoT, secure connectivity, Wi-Fi 6 testing |
| **ESP32 S3 WROOM-1-N16R8** | -/-    | 16 MB       | 8MB   | Wi-Fi 4 (802.11n)     | Bluetooth 5.0 (BLE)   | AI/ML processing, enhanced GPIO support      | Smart home, AI and ML IoT devices, camera support         |
| **ESP32 WROOM NodeMCU** | CH343C  | 4 MB        | 520KB   | Wi-Fi 4 (802.11n)     | Bluetooth 4.2 (BLE)   | General-purpose IoT, cost-efficient          | Basic IoT testing, prototyping, connectivity tasks        |
| **ESP8266 NodeMCU v3**  | CH340G  | 4 MB        | -/-   | Wi-Fi 4 (802.11n)     | No Bluetooth         | Low-cost, simple IoT deployment              | Basic IoT devices, low-power Wi-Fi applications           |
| **ESP32 WROVER-IE**     | -/-     | 4 MB/8 MB    | 4 MB/8 MB  | Wi-Fi 4 (802.11n)     | Bluetooth 4.2 (BLE)   | High memory, industrial data processing      | Industrial IoT, large data processing, rapid connectivity |
| **RTL8720dn BW16**      | -/-     | 2 MB        | 64KB       | Wi-Fi 4 (802.11 b/g/n) | Bluetooth 5.0 (BLE)  | Dual-band Wi-Fi (2.4 GHz & 5 GHz)            | IoT networks requiring stable dual-band connectivity      |

### Explanation of Terms

- **WROOM**: Standard ESP32 modules with reliable Wi-Fi/Bluetooth and GPIO, ideal for general IoT projects.
- **WROVER**: ESP32 modules with added PSRAM for handling larger data, suited to industrial and data-intensive applications.
- **NodeMCU**: Development board for ESP modules, offering USB programming ease, popular for prototyping and testing.
- **PSRAM**: Extra memory often used in complex tasks or data-heavy applications.
- **BLE (Bluetooth Low Energy)**: A power-efficient Bluetooth variant, enabling low-energy IoT devices to connect easily.
- **Dual-Band Wi-Fi**: Supports both 2.4 GHz and 5 GHz for better flexibility and reduced interference in crowded environments.

---

We hope this repository will help you dive deeper into hardware engineering and make your projects even more powerful. Enjoy exploring, and feel free to contribute or provide feedback!
