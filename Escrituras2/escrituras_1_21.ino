#define rojo 6
#define verde 3
#define azul 5

#define bot 10
#define buzz 9

#define delayPot A0
#define rPote A1
#define gPote A2
#define bPote A3

bool pausado = true;
bool ultimoBoton = LOW;

int r = 0;
int g = 0;
int b = 0;
int vel = 0;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(bot, INPUT);

  Serial.begin(9600);
}

void loop()
{
  bool botonA = digitalRead(bot);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    pausado = !pausado;
    delay(50);
  }

  ultimoBoton = botonA;

  if (pausado == true)
  {
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
    analogWrite(buzz, 0);
  }
  else
  {
    int valorTiempo = analogRead(delayPot);
    vel = map(valorTiempo, 0, 1023, 0, 3000);

    int rP = analogRead(rPote);
    int gP = analogRead(gPote);
    int bP = analogRead(bPote);

    r = map(rP, 0, 1023, 0, 255);
    g = map(gP, 0, 1023, 0, 255);
    b = map(bP, 0, 1023, 0, 255);

    Serial.print("Tiempo: ");
    Serial.println(vel / 1000.0);

    Serial.print("R:");
    Serial.println(r);

    Serial.print("G:");
    Serial.println(g);

    Serial.print("B:");
    Serial.println(b);

    Serial.println();

    analogWrite(rojo, r);
    analogWrite(verde, g);
    analogWrite(azul, b);

    delay(vel);

    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);

    botonA = digitalRead(bot);

    if (botonA == HIGH && ultimoBoton == LOW)
    {
      pausado = !pausado;
      delay(50);
    }

    ultimoBoton = botonA;

    if (pausado == false)
    {
      analogWrite(buzz, 255);
      delay(100);
      analogWrite(buzz, 0);

      for (int i = 0; i < 4; i++)
      {
        botonA = digitalRead(bot);

        if (botonA == HIGH && ultimoBoton == LOW)
        {
          pausado = !pausado;
          delay(50);
        }

        ultimoBoton = botonA;

        
        analogWrite(rojo, 255);
        analogWrite(verde, 65);
        analogWrite(azul, 0);
        analogWrite(buzz, 255);

        delay(100);

        analogWrite(rojo, 0);
        analogWrite(verde, 0);
        analogWrite(azul, 0);
        analogWrite(buzz, 0);

        delay(100);
      }
    }
  }
}