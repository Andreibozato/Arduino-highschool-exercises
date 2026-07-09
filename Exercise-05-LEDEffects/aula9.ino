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
 
int X;
int Y;

if(!digitalRead(BOTAO1))
{
  for(X=0;X<8;X++)

 {
  digitalWrite(LED1,1);
  digitalWrite(LED2,1);
  digitalWrite(LED3,1);
  digitalWrite(LED4,1);
  delay(300);
  digitalWrite(LED1,0);
  digitalWrite(LED2,0);
  digitalWrite(LED3,0);
  digitalWrite(LED4,0);
  delay(300);
 }



}

if(!digitalRead(BOTAO2))

{
  for(X=0;X<10;X++)

{
  digitalWrite(LED1,1);
  digitalWrite(LED3,1);
  delay(200);
  digitalWrite(LED1,0);
  digitalWrite(LED3,0);
  digitalWrite(LED2,1);
  digitalWrite(LED4,1);
  delay(200);
  digitalWrite(LED2,0);
  digitalWrite(LED4,0);

}
}

if(!digitalRead(BOTAO3))

{
  for(Y=0;Y<3;Y++)
  {
    for(X=0;X<5;X++)
    {
    digitalWrite(LED1,1);
    delay(200);
    digitalWrite(LED1,0);
    delay(200);
    }
  digitalWrite(LED2,1);
  delay(200);
 digitalWrite(LED2,0);
 delay(200);
    
  }

}


if(!digitalRead(BOTAO4))
{

while(!digitalRead(BOTAO4))

{
  digitalWrite(LED4,1);
  delay(200);
  digitalWrite(LED4,0);
  delay(200);
}







  
}

}
