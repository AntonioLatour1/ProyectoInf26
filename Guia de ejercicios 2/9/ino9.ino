#define pin1 3
#define pin2 5
#define pin3 6


void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  
 
  
    
  
}

void loop()
{
  
  int L1[] = {122 , 234 , 21};
  int L2[] = {33  , 53  , 155};
  int L3[] = {200 , 255 , 12};
  
  const int* colores[3] = {L1,L2,L3};

  for (int i = 0; i < 3; i++) 
  {
    analogWrite(pin1, colores[i][0]);
    analogWrite(pin2, colores[i][1]);
    analogWrite(pin3, colores[i][2]);
    delay(1000);
  } 	

  
  
}