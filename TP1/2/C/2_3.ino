// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(0 , 51);
  analogWrite(1, 25.5);
  analogWrite(3, 75.5);
  analogWrite(5, 102);
  analogWrite(6, 127.5);
  analogWrite(9, 153);
  analogWrite(10, 178.5);
  analogWrite(11, 205);
  digitalWrite(12, HIGH);
}