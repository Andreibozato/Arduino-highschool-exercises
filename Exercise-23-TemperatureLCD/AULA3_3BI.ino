#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD (0x27,16,2);
int temp;
float lm35_ad;
#define LM35 A2 //sensor de temperatura
#define LED1 13
#define LED2 12

void setup() {
pinMode(LM35,INPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
LCD.init();
LCD.backlight();
LCD.clear();
LCD.setCursor(0,1);
LCD.print("3B MECA");
delay(1000);
}

void loop() {
lm35_ad = analogRead(LM35);
temp = (lm35_ad*500)/1023; //converter p/ graus celsius
LCD.clear();
LCD.setCursor(0,0);
LCD.print("TEMP:");
LCD.setCursor(6,0);
LCD.print(temp);
LCD.print((char)223);//bolinha dos graus celsius
LCD.print("C");
delay(300);//velocidade de trocar os graus

if(temp>=22)
{
digitalWrite(LED2,1);
digitalWrite(LED1,0);
}
else
{
digitalWrite(LED1,1);
digitalWrite(LED2,0);
}


}//fecha o loop
