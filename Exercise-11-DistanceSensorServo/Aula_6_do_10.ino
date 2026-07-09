#include <Wire.h>
#include <Servo.h>
#include <Ultrasonic.h>
Servo servo1;


#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x27,16,2);
Ultrasonic US(A3,8); 
int distancia;
#define LEDVM 13
#define LEDVD 12

void setup() {


pinMode(LEDVM, OUTPUT);
pinMode(LEDVD, OUTPUT);
  LCD.init();
  LCD.backlight();
 Serial.begin(9600);
while(!Serial);
Serial.setTimeout(1);
servo1.attach (7,500,2500);

 
}

void loop() {
 
distancia=US.Ranging(CM);
LCD.setCursor(0,0);
LCD.print("Distancia:");
LCD.setCursor(10,0);
LCD.print(distancia);
LCD.print("cm   ");
delay(200);


if(distancia<30)
{
  digitalWrite(LEDVD,1);
  digitalWrite(LEDVM,0);
  servo1.write(90);
  LCD.setCursor(0,1);
LCD.print("Siga");
delay(2000);
}
else
{
  digitalWrite(LEDVM,1);
  digitalWrite(LEDVD,0);
  servo1.write(0);
  LCD.setCursor(0,1);
LCD.print("Pare");
}
}
