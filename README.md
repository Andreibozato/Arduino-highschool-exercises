# 🤖 High School Arduino & SimulIDE Exercises Collection

This repository contains a collection of 25 practical electronics and programming exercises developed during my high school technical classes. All projects were written in C++ (Arduino IDE) and simulated using **SimulIDE**.

## 📁 Complete List of Exercises (25 Challenges)

### 01. [LED Blink](./exercise-01-led-blink)
<details>
  <summary><b>Click to expand project details 🔍</b></summary>

  - **Objective:** Basic configuration to blink an LED with a 1-second delay.
  - **Simulated Hardware:** 1 LED and 100 Ω current-limiting resistor.
  - **Code Logic:** Basic setup using `pinMode()`, `digitalWrite()`, and `delay()`.
</details>

### 02. [Traffic Light System](./exercise-02-traffic-light)
<details>
  <summary><b>Click to expand project details 🔍</b></summary>

  - **Objective:** Controls a simulated traffic light system for cars and pedestrians.
  - **Simulated Hardware:** 6 LEDs and 100 Ω resistors.
  - **Code Logic:** Applies state-machine logic to control timing via `delay()`.
</details>

### 03. [Potentiometer & LCD Level](./exercise-03-potentiometer-lcd)
<details>
  <summary><b>Click to expand project details 🔍</b></summary>

  - **Objective:** Reads a potentiometer value to light up three LEDs (high, medium, and low levels) based on three voltage ranges, displaying the real-time value on a 16x2 LCD screen.
  - **Simulated Hardware:** 1 Potentiometer, 1 16x2 LCD Display (I2C interface), 3 LEDs (High, Medium, Low), and 100 Ω current-limiting resistors.
  - **Code Logic:** Uses nested `if/else` conditional statements to compare ADC values and trigger each LED status, utilizing `analogRead()`, `delay()`, and the LiquidCrystal library commands.
</details>
