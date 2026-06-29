//pulsador
bool pausado = false;
bool ultimoBoton = false;

//pir
int pir = A0;

//leds
#define ledrojo 4
#define ledverde 5
#define buzz 3
#define ledazul 7

//ultrasonico
int trig = 10;
int echo = 9;


void setup()
{
  //visuales
  pinMode(ledrojo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(buzz, OUTPUT);
  
  //pir
  pinMode(pir, INPUT);
  
  //sensor ultrasonico
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  
  //boton
  
  bool botonA = digitalRead(6);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    pausado = !pausado;
   
  }

  ultimoBoton = botonA;

  //prendido
  
  if (pausado == HIGH)
  {
    Serial.println("Sistema prendido");
    //Serial.println("boton prendido");
    //movimiento
    bool PIR = digitalRead(pir);
    
    //ultrasonico
      digitalWrite(trig, LOW);
      delayMicroseconds(2);
      digitalWrite(trig, HIGH);
      delayMicroseconds(10);
      digitalWrite(trig, LOW);

      float duracion = pulseIn(echo, HIGH, 30000);
      float distancia = duracion * 0.0343 / 2;

      
    
    
    
    if(PIR == HIGH && distancia >= 150)
    {
    	
        digitalWrite(buzz, LOW);
        digitalWrite(ledverde, HIGH);
        digitalWrite(ledazul, LOW);
    	digitalWrite(ledrojo, LOW);
      Serial.print("Distancia: ");
      Serial.print(distancia);
      Serial.println(" cm");
        
    }
    else if(PIR == HIGH && distancia >= 50 && distancia < 150)
    {

            analogWrite(ledverde, 100);
            digitalWrite(ledazul, LOW);
            digitalWrite(ledrojo, HIGH);

            digitalWrite(buzz, LOW);
            delay(500);
            digitalWrite(buzz, HIGH);
      Serial.print("Distancia: ");
      Serial.print(distancia);
      Serial.println(" cm");

    }
    else if(PIR == HIGH && distancia < 50)
    {

          analogWrite(ledverde,0);
          digitalWrite(ledazul, LOW);
          digitalWrite(ledrojo, HIGH);

          digitalWrite(buzz, LOW);
          delay(50);
          digitalWrite(buzz, HIGH);
      Serial.print("Distancia: ");
      Serial.print(distancia);
      Serial.println(" cm");
    }
  }
  //apagado
  else
  {
    Serial.println("sistema apagado");
  	digitalWrite(buzz, LOW);
    digitalWrite(ledverde, LOW);
    digitalWrite(ledazul, HIGH);
    digitalWrite(ledrojo, LOW);
  }
    

  
  
  
  
  
 
}