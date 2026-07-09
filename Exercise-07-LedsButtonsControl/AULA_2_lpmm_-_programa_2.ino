#define BOTAO1 2
#define BOTAO2 3
#define BOTAO3 4
#define BOTAO4 5
#define LED1 10
#define LED2 11
#define LED3 12
#define LED4 13


void setup() {
  pinMode(BOTAO1,INPUT);
  pinMode(BOTAO2,INPUT);
  pinMode(BOTAO3,INPUT);
  pinMode(BOTAO4,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
    

}

void loop() {
  
  if(digitalRead(BOTAO1)==1)
  { 
  digitalWrite(LED1,1);
  }
  else
  {
  digitalWrite(LED1,0);
  }
  
 if(digitalRead(BOTAO2)==1)
  { 
  digitalWrite(LED2,1);
  digitalWrite(LED3,1);
  }

if(digitalRead(BOTAO3)==1)
  { 
  digitalWrite(LED2,0);
  digitalWrite(LED3,0);
  }

if(digitalRead(BOTAO4)==1)
{
  digitalWrite(LED4,1);
  delay(3000);
  digitalWrite(LED4,0);
  
}











  }
