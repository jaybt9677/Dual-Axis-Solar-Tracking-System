# 🌞 Dual Axis Solar Tracking System

This project presents a **Dual Axis Solar Tracker** designed to automatically adjust the position of solar panels in both **horizontal and vertical axes** to maximize sunlight capture throughout the day.  
Built using **Arduino Nano, LDR sensors, servo motors, and solar panels**, this system improves solar energy efficiency by up to **30% compared to fixed panels**.

---

## 🚀 Live Demo & Project Media

| Prototype | Project Report |
|------------|----------------|
| ![Dual Axis Solar Tracker Prototype]/Images/(Dual%20Axis%20Solar%20Panel%20System.jpg) | [📘 View Detailed Report (PDF)](Dual%20Axis%20solar%20PBL.pdf) |

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

## 📜 Circuit & Code
> All circuit connections and Arduino code are available in the `Code/` and `Circuit_Diagram/` folders.

Example Arduino snippet:
```cpp
int ldrTopLeft = A0;
int ldrTopRight = A1;
int ldrBottomLeft = A2;
int ldrBottomRight = A3;

// Code logic compares LDR readings and moves servo motors
