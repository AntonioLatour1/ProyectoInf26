#include <Adafruit_NeoPixel.h>

#define chicharra 3
#define botonJugar 5
#define pinAroIzq 6
#define pinAroDer 7
#define ledsPorAro 24

#define tam(a,b)  sizeof(a)/sizeof(b)

Adafruit_NeoPixel aroIzq = Adafruit_NeoPixel( ledsPorAro , pinAroIzq , NEO_RGB + NEO_KHZ800 );
Adafruit_NeoPixel aroDer = Adafruit_NeoPixel( ledsPorAro , pinAroDer , NEO_RGB + NEO_KHZ800 );

bool jugando = false;
bool estadoAnterior = false;

// Vectores
int puntos1[] = {9 , 13, 18, 19, 20, 21, 22, 23};
int puntos2[] = {0, 11, 12, 23, 22, 21, 14, 9, 2, 3, 4, 5, 6, 17, 18};
int puntos3[] = {0, 11, 12, 23, 22, 21, 14, 9, 2, 20, 19, 18, 5, 6, 17};
int puntos4[] = {0, 1, 2, 9, 14, 21, 22, 23, 20, 19, 18};
int puntos5[] = {0, 11, 12, 23, 1, 2, 9, 14, 21, 20, 19, 18, 17, 6, 5};
int puntos6[] = {0, 11, 12, 23, 1, 2, 3, 4, 9, 14, 21, 20, 19, 18, 17, 6, 5};
int todoElAro[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
  21, 22, 23};

int cuantos[] = {
  tam(puntos1, int),
  tam(puntos2, int),
  tam(puntos3, int),
  tam(puntos4, int),
  tam(puntos5, int),
  tam(puntos6, int),
  tam(todoElAro, int)
};

int* dibujos[] = {puntos1, puntos2, puntos3, puntos4, puntos5, puntos6};

void setup() {
  pinMode(botonJugar, INPUT);

  pinMode(chicharra, OUTPUT);
  pinMode(pinAroIzq, OUTPUT);
  pinMode(pinAroDer, OUTPUT);

  aroIzq.begin();
  aroIzq.clear();
  aroIzq.show();
  aroDer.begin();
  aroDer.clear();
  aroDer.show();

  Serial.begin(9600);
  randomSeed( analogRead(A0) );
}

void loop() {
  bool apretado = digitalRead(5);
  if (apretado == HIGH && estadoAnterior == LOW)
  {
    jugando = !jugando;
    delay(50);
  }
  estadoAnterior = apretado;

  if (jugando)
  {
    int tiradaIzq = random(1, 7);
    int tiradaDer = random(1, 7);

    for (int vuelta = 0; vuelta < 6; vuelta++)
    {
      int mezclaIzq = random(1, 7);
      int mezclaDer = random(1, 7);
      for (int led = 0; led < cuantos[mezclaIzq - 1]; led++)
      {
          aroIzq.setPixelColor(dibujos[mezclaIzq - 1][led], 0, 255, 255);
      }

      for (int led = 0; led < cuantos[mezclaDer - 1]; led++)
      {
          aroDer.setPixelColor(dibujos[mezclaDer - 1][led], 0, 255, 255);
      }
      aroIzq.show();
      aroDer.show();
      delay(200);
      aroIzq.clear();
      aroDer.clear();
      aroIzq.show();
      aroDer.show();
    }

    Serial.print(tiradaIzq);
    Serial.print(" ");
    Serial.println(tiradaDer);

    aroIzq.clear();
    aroDer.clear();

    for (int led = 0; led < cuantos[tiradaIzq - 1]; led++)
    {
        aroIzq.setPixelColor(dibujos[tiradaIzq - 1][led], 0, 255, 255);
    }

    for (int led = 0; led < cuantos[tiradaDer - 1]; led++)
    {
        aroDer.setPixelColor(dibujos[tiradaDer - 1][led], 0, 255, 255);
    }
    aroIzq.show();
    aroDer.show();

    if (tiradaIzq + tiradaDer == 7)
    {
      Serial.println("ganaste");
      delay(1000);
      do
      {
        digitalWrite(chicharra, 1);
        for (int led = 0; led < 24; led++)
        {
            aroDer.setPixelColor(led, 0, 255, 255);
            aroIzq.setPixelColor(led, 0, 255, 255);
        }
        aroIzq.show();
        aroDer.show();
        delay(200);
        aroIzq.clear();
        aroDer.clear();
        aroIzq.show();
        aroDer.show();
        delay(200);
      }while (jugando);
    }
  }
  jugando = false;
}