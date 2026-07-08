# 🤖 High School Arduino & SimulIDE Exercises Collection

This repository contains a collection of 25 practical electronics and programming exercises developed during my high school technical classes. All projects were written in C++ (Arduino IDE) and simulated using **SimulIDE**.

## Complete List of Exercises (25 Challenges)
### 01. [Indicator Light](./Exercise-01-IndicatorLight)
<details>
  <summary><b>Click to expand project details 🔍</b></summary>

  - **Objective:** Reads the value of a potentiometer and turns on three LEDs (high, medium, and low light) according to three voltage ranges, displaying the value on the LCD display
  - **Simulated Hardware:** A potentiometer, a 16×2 LCD display with I2C interface, three LEDs (LA, LM, LB), and 100 Ω resistors to limit the current were used.
  - **Code Logic:**Applies nested if/else conditional structures to compare the ADC value and define the state of each LED, with analogRead(), delay(), and display commands.
</details>
