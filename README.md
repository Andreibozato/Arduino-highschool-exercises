# 🤖 High School Arduino & SimulIDE Exercises Collection

This repository contains a collection of 25 practical electronics and programming exercises developed during my high school technical classes. All projects were written in C++ (Arduino IDE) and simulated using **SimulIDE**.

## Complete List of Exercises (25 Challenges)
### 01. [Exercise-01-IndicatorLight](./Exercise-01-IndicatorLight)
<details>
  <summary><b>Click to expand project details</b></summary>
  - **Objective:** Reads the value of a potentiometer and turns on three LEDs (high, medium, and low light) according to three voltage ranges, displaying the value on the LCD display
  - **Simulated Hardware:** A potentiometer, a 16×2 LCD display with I2C interface, three LEDs (LA, LM, LB), and 100 Ω resistors to limit the current were used.
  - **Code Logic:** Applies nested if/else conditional structures to compare the ADC value and define the state of each LED, with analogRead(), delay(), and display commands.
</details>

### 02. [Exercise-02-ThreeLevelIndicator](./Exercise-02-ThreeLevelIndicator)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Reads the signal from a potentiometer and turns on combinations of three LEDs (HIGH, MEDIUM, LOW) to visually represent the analog value range, displaying the reading on the LCD display.
  - **Simulated Hardware:** Uses a potentiometer on pin A0, three LEDs with 100Ω resistors each, and an HD44780 LCD display (with I2C interface via address 0x27).
  - **Code Logic:** Applies a chain of if/else if/else structures to compare the read value (0–1023) with the thresholds 682 and 341, defining which LEDs turn on, with a 300ms delay to update the value on the LCD.
</details>
