#include <LiquidCrystal_I2C.h>
//SDA A4 E SCL A5
LiquidCrystal_I2C LCD (0x27,16,2);


#define BOTAO1 2
#define BOTAO2 3
#define BOTAO3 4
#define BOTAO4 5




void setup() {
pinMode (BOTAO1, INPUT_PULLUP);
pinMode (BOTAO2, INPUT_PULLUP);
pinMode (BOTAO3, INPUT_PULLUP);
pinMode (BOTAO4, INPUT_PULLUP);



LCD.init();
LCD.backlight();
LCD.clear();
LCD.setCursor(0,0);
LCD.print("DISPLAY LCD I2C");
LCD.setCursor(0,1);
LCD.print("Aula 09/06/2025");

}

void loop() {
  int cont; 
if(!digitalRead(BOTAO1))
{
  LCD.clear();
  LCD.setCursor(0,0);
LCD.print("ETEC LAURO GOMES");
LCD.setCursor(0,1);
LCD.print("  MECATRONICA");

}

if(!digitalRead(BOTAO2))
{
   LCD.clear();
  LCD.setCursor(0,0);
  LCD.print("Contador:");
for (cont=0;cont<=100;cont++)
{
  LCD.setCursor(10,0);
  LCD.print(cont);
  delay(150);

  if(!digitalRead(BOTAO3))
{
  break;
}
}
} 

if(!digitalRead(BOTAO4))
{
  for (cont=60;cont>=0;cont--)
  {
     LCD.setCursor(10,0);
  LCD.print(cont);
  delay(150);
  
  LCD.setCursor(11,0);
  LCD.print(" ");
  }
}
}
