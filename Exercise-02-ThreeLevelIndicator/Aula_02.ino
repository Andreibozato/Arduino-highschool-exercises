#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0X27,16,2);
#define POT A0
#define ALTO 2
#define MEDIO 3
#define BAIXO 4

void setup() {
  LCD.init();
  LCD.backlight();
  pinMode(POT, INPUT);
  pinMode(ALTO, OUTPUT);
  pinMode(MEDIO, OUTPUT);
  pinMode(BAIXO, OUTPUT);
}

void loop() {
int valor_ad;

LCD.setCursor (0,0);
LCD.print("Valor_ad");
valor_ad = analogRead(POT);
 LCD.setCursor (10,0);
 LCD.print(valor_ad);
 delay(300);
 LCD.setCursor (11,0);
 LCD.print("   ");

if(valor_ad>682)
{
  digitalWrite (ALTO,1);
  digitalWrite (MEDIO,1);
  digitalWrite (BAIXO,1);
}
else
if(valor_ad>341)
{
  digitalWrite (ALTO,0);
  digitalWrite (MEDIO,1);
  digitalWrite (BAIXO,1);
}
else
{
  digitalWrite (ALTO,0);
  digitalWrite (MEDIO,0);
  digitalWrite (BAIXO,1);
}
}
