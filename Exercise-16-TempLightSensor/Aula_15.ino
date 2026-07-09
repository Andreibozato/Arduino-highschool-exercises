#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x50,16,2);
#define LM35 A2
#define LDR A1
#define LED1_AZUL 13
#define LED2_VERM 12

void setup() {

  pinMode(LM35, INPUT);
  pinMode(LDR, INPUT);
  pinMode(LED1_AZUL, OUTPUT);
  pinMode(LED2_VERM, OUTPUT);
  LCD.init();
  LCD.backlight();
 
}

void loop() {

int ldr_ad,temp;
float lm35_ad;
ldr_ad=analogRead(LDR);
lm35_ad=analogRead(LM35);
temp=(lm35_ad*500)/1023;
LCD.setCursor(0,0);
LCD.print("Temp:");
if(temp<10)
{
  LCD.setCursor(9,0);
LCD.print(" ");
}

LCD.setCursor(6,0);
LCD.print(temp);
LCD.print((char)223);
LCD.print("C");
delay(300);
if(ldr_ad>=700)
{
   LCD.setCursor(0,1);
   LCD.print("Manha");
}
else
if(ldr_ad>=450)
{
   LCD.setCursor(0,1);
LCD.print("Tarde");
}
else
{
  LCD.setCursor(0,1);
  LCD.print("Noite");
}

if(ldr_ad>=700&&temp<15)
{
  digitalWrite(LED1_AZUL,1);
  digitalWrite(LED2_VERM,0);
}
else
if(ldr_ad<450&&temp>=40)
{
  digitalWrite(LED1_AZUL,0);
  digitalWrite(LED2_VERM,1);
}
else 
{
  digitalWrite(LED1_AZUL,0);
  digitalWrite(LED2_VERM,0);
}
}
