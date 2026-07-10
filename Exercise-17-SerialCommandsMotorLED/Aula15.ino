#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x27,16,2);
#define MOTOR1 4
#define LED1 6
#define MOTOR2 5
#define LED2 7  

void setup() {

pinMode (MOTOR1, OUTPUT);
pinMode (MOTOR2, OUTPUT);
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
Serial.begin (9600);
while(!Serial);
Serial.setTimeout(1);
LCD.init();
LCD.backlight();
LCD.clear();

}

void loop() {

  int x;
  String comando;

  if(Serial.available()>0)
  {
    comando=Serial.readString();
    comando.trim();
  }

if(comando=="A")
{
  LCD.clear();
LCD.setCursor(0,0);
LCD.print("LIGAR MOTOR1");
digitalWrite(MOTOR1,1);
}
  if(comando=="B")
  {
    LCD.clear();
LCD.setCursor(0,0);
LCD.print("DESLIGAR MOTOR1");
digitalWrite(MOTOR1,0);
  }

if(comando=="C")
{
  LCD.clear();
LCD.setCursor(0,0);
LCD.print("Piscando LED1");

for(x=0;x<10;x++)
{
  digitalWrite(LED1,1);
  delay(300);
  digitalWrite(LED1,0);
  delay(300);
}
}

if(comando=="D")
{
  LCD.clear();
LCD.setCursor(0,0);
LCD.print("PROCESSO 1");
digitalWrite(LED1,1);
digitalWrite(MOTOR1,1);
delay(3000);
digitalWrite(LED1,0);
digitalWrite(MOTOR1,0);
digitalWrite(LED2,1);
digitalWrite(MOTOR2,1);
delay(2000);
digitalWrite(LED2,0);
digitalWrite(MOTOR2,0);
delay(1000);
digitalWrite(LED1,1);
digitalWrite(MOTOR1,1);
digitalWrite(LED2,1);
digitalWrite(MOTOR2,1);
delay(4000);
digitalWrite(LED1,0);
digitalWrite(MOTOR1,0);
digitalWrite(LED2,0);
digitalWrite(MOTOR2,0);
}
} 
