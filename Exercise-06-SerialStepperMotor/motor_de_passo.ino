//Bibliotecas 
#include <Stepper.h>
#include <Wire.h>

//Definições
#define BTA 2
#define BTB 3
#define BTC 4
#define BTD 5
#define BTE 6
#define BTF 7

//Variáveis 
int num_passos = 2000;
int liga = 0;
int rpm = 14;

//Instância
Stepper motor(num_passos, 9, 11, 10, 12);
void setup() {
//Configuração de I/Os
pinMode(BTA,    INPUT_PULLUP);
pinMode(BTB,    INPUT_PULLUP);
pinMode(BTC,    INPUT_PULLUP);
pinMode(BTD,    INPUT_PULLUP);
pinMode(BTE,    INPUT_PULLUP);
pinMode(BTF,    INPUT_PULLUP);

Serial.begin(9600);
while(!Serial);
Serial.setTimeout(1);
Serial.println("Motor de Passo");
motor.setSpeed(rpm);
}

void loop() {
//Serial
String comando;

if(Serial.available() > 0){
  comando = Serial.readString();
  comando.trim ();
}

//comandos no serial
if(comando == "H"){
  Serial.println("Uma volta Horario");
  motor.step(2000);
}
if(comando == "A"){
  Serial.println("Uma volta Anti-Horario");
  motor.step(-2000);
}
if(comando == "P"){
  Serial.println("Processo 1");
  motor.step(4000);
  delay(2000);
  motor.step(-4000);
}




if(!digitalRead(BTF)){
  rpm++;
  if(rpm >= 14){
    rpm = 14;
  }

Serial.print("RPM=");
Serial.println(rpm);
while(!digitalRead(BTF));
}

if(!digitalRead(BTE)){
  rpm--;
  if(rpm <= 1){
    rpm = 1;
  }
Serial.print("RPM=");
Serial.println(rpm);
while(!digitalRead(BTE));
}

if(!digitalRead(BTA)){
  liga = 1;
  Serial.println("Horario");
  while(!digitalRead(BTA));
}

if(!digitalRead(BTB)){
  liga = 2;
  Serial.println("Anti-Horario");
  while(!digitalRead(BTB));
}

if(!digitalRead(BTC)){
  liga = 0;
  Serial.println("Parado");
  while(!digitalRead(BTC));
}

//Laços da variável liga
if(liga == 1){
  motor.step(1);
}

if(liga == 2){
  motor.step(-1);
}



motor.setSpeed(rpm);
  
}
