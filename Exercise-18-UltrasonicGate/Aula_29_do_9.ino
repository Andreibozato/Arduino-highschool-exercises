#include <Wire.h>
#include <Servo.h>
Servo servo1;

#include <Ultrasonic.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x27,16,2);
Ultrasonic US(3,2); 
int distancia;
#define LEDVM A0
#define LEDVD A1

void setup() {


pinMode(LEDVM, OUTPUT);
pinMode(LEDVD, OUTPUT);
  LCD.init();
  LCD.backlight();
 Serial.begin(9600);
while(!Serial);
Serial.setTimeout(1);
servo1.attach (9,1000,2000);

 
}

void loop() {
 
distancia=US.Ranging(CM);
LCD.setCursor(0,0);
LCD.print("Distancia:");
LCD.setCursor(11,0);
LCD.print(distancia);
LCD.print("cm ");
delay(200);


if(distancia<30)
{
  digitalWrite(LEDVD,1);
  digitalWrite(LEDVM,0);
  servo1.write(90);
  LCD.setCursor(0,1);
LCD.print("Portao Aberto ");
}
else
{
  digitalWrite(LEDVM,1);
  digitalWrite(LEDVD,0);
  servo1.write(0);
  LCD.setCursor(0,1);
LCD.print("Portao Fechado");
}
}
