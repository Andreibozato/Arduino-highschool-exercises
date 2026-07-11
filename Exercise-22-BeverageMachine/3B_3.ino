#include <Wire.h> 
#include <Servo.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD(0x27,16,2);

Servo servo_porta;
#define SENSOR_TEMPERATURA A2
#define V_CAFE 5
#define V_LEITE 6
#define V_CHOCOLATE 7
#define SENSOR_COPO 4
#define B_CAFE 8
#define B_CAFE_LEITE 9
#define B_CAPUCCINO 10
#define B_CHOCO 11


String comando;
int  temperatura,pronto;
float sensor_ad, valor_sensor_temp;

void abre_porta()
{
  servo_porta.write(0); 
}

void fecha_porta()
{
  servo_porta.write(180); 
}

void cafe()
{
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("           CAFE");
   abre_porta(); // abre porta para o copo
   delay(3000);
   LCD.setCursor(0,0);
   LCD.print(" COLOQUE O COPO");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(digitalRead(SENSOR_COPO)); // aguarda colocar o copo
   delay(3000);
   fecha_porta(); // fecha porta para o copo
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("  EM PREPARACAO");
   digitalWrite(V_CAFE,1); // abre valvula da parte do café
   delay(5000);
   digitalWrite(V_CAFE,0); // fecha valvula da parte do café
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("         PRONTA");
   delay(2000);
   abre_porta(); // abre porta para o copo
   LCD.setCursor(0,0);
   LCD.print(" RETIRE O COPO ");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(!digitalRead(SENSOR_COPO)); // aguarda RETIRAR o copo
   delay(3000);
   fecha_porta(); // fecha local para o copo
}

void cafe_leite()
{
  LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("CAFE COM LEITE");
   abre_porta(); // abre porta para o copo
   delay(3000);
   LCD.setCursor(0,0);
   LCD.print(" COLOQUE O COPO");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(digitalRead(SENSOR_COPO)); // aguarda colocar o copo
   delay(3000);
   fecha_porta(); // fecha porta para o copo
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("  EM PREPARACAO");
   digitalWrite(V_CAFE,1); // abre valvula da parte do café
   delay(5000);
   digitalWrite(V_CAFE,0); // fecha valvula da parte do café
   delay(1000);
   digitalWrite(V_LEITE,1); // abre valvula da parte do leite
   delay(5000);
   digitalWrite(V_LEITE,0); // fecha valvula da parte do leite
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("         PRONTA");
   delay(2000);
   abre_porta(); // abre porta para o copo
   LCD.setCursor(0,0);
   LCD.print(" RETIRE O COPO ");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(!digitalRead(SENSOR_COPO)); // aguarda RETIRAR o copo
   delay(3000);
   fecha_porta(); // fecha local para o copo
}

void capuccino()
{
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("     CAPUCCINO");
   abre_porta(); // abre porta para o copo
   delay(3000);
   LCD.setCursor(0,0);
   LCD.print(" COLOQUE O COPO");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(digitalRead(SENSOR_COPO)); // aguarda colocar o copo
   delay(3000);
   fecha_porta(); // fecha porta para o copo
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("  EM PREPARACAO");
   digitalWrite(V_CAFE,1); // abre valvula da parte do café
   delay(5000);
   digitalWrite(V_CAFE,0); // fecha valvula da parte do café
   delay(1000);
   digitalWrite(V_CHOCOLATE,1); // abre valvula da parte do chocolate
   delay(5000);
   digitalWrite(V_CHOCOLATE,0); // fecha valvula da parte do chocolate
   delay(1000);
   digitalWrite(V_LEITE,1); // abre valvula da parte do leite
   delay(5000);
   digitalWrite(V_LEITE,0); // fecha valvula da parte do leite
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("         PRONTA");
   delay(2000);
   abre_porta(); // abre porta para o copo
   LCD.setCursor(0,0);
   LCD.print(" RETIRE O COPO ");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(!digitalRead(SENSOR_COPO)); // aguarda RETIRAR o copo
   delay(3000);
   fecha_porta(); // fecha local para o copo
}

