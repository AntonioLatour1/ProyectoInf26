#include <Adafruit_NeoPixel.h>

#define pin 2
int cantidad = 12;

Adafruit_NeoPixel anillo(cantidad,pin,NEO_GBR + NEO_KHZ800);

void setup()
{
 

  anillo.begin();
  anillo.setBrightness(50);
  anillo.show();
  
}

void loop()
{
 
  
  for (int i = 0; i < cantidad; i++)
  {
    if(i ==0 || i == 3 || i ==6 || i == 9)
    {
      anillo.setPixelColor(i, anillo.Color(0, 0, 255));
      anillo.show();
      delay(200);
    }
    //
    if(i ==1 || i == 4 || i ==7 || i == 10)
    {
      anillo.setPixelColor(i, anillo.Color(0, 255, 0));
      anillo.show();
      delay(200);
    }
    //
    if(i ==2 || i == 5 || i ==8 || i == 11)
    {
      anillo.setPixelColor(i, anillo.Color(255, 0, 0));
      anillo.show();
      delay(200);
    }
    
   
  }
  
  delay(500);
  
  anillo.clear();
  anillo.show();
  

 
}