#define led1 2
#define pin 3
#define led2 4
void setup()
{
  pinMode(pin, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

 
}

void loop()
{
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  analogWrite(pin, 50);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  analogWrite(pin, 255);
  delay(500);
  
 
  
}