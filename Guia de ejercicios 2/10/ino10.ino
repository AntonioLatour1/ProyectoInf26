#define pin1 3

void setup()
{
  pinMode(pin1, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));   
}

void loop()
{
  int L1[10];
  int cont = 0;                 

  for (int i = 0; i < 10; i++)
  {
    L1[i] = random(1, 11);      
    if (L1[i] == 5)
    {
      cont = cont + 1;
    }
  }

  if (cont != 0)
  {
    digitalWrite(pin1, HIGH);
    delay(50);
    digitalWrite(pin1, LOW);
    delay(50);
    digitalWrite(pin1, HIGH);
    delay(50);
    digitalWrite(pin1, LOW);    
  }

  delay(500);

  for (int i = 0; i < 10; i++)
  {
    Serial.print(L1[i]);        
    Serial.print("-");
  }
  Serial.print(" (cincos: ");
  Serial.print(cont);
  Serial.println(")");          

  delay(1000);
}