//Sensor Distancia
int sensor = 7;

long tiempo = 0;
float distancia = 0;
//

//boton
int cont = 0;
bool pausado = false;
bool ultimoBoton = LOW;
//
//Ledbuzz
#define verde 4
#define rojo 5
#define buzz 3
#define azul 8
//


void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //boton
   bool botonA = digitalRead(6);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    pausado = !pausado;
    delay(50);
  }

  ultimoBoton = botonA;

  if (pausado == false)
  {
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(buzz, 0);
    digitalWrite(azul, HIGH);
  }
  else
  {
    pinMode(sensor, OUTPUT);
    digitalWrite(sensor, LOW);
    delayMicroseconds(2);

    digitalWrite(sensor, HIGH);
    delayMicroseconds(5);
    digitalWrite(sensor, LOW);

    pinMode(sensor, INPUT);
    tiempo = pulseIn(sensor, HIGH, 30000);

    distancia = tiempo * 0.034 / 2;

    Serial.print("Distancia: ");
    Serial.print(distancia);
    Serial.println(" cm");
    
    if(distancia >= 150)
    {
    	digitalWrite(verde,HIGH);
      	analogWrite(buzz, 0);
      	digitalWrite(rojo, LOW);
        digitalWrite(azul, LOW);
    }
    else if(distancia >= 50 && distancia < 150)
    {
    	analogWrite(verde,175);
      	
      	if(distancia >= 50 && distancia < 150)
        {
          delay(500);
          analogWrite(buzz, 255);
        }
      
      	digitalWrite(rojo, HIGH);
        digitalWrite(azul, LOW);
    }
    else if(distancia < 50 && distancia > 1)
    {
    	analogWrite(verde,0);
      	
      	if(distancia < 50)
        {
          delay(500);
          analogWrite(buzz, 50);
        }
      
      	digitalWrite(rojo, HIGH);
        digitalWrite(azul, LOW);
    }
    delay(500);
  }
////
  
  
  
  
  
  
  
  
}