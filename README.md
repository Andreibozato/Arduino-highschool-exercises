# 🤖 High School Arduino & SimulIDE Exercises Collection

This repository contains a collection of 25 practical electronics and programming exercises developed during my high school technical classes. All projects were written in C++ (Arduino IDE) and simulated using SimulIDE.

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

### 04. [Exercise-04-StepperMotorControl (Code Only)](./Exercise-04-StepperMotorControl)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Controls a stepper motor with adjustable speed via a potentiometer, allowing continuous rotation in clockwise/counterclockwise directions, instant stop, execution of exact turns (1 turn forward/backward), and an automated sequence of 2 turns forward, pause, and 2 turns backward.
  - **Simulated Hardware:** Uses a stepper motor (connected to pins 8,10,9,11) with a stepper driver, six buttons (pins 2 to 7) to trigger the modes, a potentiometer on pin A0 to define the rotation (RPM), and a 16x2 LCD display with I2C to display the status.
  - **Code Logic:** Applies the Stepper library with the setSpeed() (speed mapped by the potentiometer) and step() methods to move the shaft, combined with state variables (liga) and multiple if structures that prioritize buttons to alternate between operating modes and trigger programmed movements.
</details>

### 05. [Exercise-05-LEDEffects](./Exercise-05-LEDEffects)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Triggers four distinct lighting effects (all flashing together, alternating in pairs, sequence with repetitions, and continuous flashing) activated by independent buttons.
  - **Simulated Hardware:** Uses 4 buttons with internal pull-up (pins 8–11) and 4 LEDs (pins 0–3), with associated resistors as shown.
  - **Code Logic:** Employs repetition structures (nested for, while) and if with !digitalRead to detect presses, controlling the patterns with delay().
</details>

### 06. [Exercise-06-SerialStepperMotor (Code Only)](./Exercise-06-SerialStepperMotor)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Controls a stepper motor in three modes (clockwise, counterclockwise, and stopped) with speed adjustment (RPM) via buttons, as well as executing commands received by the serial monitor such as an exact turn in each direction and an automated process of two turns forward, pause, and two turns backward.
  - **Simulated Hardware:** Uses a stepper motor connected to pins 9, 11, 10, and 12, six buttons with internal pull-up (pins 2 to 7) to define the direction and change the RPM, and serial communication to receive commands.
  - **Code Logic:** Employs state variables (liga) and speed variables (rpm), conditionals to detect button presses with a waiting while, interpretation of characters via Serial, and continuous loops with step(1) or step(-1) depending on the mode, updating the rotation with setSpeed() each cycle.
</details>

### 07. [Exercise-07-LedsButtonsControl](./Exercise-07-LedsButtonsControl)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Controls four LEDs individually or in combination: button 1 turns on LED1; button 2 turns on LEDs 2 and 3; button 3 turns both off; and button 4 turns on LED4 for exactly 3 seconds and turns it off automatically.
  - **Simulated Hardware:** Uses four buttons with pull-down resistors (10 kΩ) on pins 2 to 5 and four LEDs with limiting resistors on pins 10 to 13.
  - **Code Logic:** Employs if/else structures to read the state of each button (HIGH level) and, in specific cases, defines the states of the LEDs with immediate actions or with a delay() to time the flashing of LED4.
</details>

### 08. [Exercise-08-MultiButtonLedControl](./Exercise-08-MultiButtonLedControl)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Controls four LEDs with six buttons, allowing to turn on an individual LED for 2 seconds, turn on all LEDs, turn off all, execute an alternating sequence between pairs of LEDs (1+3 and 2+4) with 2 seconds each, and perform a progressive shutdown (one by one with a 1-second interval).
  - **Simulated Hardware:** Uses six push buttons (three with external pull-down on pins 2,3,4 and three with internal pull-up on pins 5,6,7) and four LEDs with limiting resistors on pins 10 to 13.
  - **Code Logic:** Employs if structures to detect button activation (HIGH or LOW level, according to the configuration) and delay() to time the actions, without the need for loops or state variables to maintain the LEDs.
</details>

### 09. [Exercise-09-SequentialActivations](./Exercise-09-SequentialActivations)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Executes four different activation sequences of two motors and two LEDs when each button is pressed, varying the activation times and the on/off order (e.g., motor1+Led1 for 5s, then motor2+Led2 for 3s; or staggered connections with 1s intervals between each component).
  - **Simulated Hardware:** Uses four buttons with internal pull-up (pins 8 to 11), two LEDs with resistors (pins 2 and 3), and two actuators (motors or loads) on pins 0 and 1.
  - **Code Logic:** Employs conditionals if(!digitalRead()) to detect presses and a sequence of digitalWrite and delay() to create fixed and chained timings, without loops, ensuring that each sequence is executed only once per activation.
</details>

