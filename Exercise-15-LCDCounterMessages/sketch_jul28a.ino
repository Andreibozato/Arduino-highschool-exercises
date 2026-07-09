#include <LiquidCrystal_I2C.h>
 
 LiquidCrystal_I2C LCD(0x27, 16,2);
 
 #define BTA 2
 #define BTB 3
 #define BTC 4
 #define BTD 5
 #define BTE 6
 #define BTF 7

 
void setup() 
{
LCD.init();
LCD.backlight();
LCD.clear();
LCD.setCursor(0,0);
LCD.print("ETEC LAURO GOMES");
LCD.setCursor(0,1);
LCD.print("Dia 28/07/2025");

pinMode(BTA, INPUT_PULLUP);
pinMode(BTB, INPUT_PULLUP);
pinMode(BTC, INPUT_PULLUP);
pinMode(BTD, INPUT_PULLUP);
pinMode(BTE, INPUT_PULLUP);
pinMode(BTF, INPUT_PULLUP);
}

void loop()
{
int fred;

if(!digitalRead(BTA))
 {
 LCD.clear();
 LCD.setCursor(0,0);
 LCD.print("Aula Pratica");
 LCD.setCursor(0,1);
 LCD.print("MECATRONICA");
 }

if(!digitalRead(BTB))
 {
 LCD.clear();
 LCD.setCursor(0,0);
 LCD.print("contador:");
 for(fred=0; fred<=100; fred++)
  {
   LCD.setCursor(10,0);
   LCD.print(fred);
   delay(150);
  
  if(!digitalRead(BTC))
   {
   LCD.setCursor(0,1);
   LCD.print("PARADO");  
    break;
   }
 }
 }

if(!digitalRead(BTD))
 {
 LCD.clear();
 LCD.setCursor(0,0);
 LCD.print("Timer:");
 for(fred=59; fred>=0; fred--)
  {
   LCD.setCursor(8,0);
   LCD.print(" ");
   LCD.setCursor(7,0);
   LCD.print(fred);
      delay(150);
  if(!digitalRead(BTE))
   {
   LCD.setCursor(0,1);
   LCD.print("PARADO");  
    break;
   }
 }
 }

if(!digitalRead(BTF))
 {
 LCD.clear();
 LCD.setCursor(0,0);
 LCD.print("O FREDERICO");
 LCD.setCursor(0,1);
 LCD.print("GATO SUPREMO");
 }
}
