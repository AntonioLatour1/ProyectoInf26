#include <LiquidCrystal.h>

#define verde 3
#define rojo 5
#define azul 4
#define buzz 2

//tilt
#define tilt 13

//LCD
LiquidCrystal lcd(7,8,9,10,11,12);


void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(buzz, OUTPUT);
  
  //tilt
  pinMode(tilt, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
   //temperatura cuenta
   int cuentaT = analogRead(A1);
   float volt = cuentaT * (5.0 / 1024.0);
   int temp = (volt - 0.5) * 100.0;
  	
   Serial.print("Temperatura: ");
   Serial.print(temp);
   Serial.println(" c");
   //flex
   int mapFlex = analogRead(A0);
   int flex = map(mapFlex,0,7,0,100);
   Serial.print("Flex: ");
   Serial.println(flex);
  
   //estado paquete
   if(flex < 30 && temp >= 5 && temp < 35)
   {
     digitalWrite(verde,HIGH);
     digitalWrite(rojo,LOW);
     digitalWrite(azul,LOW);
     delay(1000);
     digitalWrite(buzz,LOW);
     lcd.setCursor(14,0);
  	 lcd.print("[O]");
   }
  else if(flex >= 30 && flex < 60 || temp >= 35 && temp < 45)
  {
  	 analogWrite(verde,100);
     digitalWrite(rojo,HIGH);
     digitalWrite(azul,LOW);
     digitalWrite(buzz,LOW);
     delay(500);
     digitalWrite(buzz,HIGH);
     delay(500);
     lcd.setCursor(14,0);
  	 lcd.print("[A]");
  
  }
  else if(tiltMed == HIGH || flex >= 60 || temp >= 45)
  {
  	 analogWrite(verde,0);
     digitalWrite(rojo,HIGH);
     digitalWrite(azul,LOW);
     digitalWrite(buzz,LOW);
     delay(50);
     digitalWrite(buzz,HIGH);
     delay(50);
     lcd.setCursor(14,0);
  	 lcd.print("[D]");
  }
  
  //contador flex
  if(flex > 60)
  {
  	contadorFlex =+;
  }
  //contador Tilt
  if(tiltMed == HIGH)
  {
  	contadorTilt =+;
  }
   
  lcd.setCursor(0,0);
  lcd.print("T: ");
  lcd.print(44);
  lcd.print("c");
  
  lcd.setCursor(8, 0);
  lcd.print("F: ");
  lcd.print(flex);
  
  
  
  
  
   
 
}
