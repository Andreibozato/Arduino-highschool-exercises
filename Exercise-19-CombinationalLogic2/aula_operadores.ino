#define CHA 8
#define CHB 9
#define CHC 10
#define CHD 11
#define CHE 12
#define LED1 2
#define LED2 3
#define MOTOR1 0
#define MOTOR2 1

void setup() {
  
pinMode (CHA,INPUT);
pinMode (CHB,INPUT);
pinMode (CHC,INPUT);
pinMode (CHD,INPUT);
pinMode (CHE,INPUT);
pinMode (LED1,OUTPUT);
pinMode (LED2,OUTPUT);
pinMode (MOTOR1,OUTPUT);
pinMode (MOTOR2,OUTPUT);


}

void loop() {



if(digitalRead(CHA)&&digitalRead(CHB))
{
  digitalWrite (LED1,1);
  digitalWrite (MOTOR1,1);
  digitalWrite (MOTOR2,1);
}
if(digitalRead(CHC)||digitalRead(CHD))
{
  digitalWrite (LED1,0);
  digitalWrite (MOTOR1,0);
  digitalWrite (MOTOR2,0);
}

if(digitalRead(CHC)&&(digitalRead(CHD)||digitalRead(CHE)))

{
  digitalWrite (LED2,1);
}

else

{
  digitalWrite (LED2,0);
}






  
}
