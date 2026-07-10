#define CRESCENTE A5
#define DECRESCENTE A4
#define PARAR A3
#define RESET A2



int inic, inid;





void setup() {

DDRD=0b00001111;
DDRB=0b00001111;
DDRC=0b00000000;

inic = 0;
inid = 99;



 
}

void loop() {

int contador, unidade, dezena;
float temp;

if(!digitalRead(CRESCENTE))
{
for (contador=inic;contador<=99;contador++)
{
  temp=contador;
  dezena=temp/10;
  unidade=contador-10*dezena;
PORTD=unidade;
PORTB=dezena;
delay(200);
if(contador >=99) {
  inid=99;
  inic=0;
}
  if(!digitalRead(PARAR))
  {
    inid=contador;
    inic=contador;
    break;
  }

    
    
  }
}

  


if(!digitalRead(DECRESCENTE))
{
for (contador=inid;contador>=0;contador--)
{
  temp=contador;
  dezena=temp/10;
  unidade=contador-10*dezena;
PORTD=unidade;
PORTB=dezena;
delay(200);
if(contador <=0) 
{
  inic=0;
  inid=99;
}
  if(!digitalRead(PARAR))
  {
    inic=contador;
    inid=contador;
    break;
  }
  
}

  
}
if(!digitalRead(RESET))
  {
    PORTD = 0;
    PORTB = 0;
    inic = 0;
    inid = 99;
    
    
  }
}
