#include <Adafruit_NeoPixel.h>

#define boton 4
#define pot 3
#define pin 2

int cantidad = 12;
int contador = 0;
bool ultimoBoton = LOW;
int lecturaPot = 0;
int tiempo = 0;

Adafruit_NeoPixel anillo(cantidad, pin, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(boton, INPUT);
  pinMode(pot, INPUT);

  anillo.begin();
  anillo.setBrightness(50);
  anillo.show();
}

void loop()
{
  lecturaPot = analogRead(pot);
  tiempo = map(lecturaPot, 0, 1023, 100, 1000);

  bool botonActual = digitalRead(boton);

  if (botonActual == HIGH && ultimoBoton == LOW)
  {
    contador++;

    if (contador > 3)
    {
      contador = 0;
    }

    delay(50);
  }

  ultimoBoton = botonActual;

  for (int i = 0; i < 3; i++)
  {
    lecturaPot = analogRead(pot);
    tiempo = map(lecturaPot, 0, 1023, 100, 1000);

    botonActual = digitalRead(boton);

    if (botonActual == HIGH && ultimoBoton == LOW)
    {
      contador++;

      if (contador > 3)
      {
        contador = 0;
      }

      delay(50);
    }

    ultimoBoton = botonActual;

    if (contador == 1)
    {
      anillo.setPixelColor(0, anillo.Color(0, 0, 255));
      anillo.setPixelColor(2, anillo.Color(0, 0, 255));
      anillo.setPixelColor(4, anillo.Color(0, 0, 255));
      anillo.setPixelColor(6, anillo.Color(0, 0, 255));
      anillo.setPixelColor(8, anillo.Color(0, 0, 255));
      anillo.setPixelColor(10, anillo.Color(0, 0, 255));

      anillo.show();

      for (int espera = 0; espera < tiempo; espera++)
      {
        lecturaPot = analogRead(pot);
        tiempo = map(lecturaPot, 0, 1023, 100, 1000);

        botonActual = digitalRead(boton);

        if (botonActual == HIGH && ultimoBoton == LOW)
        {
          contador++;

          if (contador > 3)
          {
            contador = 0;
          }

          delay(50);
        }

        ultimoBoton = botonActual;
        delay(1);
      }

      anillo.clear();
      anillo.show();

      anillo.setPixelColor(1, anillo.Color(255, 0, 0));
      anillo.setPixelColor(3, anillo.Color(255, 0, 0));
      anillo.setPixelColor(5, anillo.Color(255, 0, 0));
      anillo.setPixelColor(7, anillo.Color(255, 0, 0));
      anillo.setPixelColor(9, anillo.Color(255, 0, 0));
      anillo.setPixelColor(11, anillo.Color(255, 0, 0));

      anillo.show();

      for (int espera = 0; espera < tiempo; espera++)
      {
        lecturaPot = analogRead(pot);
        tiempo = map(lecturaPot, 0, 1023, 100, 1000);

        botonActual = digitalRead(boton);

        if (botonActual == HIGH && ultimoBoton == LOW)
        {
          contador++;

          if (contador > 3)
          {
            contador = 0;
          }

          delay(50);
        }

        ultimoBoton = botonActual;
        delay(1);
      }

      anillo.clear();
      anillo.show();
    }
    else if (contador == 2)
    {
      anillo.setPixelColor(0, anillo.Color(0, 255, 0));
      anillo.setPixelColor(2, anillo.Color(0, 255, 0));
      anillo.setPixelColor(4, anillo.Color(0, 255, 0));
      anillo.setPixelColor(6, anillo.Color(0, 255, 0));
      anillo.setPixelColor(8, anillo.Color(0, 255, 0));
      anillo.setPixelColor(10, anillo.Color(0, 255, 0));

      anillo.show();

      for (int espera = 0; espera < tiempo; espera++)
      {
        lecturaPot = analogRead(pot);
        tiempo = map(lecturaPot, 0, 1023, 100, 1000);

        botonActual = digitalRead(boton);

        if (botonActual == HIGH && ultimoBoton == LOW)
        {
          contador++;

          if (contador > 3)
          {
            contador = 0;
          }

          delay(50);
        }

        ultimoBoton = botonActual;
        delay(1);
      }

      anillo.clear();
      anillo.show();

      anillo.setPixelColor(1, anillo.Color(0, 0, 255));
      anillo.setPixelColor(3, anillo.Color(0, 0, 255));
      anillo.setPixelColor(5, anillo.Color(0, 0, 255));
      anillo.setPixelColor(7, anillo.Color(0, 0, 255));
      anillo.setPixelColor(9, anillo.Color(0, 0, 255));
      anillo.setPixelColor(11, anillo.Color(0, 0, 255));

      anillo.show();

      for (int espera = 0; espera < tiempo; espera++)
      {
        lecturaPot = analogRead(pot);
        tiempo = map(lecturaPot, 0, 1023, 100, 1000);

        botonActual = digitalRead(boton);

        if (botonActual == HIGH && ultimoBoton == LOW)
        {
          contador++;

          if (contador > 3)
          {
            contador = 0;
          }

          delay(50);
        }

        ultimoBoton = botonActual;
        delay(1);
      }

      anillo.clear();
      anillo.show();
    }
    else if (contador == 3)
    {
      anillo.setPixelColor(0, anillo.Color(125, 0, 255));
      anillo.setPixelColor(2, anillo.Color(125, 0, 255));
      anillo.setPixelColor(4, anillo.Color(125, 0, 255));
      anillo.setPixelColor(6, anillo.Color(125, 0, 255));
      anillo.setPixelColor(8, anillo.Color(125, 0, 255));
      anillo.setPixelColor(10, anillo.Color(125, 0, 255));

      anillo.show();

      for (int espera = 0; espera < tiempo; espera++)
      {
        lecturaPot = analogRead(pot);
        tiempo = map(lecturaPot, 0, 1023, 100, 1000);

        botonActual = digitalRead(boton);

        if (botonActual == HIGH && ultimoBoton == LOW)
        {
          contador++;

          if (contador > 3)
          {
            contador = 0;
          }

          delay(50);
        }

        ultimoBoton = botonActual;
        delay(1);
      }

      anillo.clear();
      anillo.show();

      anillo.setPixelColor(1, anillo.Color(0, 255, 125));
      anillo.setPixelColor(3, anillo.Color(0, 255, 125));
      anillo.setPixelColor(5, anillo.Color(0, 255, 125));
      anillo.setPixelColor(7, anillo.Color(0, 255, 125));
      anillo.setPixelColor(9, anillo.Color(0, 255, 125));
      anillo.setPixelColor(11, anillo.Color(0, 255, 125));

      anillo.show();

      for (int espera = 0; espera < tiempo; espera++)
      {
        lecturaPot = analogRead(pot);
        tiempo = map(lecturaPot, 0, 1023, 100, 1000);

        botonActual = digitalRead(boton);

        if (botonActual == HIGH && ultimoBoton == LOW)
        {
          contador++;

          if (contador > 3)
          {
            contador = 0;
          }

          delay(50);
        }

        ultimoBoton = botonActual;
        delay(1);
      }

      anillo.clear();
      anillo.show();
    }
    else
    {
      anillo.clear();
      anillo.show();
    }
  }
}