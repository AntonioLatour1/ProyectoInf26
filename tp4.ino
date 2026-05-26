#define pinLuz A4
#define pinTemp A5

#define pinVerde 4
#define pinAzul 3
#define pinRojo 5

int lectLuz = 0;
int lectTemp = 0;

float volt = 0;
float valorTemp = 0;

int valorLuz = 0;

void setup()
{
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
  pinMode(pinRojo, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  lectTemp = analogRead(pinTemp);
  lectLuz = analogRead(pinLuz);

  volt = lectTemp * 5.0 / 1023.0;
  valorTemp = (volt - 0.5) * 100.0;

  valorLuz = map(lectLuz, 1, 310, 100, 0);

  Serial.print("El nivel de luz actual es: ");
  Serial.print(valorLuz);
  Serial.println("%");

  Serial.print("La temperatura actual: ");
  Serial.print(valorTemp);
  Serial.println("ºc");

  if (valorLuz >= 30 && valorLuz <= 70)
  {
    if (valorTemp > 90)
    {
      digitalWrite(pinRojo, HIGH);
      digitalWrite(pinAzul, LOW);
      digitalWrite(pinVerde, LOW);
    }
    else if (valorTemp < 18)
    {
      digitalWrite(pinRojo, LOW);
      digitalWrite(pinAzul, HIGH);
      digitalWrite(pinVerde, LOW);
    }
    else
    {
      digitalWrite(pinRojo, LOW);
      digitalWrite(pinAzul, LOW);
      digitalWrite(pinVerde, HIGH);
    }
  }
  else
  {
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinAzul, LOW);
    digitalWrite(pinVerde, LOW);
  }

  delay(1000);
}
