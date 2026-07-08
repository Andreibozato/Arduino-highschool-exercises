# 🤖 High School Arduino & SimulIDE Exercises Collection

This repository contains a collection of 25 practical electronics and programming exercises developed during my high school technical classes. All projects were written in C++ (Arduino IDE) and simulated using **SimulIDE**.

## 📊 Exercise Index

| # | Project & Link | Objective | Simulated Hardware | Code Logic |
|---|---|---|---|---|
| 01 | [LED Blink](./exercise-01) | Blinks an LED with a 1-second delay. | 1 LED, 1 Resistor (100 Ω). | Uses `digitalWrite()` and `delay()`. |
| 02 | [Traffic Light](./exercise-02) | Controls a 4-way simulated traffic light system. | 6 LEDs, 6 Resistors. | Uses nested `if/else` and timers. |
| 03 | [Potentiometer & LCD](./exercise-03) | Reads a potentiometer value to light up 3 LEDs based on voltage ranges, displaying values on an LCD screen. | 1 Potentiometer, 1 16x2 LCD Display (I2C), 3 LEDs, 100 Ω resistors. | Uses nested `if/else` to compare ADC values, `analogRead()`, and LiquidCrystal library commands. |
| 04 | [Next Project](./exercise-04) | ... | ... | ... |

### 03. [Potentiometer & LCD Level](./exercise-03-potentiometer-lcd)
<details>
  <summary><b>Click to expand project details 🔍</b></summary>

  - **Objective:** Reads a potentiometer value to light up three LEDs (high, medium, and low levels) based on three voltage ranges, displaying the real-time value on a 16x2 LCD screen.
  - **Simulated Hardware:** 1 Potentiometer, 1 16x2 LCD Display (I2C interface), 3 LEDs (High, Medium, Low), and 100 Ω current-limiting resistors.
  - **Code Logic:** Uses nested `if/else` conditional statements to compare ADC values and trigger each LED status, utilizing `analogRead()`, `delay()`, and the LiquidCrystal library commands.
</details>
