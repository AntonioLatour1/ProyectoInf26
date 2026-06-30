#include <Adafruit_NeoPixel.h>

#include <LiquidCrystal.h>

//neopixel
#define pin 5
int cantidad = 6;

//lcd
LiquidCrystal lcd(7,8,9,10,11,12);

Adafruit_NeoPixel anillo(cantidad,pin,NEO_GBR + NEO_KHZ800);

//pulsador
bool pausado = false;
bool ultimoBoton = false;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9800);
  
  anillo.begin();
  anillo.setBrightness(50);
  anillo.show();
  
  lcd.begin(16, 2);
}

void loop()
{
  //photoresistor
  float mapPhoto = analogRead(A1);
  
  float photo = map(mapPhoto,310,0,0,100);
  
  
  //boton
  
  bool botonA = digitalRead(4);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    pausado = !pausado;
   
  }

  ultimoBoton = botonA;
  //condicionales
  
  lcd.setCursor(0,0);
  lcd.print("Photo: ");
  lcd.print(photo);
  lcd.print(" %");
  
   lcd.setCursor(6,1);
   lcd.print("E: ");
   lcd.print("Apagado");
  
  
  
  if(pausado == HIGH)
  {
    
    lcd.setCursor(5,1);
    lcd.print("E: ");
    lcd.print("Prendido");
    
    Serial.print("Sensor Luminico: ");
    Serial.println(photo);
    
    
    //1
  	if(photo >= 1 )
    {
      
      
    	anillo.setPixelColor(0, anillo.Color(0, 255, 0));
    	anillo.show();
      	Serial.println(" Led 1");
      	Serial.println(" Color Verde");
      	
        
      //2
      if(photo > 15 )
      {
        
        
          anillo.setPixelColor(0, anillo.Color(0, 255, 0));
          anillo.setPixelColor(1, anillo.Color(0, 255, 0));
          anillo.show();
          Serial.println(" Led 2");
          Serial.println(" Color Verde");
          //3
          if(photo > 30)
          {
            anillo.setPixelColor(0, anillo.Color(0, 255, 0));
            anillo.setPixelColor(1, anillo.Color(0, 255, 0));
          	anillo.setPixelColor(2, anillo.Color(0, 255, 255));
          
            anillo.show();
            Serial.println(" Led 3");
      		Serial.println(" Color Amarillo");
            //4
            if(photo > 50)
            {	
                anillo.setPixelColor(0, anillo.Color(0, 255, 0));
                anillo.setPixelColor(1, anillo.Color(0, 255, 0));
                anillo.setPixelColor(2, anillo.Color(0, 255, 255));

              
            	anillo.setPixelColor(3, anillo.Color(0, 255, 255));
            	anillo.show();
              	Serial.println(" Led 4");
      			Serial.println(" Color Amarillo");
              
              //5
              if(photo >70)
              {
              	anillo.setPixelColor(0, anillo.Color(0, 255, 0));
                anillo.setPixelColor(1, anillo.Color(0, 255, 0));
                anillo.setPixelColor(2, anillo.Color(0, 255, 255));

              
            	anillo.setPixelColor(3, anillo.Color(0, 255, 255));
                
                anillo.setPixelColor(4, anillo.Color(0, 0, 255));
            	anillo.show();
                Serial.println(" Led 5");
      			Serial.println(" Color Rojo");
                
                //6
                if(photo>85)
                {
                  anillo.setPixelColor(0, anillo.Color(0, 255, 0));
                  anillo.setPixelColor(1, anillo.Color(0, 255, 0));
                  anillo.setPixelColor(2, anillo.Color(0, 255, 255));


                  anillo.setPixelColor(3, anillo.Color(0, 255, 255));

                  anillo.setPixelColor(4, anillo.Color(0, 0, 255));
                  anillo.setPixelColor(5, anillo.Color(0, 0, 255));
                  anillo.show();
                  Serial.println(" Led 6");
      			  Serial.println(" Color Rojo");
                }
                else
                {
                	anillo.setPixelColor(5, anillo.Color(0, 0, 0));
                }
                
              }
              else
              {
              	anillo.setPixelColor(4, anillo.Color(0, 0, 0));
              }
            }	
            else
            {
              anillo.setPixelColor(3, anillo.Color(0, 0, 0));
            }
            
          }
          else
          {
          	anillo.setPixelColor(2, anillo.Color(0, 0, 0));
          }
        
      }
      else
      {
      	anillo.setPixelColor(1, anillo.Color(0, 0, 0));
      }
    }
    
    else
    {
      anillo.setPixelColor(0, anillo.Color(0, 0, 0));
      	anillo.show();
     
    
    }
    
   
  }
  
}