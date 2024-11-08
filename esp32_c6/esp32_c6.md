# ESP32 C6

This tutorial will guide you through setting up the **ESP32 C6** and connecting it to the **nRF24L01** module.

## Materials Required

- **ESP32 C6 DevKit**
- **nRF24L01 Module**
- **Jumper wires**
- **Breadboard**
- **10uF Capacitor** (rated above 5v, recommended for stability)

## Steps

1. **Wiring the nRF24L01 to ESP32 C6**:
   Follow the connections below:
    - **nRF24L01 VCC** → **ESP32-C6 5V**
    - **nRF24L01 GND** → **ESP32-C6 GND**
    - **nRF24L01 CE** → **GPIO 13**
    - **nRF24L01 CSN** → **GPIO 15**
    - **nRF24L01 SCK** → **GPIO 18**
    - **nRF24L01 MOSI** → **GPIO 23**
    - **nRF24L01 MISO** → **GPIO 19**
    - **nRF24L01 IRQ** → **GPIO 21** (optional)

2. **Upload the Example Code**:
    - Open **`example.ino`** in Arduino IDE or your preferred IDE.
    - Upload the code to your ESP32 C6.

3. **Running the Code**:
    - The code will initiate communication with the nRF24L01 module. You should see debug output on your serial monitor.

## Wiring Diagram

![img.png](img.png)

---

- [Go Back to Main README](../README.md)