#define CRESCENTE A5
#define DECRESCENTE A6
#define PARAR A3




void setup() {


pinMode (CRESCENTE, INPUT);
pinMode (DECRESCENTE, INPUT);
pinMode (PARAR, INPUT);
DDRD=0b00001111;
DDRB=0b00001111;



}

void loop() {

int contador;

if(!digitalRead(CRESCENTE))
{
for (contador=0;contador<=9;contador++)
{
PORTD=contador;
delay(1000);

  
}

  
}






 
}
