#include <LiquidCrystal.h>


//pulsador
bool pausado = false;
bool ultimoBoton = false;
//alarma
#define buzz 6
#define verde 3
#define azul 4
#define rojo 5

//LCD
LiquidCrystal lcd(7,8,9,10,11,12);

//medicion
int temperatura = A2;
int humedad = A1;
void setup()
{
  //alarma
  pinMode(buzz, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  //Consola
  Serial.begin(9600);
  //LCD INICIO
  lcd.begin(16, 2);
}


void loop()
{
  //boton
  
  bool botonA = digitalRead(2);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    pausado = !pausado;
   
  }

  ultimoBoton = botonA;
  //humbral cuenta
  float crudoPot = analogRead(A3);
  int humbral = map(crudoPot, 0, 1023, 0 ,100);
  
  //humedad cuenta
  float cuentaH = analogRead(A1); 
  float valorH = map(cuentaH,0, 1023,0,100);
  
  //temperatura cuenta
   int cuentaT = analogRead(A2);
   float volt = cuentaT * (5.0 / 1024.0);
   int temp = (volt - 0.5) * 100.0;
  
  lcd.setCursor(0,0);
  lcd.print("T: ");
  lcd.print(temp);
  lcd.print('C');
  
  lcd.setCursor(10,0);
  lcd.print("H: ");
  lcd.print(valorH);
  lcd.print('%');
  
  lcd.setCursor(0,1);
  lcd.print("Humbral: ");
  lcd.print(humbral);
  lcd.print('%');
  
    
    
  
  
  
  if (pausado == HIGH)
  {
  	
    
    
    //humbral
    
    
    Serial.print("Humbral de humedad en: ");
    Serial.print(humbral);
    Serial.println(" %");
    
    //humedad
    
    
    Serial.print("Humedad:");
    Serial.print(valorH);
    Serial.println("%");
    
    //temperatura ***
    

    Serial.print("Temperatura: ");
    Serial.print(temp);
    Serial.println(" C");
    
    Serial.println("Sistema Activado");
    
    //condicionales
	if(temp >= 18 && temp < 28 && valorH > humbral)
    {
        //leds
      	Serial.println("Estado Optimo");
        digitalWrite(verde, HIGH);
        digitalWrite(azul, LOW);
        digitalWrite(rojo, LOW);
        digitalWrite(buzz, LOW);
      
      	lcd.setCursor(13,1);
  		lcd.print("[O]");
    }
    else if(temp >= 28 && temp < 35 || valorH >(humbral-10) && valorH < humbral)
    {
      	Serial.println("Estado Precaucion");
    	digitalWrite(rojo, HIGH);
      	analogWrite(verde, 100);
      	digitalWrite(azul, LOW);
      	digitalWrite(buzz,LOW);
     	delay(400);
      	digitalWrite(buzz,HIGH);
      	delay(400);
      	lcd.setCursor(13,1);
  		lcd.print("[P]");
      	
    }
    else if(temp >= 35 || valorH < (humbral-10))
    {
      	Serial.println("Estado Critico");
    	digitalWrite(rojo, HIGH);
      	analogWrite(verde, 0);
      	digitalWrite(azul, LOW);
      	digitalWrite(buzz,LOW);
     	delay(50);
      	digitalWrite(buzz,HIGH);
      	delay(50);
      	lcd.setCursor(13,1);
  		lcd.print("[C]");
    }
    
      
  }
  else
  {
  	
    digitalWrite(azul, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(buzz, LOW);
    lcd.setCursor(14,1);
  	lcd.print("[D]");
    
    
  }
  
  

}