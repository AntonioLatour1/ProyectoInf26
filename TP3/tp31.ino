#include <LiquidCrystal.h>

int sensortemp = A0;
int sensorluz = A1;

int lect = 0;
float volt = 0;
float temp = 0;

#define rojo1 4
#define verde1 3
#define azul1 2
#define buzz 5
#define distanciaPin 6
#define mov A2

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

long duracion = 0;
int distancia = 0;

void setup()
{
  Serial.begin(9600);

  lcd.begin(16, 2);

  pinMode(rojo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(mov, INPUT);

  digitalWrite(rojo1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(azul1, LOW);
  analogWrite(buzz, 0);

}

void loop()
{
  lect = analogRead(sensortemp);

  volt = lect * 5.0 / 1023.0;
  temp = (volt - 0.5) * 100;

  int luzA = analogRead(sensorluz);

  int PIR = digitalRead(mov);
  pinMode(distanciaPin, OUTPUT);
  digitalWrite(distanciaPin, LOW);
  delayMicroseconds(2);
  digitalWrite(distanciaPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(distanciaPin, LOW);
  pinMode(distanciaPin, INPUT);
  duracion = pulseIn(distanciaPin, HIGH);

  distancia = duracion * 0.034 / 2;

  Serial.print("temperatura: ");
  Serial.print(temp);
  Serial.println(" C");

  Serial.print("luz: ");
  Serial.println(luzA);

  Serial.print("movimiento: ");
  Serial.println(PIR);

  Serial.print("distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  lcd.clear();

  if (luzA < 205)
  {
    lcd.setCursor(0, 0);
    lcd.print("Noche ");
    lcd.print("T:");
    lcd.print(temp);

    lcd.setCursor(0, 1);
    lcd.print("M:");
    lcd.print(PIR);
    lcd.print(" L:");
    lcd.print(luzA);

    if (temp > 39)
    {
      Serial.println("Temperatura alta PELIGRO");

      digitalWrite(rojo1, HIGH);
      digitalWrite(verde1, LOW);
      digitalWrite(azul1, LOW);

      analogWrite(buzz, 255);
      delay(200);
      analogWrite(buzz, 0);
    }
    else if (PIR == HIGH)
    {
      Serial.println("Movimiento detectado de noche");

      digitalWrite(rojo1, HIGH);
      digitalWrite(verde1, HIGH);
      digitalWrite(azul1, LOW);

      analogWrite(buzz, 255);
      delay(200);
      analogWrite(buzz, 0);
    }
    else
    {
      Serial.println("Noche sin peligro");

      digitalWrite(rojo1, LOW);
      digitalWrite(verde1, LOW);
      digitalWrite(azul1, LOW);

      analogWrite(buzz, 0);
    }
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print("DIA ");
    lcd.print("Dist:");
    lcd.print(distancia);
    lcd.print("cm");

    lcd.setCursor(0, 1);
    lcd.print("L:");
    lcd.print(luzA);
    lcd.print(" M:");
    lcd.print(PIR);

    if (distancia < 100)
    {
      Serial.println("peligro: persona a menos de 1 metro");

      digitalWrite(rojo1, HIGH);
      digitalWrite(verde1, LOW);
      digitalWrite(azul1, LOW);

      analogWrite(buzz, 255);
      delay(150);
      analogWrite(buzz, 0);
      delay(150);
      analogWrite(buzz, 255);
      delay(150);
      analogWrite(buzz, 0);
    }
    else
    {
      Serial.println("Dia sin peligro");

      digitalWrite(rojo1, LOW);
      digitalWrite(verde1, HIGH);
      digitalWrite(azul1, LOW);

      analogWrite(buzz, 0);
    }
  }

  delay(500);
}