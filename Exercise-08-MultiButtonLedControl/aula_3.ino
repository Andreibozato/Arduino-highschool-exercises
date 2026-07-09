#define BOTAO1 2
#define BOTAO2 3
#define BOTAO3 4
#define BOTAO4 5
#define BOTAO5 6
#define BOTAO6 7
#define LED1 10
#define LED2 11
#define LED3 12
#define LED4 13



void setup() {
  pinMode(BOTAO1,INPUT);
  pinMode(BOTAO2,INPUT);
  pinMode(BOTAO3,INPUT);
  pinMode(BOTAO4,INPUT_PULLUP);
  pinMode(BOTAO5,INPUT_PULLUP);
  pinMode(BOTAO6,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);







  
}

void loop() {
  if(digitalRead(BOTAO1))
  {
    digitalWrite(LED1,1);
    delay(2000);
    digitalWrite(LED1,0);
    
  }

  if(!digitalRead(BOTAO4))
  {
    digitalWrite(LED2,1);
    delay(2000);
    digitalWrite(LED2,0);
  }

  if(digitalRead(BOTAO2))
  {
    digitalWrite(LED1,1);
    digitalWrite(LED2,1);
    digitalWrite(LED3,1);
    digitalWrite(LED4,1);

  }
   if(digitalRead(BOTAO3))
   {
    digitalWrite(LED1,0);
    digitalWrite(LED2,0);
    digitalWrite(LED3,0);
    digitalWrite(LED4,0);
    
   }

   if(!digitalRead(BOTAO5))
   {
     digitalWrite(LED1,1);
     digitalWrite(LED3,1);
     delay(2000);
     digitalWrite(LED1,0);
     digitalWrite(LED3,0);
     digitalWrite(LED2,1);
     digitalWrite(LED4,1);
     delay(2000);
     digitalWrite(LED2,0);
     digitalWrite(LED4,0);
   }
    if(!digitalRead(BOTAO6))
    {
    digitalWrite(LED1,1);
    digitalWrite(LED2,1);
    digitalWrite(LED3,1);
    digitalWrite(LED4,1);
    delay(1000);
    digitalWrite(LED1,0);
    delay(1000);
    digitalWrite(LED2,0);
    delay(1000);
    digitalWrite(LED3,0);
    delay(1000);
    digitalWrite(LED4,0);


      
    }

  


 

  

}
