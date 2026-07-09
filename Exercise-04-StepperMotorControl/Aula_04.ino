#include <Stepper.h>
#include<LiquidCrystal_I2C.h>
Stepper motor (64,8,10,9,11);
LiquidCrystal_I2C LCD(0x27,16,2);

int rpm, liga=0, valor_pot;

#define BOTAO1 2
#define BOTAO2 3
#define BOTAO3 4
#define BOTAO4 5
#define BOTAO5 6
#define BOTAO6 7
#define POT A0

void setup() {

LCD.init();
LCD.backlight();
pinMode(BOTAO1,INPUT);
pinMode(BOTAO2,INPUT);
pinMode(BOTAO3,INPUT);
pinMode(BOTAO4,INPUT);
pinMode(BOTAO5,INPUT);
pinMode(BOTAO6,INPUT);
pinMode(POT,INPUT);
}

void loop() {
  
valor_pot=analogRead(POT);
rpm=map(valor_pot,0,1022,1,100);
motor.setSpeed(rpm);
LCD.setCursor(0,0);
LCD.print("RPM=");
LCD.setCursor(5,0);
LCD.print(rpm);
LCD.print("   ");

if(digitalRead(BOTAO1))
{
  liga=1;

  LCD.setCursor(0,1);
  LCD.print("Horario     ");
}
if(digitalRead(BOTAO2))
{
  liga=2;

  LCD.setCursor(0,1);
  LCD.print("Anti-Horario");
}
if(digitalRead(BOTAO3))
{
  liga=0;

  LCD.setCursor(0,1);
  LCD.print("Parado        ");
}

if(liga==1)
{
  motor.step(1);

}
if(liga==2)
{
  motor.step(-1);
  
}

if(digitalRead(BOTAO4))
{
  motor.step(64);
  LCD.setCursor(0,1);
  LCD.print("1 volta Frente");
  
}
if(digitalRead(BOTAO5))
{
  motor.step(-64);
   LCD.setCursor(0,1);
  LCD.print("1 volta Tras   ");
}
if(digitalRead(BOTAO6))
{
  motor.step(128);
  delay(2000);
  motor.step(-128);
   LCD.setCursor(0,1);
  LCD.print("Processo 1      ");

}

}