void chocolate()
{
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("     CHOCOLATE");
   abre_porta(); // abre porta para o copo
   delay(3000);
   LCD.setCursor(0,0);
   LCD.print(" COLOQUE O COPO");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(digitalRead(SENSOR_COPO)); // aguarda colocar o copo
   delay(3000);
   fecha_porta(); // fecha porta para o copo
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("  EM PREPARACAO");
   digitalWrite(V_CHOCOLATE,1); // abre valvula da parte do chocolate
   delay(5000);
   digitalWrite(V_CHOCOLATE,0); // fecha valvula da parte do chocolate
   delay(1000);
   digitalWrite(V_LEITE,1); // abre valvula da parte do leite
   delay(5000);
   digitalWrite(V_LEITE,0); // fecha valvula da parte do leite
   delay(1000);
   LCD.setCursor(0,0);
   LCD.print(" BEBIDA:       ");
   LCD.setCursor(0,1);
   LCD.print("         PRONTA");
   delay(2000);
   abre_porta(); // abre porta para o copo
   LCD.setCursor(0,0);
   LCD.print(" RETIRE O COPO ");
   LCD.setCursor(0,1);
   LCD.print("                ");
   while(!digitalRead(SENSOR_COPO)); // aguarda RETIRAR o copo
   delay(3000);
   fecha_porta(); // fecha local para o copo
}




void setup()
{
    pinMode(SENSOR_TEMPERATURA,INPUT);
    pinMode(SENSOR_COPO,INPUT_PULLUP);
    pinMode(V_CAFE,OUTPUT);
    pinMode(V_CHOCOLATE,OUTPUT);
    pinMode(V_LEITE,OUTPUT);
    pinMode(B_CAFE,INPUT);
    pinMode(B_CAFE_LEITE,INPUT);
    pinMode (B_CHOCO, INPUT);
    pinMode (B_CAPUCCINO, INPUT);
    

        
    LCD.init();
    LCD.backlight();
    servo_porta.attach(3,1000,2000);
    Serial.begin(9600);
    while(!Serial);  
    Serial.setTimeout(1);

    fecha_porta();
      
}

void loop()
{
  sensor_ad = analogRead(SENSOR_TEMPERATURA);
  temperatura = (sensor_ad*500)/1023;

  while(temperatura <= 100)
  {
   sensor_ad = analogRead(SENSOR_TEMPERATURA);
   temperatura = (sensor_ad*500)/1023; 
   LCD.setCursor(0,0);
   LCD.print("Aquecendo   ");
   LCD.setCursor(0,1);
   LCD.print("Temperatura");
   LCD.setCursor(12,1);
   LCD.print(temperatura);
   LCD.print((char)223);
   LCD.print("C");
   delay(400);
   pronto = 1;
  }

  if(pronto == 1)
  {
   LCD.clear();
   LCD.setCursor(0,0);
   LCD.print("Maquina Pronta");
   delay(3000);
   pronto = 0;
  }

   LCD.setCursor(0,0);
   LCD.print(" Escolha       ");
   LCD.setCursor(0,1);
   LCD.print("     Uma Opcao:");

   if(digitalRead(B_CAFE))
   {
     cafe();
   }
   
if(digitalRead(B_CAFE_LEITE))
   {
     cafe_leite();
   }

   if(digitalRead(B_CAPUCCINO))
   {
     capuccino();
   }

   if(digitalRead(B_CHOCO))
   {
     chocolate();
   }
   if(Serial.available() >  0)     
  {
   comando = Serial.readString();  
   comando.trim(); 

   if(comando == "C")
   {
     cafe();
   }
   if(comando == "L")
   {
     cafe_leite();
   }
   if(comando == "H")
   {
     chocolate();
   }
   if(comando == "P")
   {
     capuccino();
   }
  } 
 }