### 10. [Exercise-10-MultipleActivations](./Exercise-10-MultipleActivations)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Executes four distinct modes: turning on all actuators for 3 seconds, flashing the LEDs in sequence (LED1 twice, LED2 three times), activating motors and LEDs in a staggered sequence (M1+L1, then M2+L2, then turning off M1+L1, then turning off M2+L2), and buttons to permanently turn everything on/off.
  - **Simulated Hardware:** Uses five buttons (two with external pull-down, three with internal pull-up), two LEDs, and two motors (or loads) connected to digital pins (LEDs on pins 2 and 3, motors on pins A5 and A4 configured as outputs).
  - **Code Logic:** Employs if structures to read each button, digitalWrite to activate the components, and delay() to create fixed and chained timings, without repetition loops, ensuring a single execution per press.
</details>

### 11. [Exercise-11-DistanceSensorServo](./Exercise-11-DistanceSensorServo)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Measures the distance with an ultrasonic sensor and, if the object is less than 30 cm away, turns on a green LED, turns off the red one, positions a servo motor at 90°, and displays "Siga" (Go) on the LCD; otherwise, it turns on the red LED, turns off the green one, positions the servo at 0°, and displays "Pare" (Stop).
  - **Simulated Hardware:** Uses an ultrasonic sensor (pins A3 and 8), a servo motor (pin 7), two LEDs (Red on pin 13, Green on pin 12), and a 16×2 LCD display with I2C interface (address 0x27).
  - **Code Logic:** Employs the Ultrasonic library to obtain the distance in centimeters, an if/else conditional structure to make decisions, and servo1.write(), digitalWrite(), and LCD.print() commands to update the actuators and the display every 200 ms.
</details>

### 12. [Exercise-12-CombinationalLogic](./Exercise-12-CombinationalLogic)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Controls two motors and two LEDs based on specific combinations of five buttons: one sequence activates the motors at different times; another turns LED1 on/off according to an input pattern; and LED2 is triggered by a logical condition involving AND, OR, and NOT operators.
  - **Simulated Hardware:** Uses five buttons with pull-down resistors (pins 8 to 12), two motors (pins 0 and 1), and two LEDs with resistors (pins 2 and 3).
  - **Code Logic:** Employs if structures with complex logical expressions (&&, ||, ! operators), delay() for timings, and direct digital write actions, without internal loops.
</details>

### 13. [Exercise-13-FlashPatterns](./Exercise-13-FlashPatterns)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Triggers three flashing modes: LED1 flashes 10 times, LED2 flashes continuously as long as button 3 is released (stopping when pressed), and LEDs 3 and 4 flash alternately for 15 cycles.
  - **Simulated Hardware:** Uses four buttons with internal pull-up (pins 8 to 11) and four LEDs with limiting resistors (pins 0 to 3).
  - **Code Logic:** Employs for loops for fixed repetitions, a while loop with a button reading condition to maintain the flashing indefinitely, and delay() to control the time intervals.
</details>

### 14. [Exercise-14-LCDCounter](./Exercise-14-LCDCounter)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Displays fixed messages on the LCD when button 1 is pressed, starts an ascending count from 0 to 100 (with the possibility of interruption by button 3) when button 2 is pressed, and executes a descending count from 60 to 0 when button 4 is pressed.
  - **Simulated Hardware:** Uses a 16×2 LCD display with I2C interface (SDA and SCL pins) and four buttons with internal pull-up (pins 2 to 5).
  - **Code Logic:** Employs if structures to detect presses, for loops with delay() for the counts, and the break instruction to interrupt the ascending count when button 3 is triggered, without using external interrupts.
</details>

### 15. [Exercise-15-LCDCounterMessages](./Exercise-15-LCDCounterMessages)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Displays fixed messages when buttons A and F are pressed, starts an ascending count from 0 to 100 (interruptible by button C) when B is pressed, and a countdown from 59 to 0 (interruptible by button E) when D is pressed, showing "PARADO" (STOPPED) on the LCD when interrupted.
  - **Simulated Hardware:** Uses a 16×2 LCD display with I2C interface (address 0x27) and six buttons with internal pull-up on pins 2 to 7.
  - **Code Logic:** Employs if structures to detect presses, for loops with delay() for the counts, and the break command to interrupt the loops when the stop button is detected, displaying the corresponding message on the second line.
</details>

### 16. [Exercise-16-TempLightSensor](./Exercise-16-TempLightSensor)
<details>
  <summary><b>Click to expand project details</b></summary>
  
  - **Objective:** Reads temperature (LM35) and luminosity (LDR), displays the data on the LCD, classifies the time of day (Morning/Afternoon/Night) according to the LDR reading, and turns on specific LEDs when combinations occur (high light with low temperature → blue LED; low light with high temperature → red LED).
  - **Simulated Hardware:** Uses an LM35 sensor on pin A2, an LDR on pin A1, two LEDs (blue on pin 13, red on pin 12), and a 16×2 LCD display with I2C interface (address 0x50).
  - **Code Logic:** Employs analog conversion to obtain temperature and luminosity, if/else if/else conditional structures to classify the period, and decisions with logical operators (&&) to control the LEDs based on combined temperature and light ranges.
</details>
