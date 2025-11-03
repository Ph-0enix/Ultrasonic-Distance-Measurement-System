# 📏 Ultrasonic Distance Measurement System

An **Arduino-based range-finding system** that measures the **distance to a target** using an **HC-SR04 ultrasonic sensor** and displays results on a **16x2 LCD**.  
The project is built on the **time-of-flight principle**, implementing **signal averaging and calibration** for consistent and reliable measurements.

---

## 🚀 Features

- 🔊 **Time-of-Flight Distance Measurement** using ultrasonic waves  
- 📟 **LCD Display Output** for real-time readings  
- 🧮 **Signal Averaging** to minimize noise and improve accuracy  
- ⚙️ **Calibration Support** for unit conversion and scaling  
- 🧠 **Button-Controlled Triggering** for manual measurement control  

---

## 🧠 Concepts Used

- Time-of-flight principle of ultrasonic waves  
- HC-SR04 sensor interfacing and pulse width measurement  
- LCD data display in 4-bit mode  
- Software-based noise reduction using averaging  
- Serial communication for debugging and calibration  

---

## 🧩 Components

| Component | Description |
|------------|-------------|
| 🟦 **Arduino Uno/Nano** | Microcontroller to generate and measure ultrasonic pulses |
| 🔊 **HC-SR04 Ultrasonic Sensor** | Measures distance using time-of-flight |
| 🖥️ **16x2 LCD Display** | Displays measured distance |
| 🔘 **Push Button** | Triggers measurement cycle |
| 🔌 **Power Supply** | 5V regulated source |
| 💻 **Serial Monitor** | For debugging and calibration output |

---

## 🔧 Working Principle

> The **HC-SR04** sensor sends an ultrasonic pulse and waits for the echo.  
> The **Arduino measures the echo return time** and computes the distance using the speed of sound.  
> Multiple readings are averaged to reduce random error, and results are displayed on the **LCD** in inches.

