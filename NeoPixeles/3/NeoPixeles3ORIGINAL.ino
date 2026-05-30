#include <Adafruit_NeoPixel.h>
#define boton 4
#define pot 3
#define pin 2
int cantidad = 12;
int contador = 0;
bool ultimoBoton = LOW;


Adafruit_NeoPixel anillo(cantidad,pin,NEO_GBR + NEO_KHZ800);

void setup()
{
  pinMode(boton, INPUT);

  anillo.begin();
  anillo.setBrightness(50);
  anillo.show();
  
}

void loop()
{
  
  int potdel = analogRead(pot);
  
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
  
  for(int i = 0; i < 3; i++)
  {
  	if(contador == 1)
      {
        anillo.setPixelColor(0, anillo.Color(0, 0, 255));
      	anillo.setPixelColor(2, anillo.Color(0, 0, 255));
        anillo.setPixelColor(4, anillo.Color(0, 0, 255));
        anillo.setPixelColor(6, anillo.Color(0, 0, 255));
        anillo.setPixelColor(8, anillo.Color(0, 0, 255));
        anillo.setPixelColor(10, anillo.Color(0, 0, 255));
        anillo.setPixelColor(12, anillo.Color(0, 0, 255));
		

        anillo.show();
      
      	delay(potdel);
      
      	anillo.clear();
      	anillo.show();
      
      	anillo.setPixelColor(1, anillo.Color(255, 0, 0));
      	anillo.setPixelColor(3, anillo.Color(255, 0, 0));
        anillo.setPixelColor(5, anillo.Color(255, 0, 0));
        anillo.setPixelColor(7, anillo.Color(255, 0, 0));
        anillo.setPixelColor(9, anillo.Color(255, 0, 0));
        anillo.setPixelColor(11, anillo.Color(255, 0, 0));
      
      	anillo.show();
      
      	delay(potdel);
      
      	anillo.clear();
      	anillo.show();
      }
    else if(contador == 2)
      {
        anillo.setPixelColor(0, anillo.Color(0, 255,0 ));
      	anillo.setPixelColor(2, anillo.Color(0, 255,0));
        anillo.setPixelColor(4, anillo.Color(0, 255,0));
        anillo.setPixelColor(6, anillo.Color(0, 255,0));
        anillo.setPixelColor(8, anillo.Color(0, 255,0));
        anillo.setPixelColor(10, anillo.Color(0, 255,0));
        anillo.setPixelColor(12, anillo.Color(0, 255,0));
		

        anillo.show();
      
      	delay(potdel);
      
      	anillo.clear();
      	anillo.show();
      
      	anillo.setPixelColor(1, anillo.Color(0, 0, 255));
      	anillo.setPixelColor(3, anillo.Color(0, 0, 255));
        anillo.setPixelColor(5, anillo.Color(0, 0, 255));
        anillo.setPixelColor(7, anillo.Color(0, 0, 255));
        anillo.setPixelColor(9, anillo.Color(0, 0, 255));
        anillo.setPixelColor(11, anillo.Color(0, 0, 255));
      
      	anillo.show();
      
      	delay(potdel);
      
      	anillo.clear();
      	anillo.show();
      }
    else if(contador == 3)
      {
        anillo.setPixelColor(0, anillo.Color(125, 0,255 ));
      	anillo.setPixelColor(2, anillo.Color(125, 0,255));
        anillo.setPixelColor(4, anillo.Color(125, 0,255));
        anillo.setPixelColor(6, anillo.Color(125, 0,255));
        anillo.setPixelColor(8, anillo.Color(125, 0,255));
        anillo.setPixelColor(10, anillo.Color(125, 0,255));
        anillo.setPixelColor(12, anillo.Color(125, 0,255));
		

        anillo.show();
      
      	delay(potdel);
      
      	anillo.clear();
      	anillo.show();
      
      	anillo.setPixelColor(1, anillo.Color(0, 255, 125));
      	anillo.setPixelColor(3, anillo.Color(0, 255, 125));
        anillo.setPixelColor(5, anillo.Color(0, 255, 125));
        anillo.setPixelColor(7, anillo.Color(0, 255, 125));
        anillo.setPixelColor(9, anillo.Color(0, 255, 125));
        anillo.setPixelColor(11, anillo.Color(0, 255, 125));
      
      	anillo.show();
      
      	delay(potdel);
      
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
  
 


