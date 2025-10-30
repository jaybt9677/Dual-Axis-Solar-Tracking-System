# 🌞 Dual Axis Solar Tracking System

This project presents a **Dual Axis Solar Tracker** designed to automatically adjust the position of solar panels in both **horizontal and vertical axes** to maximize sunlight capture throughout the day.  
Built using **Arduino Nano, LDR sensors, servo motors, and solar panels**, this system improves solar energy efficiency by up to **30% compared to fixed panels**.

---

## 🚀 Live Demo & Project Media

| Prototype | Project Report |
|------------|----------------|
| ![Dual Axis Solar Tracker Prototype](Images/Dual%20Axis%20Solar%20Tracking%20Panel%20System.jpg) | [📘 View Detailed Report (PDF)](Report/Dual%20Axis%20solar%20PBL.pdf) |

---

## 🧩 Project Overview

### 🔹 Objective  
To design and implement a **dual-axis solar tracking system** that automatically aligns solar panels to the optimal position based on sunlight intensity.

### 🔹 Key Features
- Fully **automatic dual-axis tracking** using LDR sensors  
- **Arduino Nano** based control system  
- **Compact and low-cost** design for efficient energy conversion  
- **30% higher power output** than static solar panels  
- Environmentally friendly & supports renewable energy initiatives

---

## ⚙️ Hardware Components Used
| Component | Quantity | Function |
|------------|-----------|----------|
| Arduino Nano | 1 | Controls the system |
| LDR Sensors | 4 | Detect sunlight intensity |
| Servo Motors | 2 | Rotate the panels on two axes |
| Solar Panels | 4 | Capture solar energy |
| Relay Module | 1 | Controls power switching |
| Battery | 1 | Stores generated power |

---

## 🧠 Working Principle

1. **LDR sensors** detect sunlight intensity from different directions.  
2. The **Arduino Nano** compares the sensor readings and adjusts the **servo motors** accordingly.  
3. The **solar panel assembly** moves both horizontally and vertically to align perpendicular to the sunlight.  
4. The system maximizes energy generation throughout the day and closes the panels during low light.

---

## 💻 Coding Section

All source codes are stored inside the [`Codes/`](Codes/) folder.  
Below is a description of each subfolder:

| Folder | Description |
|---------|--------------|
| [`Main/`](Codes/Main/) | Contains the **main Arduino code** (`Dual_Axis_Solar_Tracker.ino`) that runs the complete dual-axis solar tracking system. |
| [`Test_LDR_Sensors/`](Codes/Test_LDR_Sensors/) | Code to individually **test all LDR sensors** and verify light intensity readings in the Serial Monitor. |
| [`Test_Servo_Motors/`](Codes/Test_Servo_Motors/) | Code to **test both servo motors** by sweeping them across full motion range. |
| [`Test_Combined_Sensors/`](Codes/Test_Combined_Sensors/) | Combines all LDR readings to display **top-bottom** and **left-right** intensity differences before full integration. |

---

### 🧾 Example Arduino Snippet

```cpp
int ldrTopLeft = A0;
int ldrTopRight = A1;
int ldrBottomLeft = A2;
int ldrBottomRight = A3;

// Code logic compares LDR readings and moves servo motors
