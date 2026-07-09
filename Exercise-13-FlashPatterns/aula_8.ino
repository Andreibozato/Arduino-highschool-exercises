#define BOTAO1 8
#define BOTAO2 9
#define BOTAO3 10
#define BOTAO4 11
#define LED1 0
#define LED2 1
#define LED3 2
#define LED4 3


void setup() {

 pinMode (BOTAO1, INPUT_PULLUP);
 pinMode (BOTAO2, INPUT_PULLUP);
 pinMode (BOTAO3, INPUT_PULLUP);
pinMode (BOTAO4, INPUT_PULLUP);
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT);
pinMode (LED4, OUTPUT);

}

void loop() {
 
  int x; 

 if(!digitalRead(BOTAO1))

 {
  for(x=0;x<10;x++)
  {
    digitalWrite(LED1,1);
    delay(300);
    digitalWrite(LED1,0);
    delay(300);
  }
  
 }

if(!digitalRead(BOTAO2))

{
  while(digitalRead(BOTAO3))
  {
    digitalWrite(LED2,1);
    delay(200);
    digitalWrite(LED2,0);
    delay(200);
  }
}

if(!digitalRead(BOTAO4))

{
  for(x=0;x<15;x++)
{
  digitalWrite(LED3,1);
    delay(200);
    digitalWrite(LED3,0);
    delay(200);
    digitalWrite(LED4,1);
    delay(200);
    digitalWrite(LED4,0);
    delay(200);
}





}




}
