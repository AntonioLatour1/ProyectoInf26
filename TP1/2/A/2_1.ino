// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  analogWrite(3, 50);
  delay(1000);
  analogWrite(3, 100);
  delay(1000);
  analogWrite(3, 150);
  delay(1000);
  analogWrite(3, 200);
  delay(1000);
  analogWrite(3, 250);
  delay(1000);
}