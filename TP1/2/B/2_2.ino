// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
 analogWrite(3, 255);
 analogWrite(5, 255);
   delay(1500);
  analogWrite(3, 0);
 analogWrite(5, 0);
 analogWrite(6, 255);
 	delay(1500);
 analogWrite(5, 0);
 analogWrite(6, 255);
 analogWrite(3, 255);
  	delay(1500);
  analogWrite(3,0);
  analogWrite(6, 0);
  
  analogWrite(6, 0);
 analogWrite(3, 170);
 analogWrite(5, 170);
   delay(1500);
  analogWrite(3, 0);
 analogWrite(5, 0);
 analogWrite(6, 170);
 	delay(1500);
 analogWrite(5, 0);
 analogWrite(6, 170);
 analogWrite(3, 170);
  	delay(1500);
  
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
 analogWrite(3, 85);
 analogWrite(5, 85);
   delay(1500);
  analogWrite(3, 0);
 analogWrite(5, 0);
 analogWrite(6, 85);
 	delay(1500);
 analogWrite(5, 0);
 analogWrite(6, 85);
 analogWrite(3, 85);
  	delay(1500);
}