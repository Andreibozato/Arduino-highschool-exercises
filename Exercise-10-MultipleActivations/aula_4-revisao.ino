 #define BOTAO1 8
#define BOTAO2 9
#define BOTAO3 10
#define BOTAO4 11
#define BOTAO5 12
#define LED1 2
#define LED2 3
#define MOTOR1 A5
#define MOTOR2 A4



void setup() {
  pinMode(BOTAO1,INPUT);
  pinMode(BOTAO2,INPUT);
  pinMode(BOTAO3,INPUT_PULLUP);
  pinMode(BOTAO4,INPUT_PULLUP);
  pinMode(BOTAO5,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);

  

}

void loop() {
  if(digitalRead(BOTAO1))
  {
    digitalWrite(LED1,1);
    digitalWrite(LED2,1);
    digitalWrite(MOTOR1,1);
    digitalWrite(MOTOR2,1);
    delay(3000);
    digitalWrite(LED1,0);
    digitalWrite(LED2,0);
    digitalWrite(MOTOR1,0);
    digitalWrite(MOTOR2,0);

    
  }
  if(digitalRead(BOTAO2))
  {
    digitalWrite(LED1,1);
    delay(500);
    digitalWrite(LED1,0);
    delay(500);
    digitalWrite(LED1,1);
    delay(500);
    digitalWrite(LED1,0);
    delay(500);
    digitalWrite(LED2,1);
    delay(500);
    digitalWrite(LED2,0);
    delay(500);
    digitalWrite(LED2,1);
    delay(500);
    digitalWrite(LED2,0);
    delay(500);
    digitalWrite(LED2,1);
    delay(500);
    digitalWrite(LED2,0);
    delay(500);
  }
  if(!digitalRead(BOTAO3))
  {
    digitalWrite(LED1,1);
    digitalWrite(MOTOR1,1);
    delay(2000);
    digitalWrite(LED2,1);
    digitalWrite(MOTOR2,1);
    delay(2000);
    digitalWrite(LED1,0);
    digitalWrite(MOTOR1,0);
    delay(2000);
    digitalWrite(LED2,0);
    digitalWrite(MOTOR2,0);


  }
  
  if(!digitalRead(BOTAO4))
  {
  digitalWrite(LED1,1);
  digitalWrite(MOTOR1,1);
  digitalWrite(LED2,1);
  digitalWrite(MOTOR2,1);
  }
  
  if(!digitalRead(BOTAO5))
  {
  digitalWrite(LED1,0);
  digitalWrite(MOTOR1,0);
  digitalWrite(LED2,0);
  digitalWrite(MOTOR2,0);
  }









  
  

}
