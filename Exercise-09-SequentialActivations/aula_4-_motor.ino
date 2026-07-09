#define BOTAO1 8
#define BOTAO2 9
#define BOTAO3 10
#define BOTAO4 11
#define LED1 2
#define LED2 3
#define MOTOR1 0
#define MOTOR2 1


void setup() {
  pinMode(BOTAO1,INPUT_PULLUP);
  pinMode(BOTAO2,INPUT_PULLUP);
  pinMode(BOTAO3,INPUT_PULLUP);
  pinMode(BOTAO4,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);
 
}

void loop() {
  if(!digitalRead(BOTAO1))
  {
    digitalWrite(MOTOR1,1);
    digitalWrite(LED1,1);
    delay(5000);
    digitalWrite(MOTOR1,0);
    digitalWrite(LED1,0);
    digitalWrite(MOTOR2,1);
    digitalWrite(LED2,1);
    delay(3000);
    digitalWrite(MOTOR2,0);
    digitalWrite(LED2,0);
  
  }
  if(!digitalRead(BOTAO2))
  {
    digitalWrite(MOTOR1,1);
    delay(1000);
    digitalWrite(LED1,1);
    delay(1000);
    digitalWrite(MOTOR2,1);
    delay(1000);
    digitalWrite(LED2,1);
    delay(3000);
    digitalWrite(MOTOR1,0);
    digitalWrite(LED1,0);
    digitalWrite(MOTOR2,0);
    digitalWrite(LED2,0);
   
  }
   if(!digitalRead(BOTAO3))
   {
    digitalWrite(MOTOR1,1);
    digitalWrite(LED1,1);
    digitalWrite(MOTOR2,1);
    digitalWrite(LED2,1);
    delay(3000);
    digitalWrite(MOTOR1,0);
    digitalWrite(LED1,0);
    delay(4000);
    digitalWrite(MOTOR2,0);
    digitalWrite(LED2,0);


    
   }
   if(!digitalRead(BOTAO4))
   {
    digitalWrite(MOTOR1,1);
    delay(1000);
    digitalWrite(LED1,1);
    delay(1000);
    digitalWrite(MOTOR2,1);
    delay(1000);
    digitalWrite(LED2,1);
    delay(3000);
    digitalWrite(LED2,0);
    delay(1000);
    digitalWrite(MOTOR2,0);
    delay(1000);
    digitalWrite(LED1,0);
    delay(1000);
    digitalWrite(MOTOR1,0);
   }







  
 

}
