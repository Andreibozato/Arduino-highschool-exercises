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

### 03. [Exercise-03-SerialControlCar](./Exercise-03-SerialControlCar)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Controls the movements of a car with differential traction (forward, reverse, left/right turning, and sharp turns) and activates the lighting (headlight and taillight) through single-key commands sent by the serial monitor or Bluetooth.
  - **Simulated Hardware:** Uses two DC motors connected to pins 4,5,6,7 (via H-bridge) for wheel control, as well as two LEDs representing the taillight (pin 12) and the headlight (pin 13).
  - **Code Logic:** Employs specific functions for each action (such as frente(), tras(), and Tesquerda()) and a chain of if conditionals that interpret characters received through the Serial port (e.g., 'F' for forward, 'B' for reverse, 'U'/'u' to turn the taillight on/off) and execute the commands instantly.
</details>

### 03. [Exercise-03-SerialControlCar](./Exercise-03-SerialControlCar)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Controls the movements of a car with differential traction (forward, reverse, left/right turning, and sharp turns) and activates the lighting (headlight and taillight) through single-key commands sent by the serial monitor or Bluetooth.
  - **Simulated Hardware:** Uses two DC motors connected to pins 4,5,6,7 (via H-bridge) for wheel control, as well as two LEDs representing the taillight (pin 12) and the headlight (pin 13).
  - **Code Logic:** Employs specific functions for each action (such as frente(), tras(), and Tesquerda()) and a chain of if conditionals that interpret characters received through the Serial port (e.g., 'F' for forward, 'B' for reverse, 'U'/'u' to turn the taillight on/off) and execute the commands instantly.
</details>
