# PIR-SENSOR-WITH-SERVO-MOTOR
THIS IS A SIMPLE PROJECT USING ARDUINO UNO AS THE BRAIN OF THE PROJECT WHERE IF MOTION IS DETECTED THE SERVO MOTOR REACTS


## Arduino Motion-Activated Servo System

**This project uses an Arduino to control a servo motor based on motion detected by a Passive Infrared (PIR) sensor. When motion is detected, the servo motor automatically sweeps to a predefined angle, making it ideal for automated flags, security locks, or camera triggering systems.**

## 🚀 Features

**Real-time Detection: Immediate response to human or animal movement.Adjustable Sweeps: Easily modify servo angles and movement speed in code.Auto-Reset: Servo automatically returns to the home position after motion stops.Hardware Friendly: Built using standard, budget-friendly hobbyist components.**

## 🛠️ Hardware Requirements

**Microcontroller: Arduino Uno, Nano, or MegaSensor: HC-SR501 PIR Motion SensorActuator: SG90 Micro Servo Motor (or equivalent)Other: Breadboard, Jumper wires, and a 5V power source**

## 🔌 Wiring Diagram

## 🔌 Wiring Diagram

| Component Pin | Arduino Pin | Notes |
| :--- | :--- | :--- |
| **PIR VCC** | 5V | Power input |
| **PIR GND** | GND | Ground |
| **PIR OUT** | Digital Pin 2 | Signal output |
| **Servo VCC** (Red) | 5V | Power input |
| **Servo GND** (Brown/Black) | GND | Ground |
| **Servo PWM** (Orange/Yellow) | Digital Pin 9 | Control signal |


## ⚙️ Installation & Usage

**Clone this repository to your local machine.Open the .ino file in the Arduino IDE.Install the standard Servo.h library if not already present.Connect your Arduino board and select the correct COM port.Upload the code and open the Serial Monitor to view real-time trigger**
