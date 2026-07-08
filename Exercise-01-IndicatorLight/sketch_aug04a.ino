#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0X27, 16,2);
#define pot A0
#define LA 2
#define LM 3
#define LB 4 

void setup()
{
LCD.init();
LCD.backlight();
pinMode(pot, INPUT);
pinMode(LA, OUTPUT);
pinMode(LM, OUTPUT);
pinMode(LB, OUTPUT);
}

void loop() 
{
int valor_ad;

LCD.setCursor(0,0);
LCD.print("VALOR_AD:");
valor_ad=analogRead(pot);
LCD.setCursor(10,0);
LCD.print(valor_ad);
delay(300);
LCD.setCursor(11,0);
LCD.print("   ");

if(valor_ad>682)
 {
 digitalWrite(LA, 1);
 digitalWrite(LM, 1);
 digitalWrite(LB, 1);
 }
else
if(valor_ad>341)
 {
 digitalWrite(LA, 0);
 digitalWrite(LM, 1);
 digitalWrite(LB, 1);
 }
else
 {
 digitalWrite(LA, 0);
 digitalWrite(LM, 0);
 digitalWrite(LB, 1);
 }



}
