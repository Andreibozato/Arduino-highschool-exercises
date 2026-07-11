#include <Wire.h>
#include <Servo.h>
Servo servo1;
int pos = 90;

void setup() {

Serial.begin(9600);
while(!Serial);
Serial.setTimeout(1);
servo1.attach (9,1000,2000);
servo1.write(pos);
 
}

void loop() {
 
String comando; 
if(Serial.available()>0)
{
  comando=Serial.readString();
  comando.trim();
}

if(comando=="A")
{
  pos=0;
}
if(comando=="G")
{
  pos=180;
}
if(comando=="B")
{
  pos=30;
}
if(comando=="C")
{
  pos=60;
}
if(comando=="D")
{
  pos=90;
}
if(comando=="E")
{
  pos=120;
}
if(comando=="F")
{
  pos=150;
}
if(comando=="H")
{
  pos++;
  if(pos>=180)
  {
    pos=180;
  }
}
if(comando=="I")
{
  pos--;
  if(pos<=0)
  {
    pos=0;
  }
}
if(comando=="J")
{
  servo1.write(0);
  delay(100);
  for(pos=0;pos<=180;pos++)
 {
  servo1.write(pos);
  delay(25);
 }
}
if(comando=="K")
{
  servo1.write(0);
  delay(100);
  for(pos=180;pos>=0;pos--)
 {
  servo1.write(pos);
  delay(25);
 }
}
servo1.write(pos);
}
