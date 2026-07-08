#include <Wire.h>
#define M1A 4
#define M1B 5
#define M2A 6
#define M2B 7
#define Lanterna 12
#define Farol 13


void tras()
{
  digitalWrite (M1A, 0);
  digitalWrite (M1B, 1);
  digitalWrite (M2A, 0);
  digitalWrite (M2B, 1);
}
void parar()
{
  digitalWrite (M1A, 0);
  digitalWrite (M1B, 0);
  digitalWrite (M2A, 0);
  digitalWrite (M2B, 0);
}
void frente()
{
  digitalWrite (M1A, 1);
  digitalWrite (M1B, 0);
  digitalWrite (M2A, 1);
  digitalWrite (M2B, 0);
}
void esquerda()
{
  digitalWrite (M1A, 0);
  digitalWrite (M1B, 0);
  digitalWrite (M2A, 1);
  digitalWrite (M2B, 0);
}
void direita()
{
  digitalWrite (M1A, 1);
  digitalWrite (M1B, 0);
  digitalWrite (M2A, 0);
  digitalWrite (M2B, 0);
}
void Tesquerda()
{
  digitalWrite (M1A, 0);
  digitalWrite (M1B, 1);
  digitalWrite (M2A, 0);
  digitalWrite (M2B, 0);
}
void Tdireita()
{
  digitalWrite (M1A, 0);
  digitalWrite (M1B, 0);
  digitalWrite (M2A, 0);
  digitalWrite (M2B, 1);
}
void setup() {
 pinMode (M1A, OUTPUT);
 pinMode (M1B, OUTPUT);
 pinMode (M2A, OUTPUT);
 pinMode (M2B, OUTPUT);
 pinMode (Lanterna, OUTPUT);
 pinMode (Farol, OUTPUT);
Serial.begin(9600);
while(!Serial);
Serial.setTimeout(1);
parar();

}

void loop() {
 
String Comando;
if(Serial.available()>0)
{
  Comando=Serial.readString();
  Comando.trim();
}
if(Comando=="S")
{
  parar();
}
if(Comando=="F")
{
  frente();
}
if(Comando=="B")
{
  tras();
}
if(Comando=="L")
{
  esquerda();
}
if(Comando=="G")
{
  esquerda();
}
if(Comando=="H")
{
  Tesquerda();
}
if(Comando=="R")
{
  direita();
}
if(Comando=="I")
{
  direita();
}
if(Comando=="J")
{
  Tdireita();
}
if(Comando=="U")
{
  digitalWrite(Lanterna,1);
}
if(Comando=="u")
{
  digitalWrite(Lanterna,0);
}
if(Comando=="W")
{
  digitalWrite(Farol,1);
}
if(Comando=="w")
{
  digitalWrite(Farol,0);
}
}
