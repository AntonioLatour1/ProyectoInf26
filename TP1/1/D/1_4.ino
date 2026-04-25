// C++ code
//

#define verde1 1
#define azul1 2
#define rojo1 3
#define verde2 8
#define azul2 9
#define rojo2 10

void setup()
{  
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  digitalWrite(rojo1,HIGH);
  delay(1000);
  digitalWrite(rojo1,LOW);
  
  digitalWrite(verde2, HIGH);
  digitalWrite(azul2, HIGH);
  delay(1000);
  digitalWrite(verde2, LOW);
  digitalWrite(azul2, LOW);
    
  digitalWrite(verde1, HIGH);
  delay(1000);
  digitalWrite(verde1, LOW);
   
  digitalWrite(rojo2, HIGH);
  digitalWrite(azul2, HIGH);
  delay(1000);
  digitalWrite(rojo2, LOW);
  digitalWrite(azul2, LOW);
  
  digitalWrite(azul1, HIGH);
  delay(1000);
  digitalWrite(azul1, LOW);
  
  digitalWrite(azul2, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(verde2, HIGH);
  delay(1000);
  digitalWrite(azul2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(rojo2, LOW);
  
  digitalWrite(rojo1, HIGH);
  digitalWrite(verde1, HIGH);
  delay(1000);
  digitalWrite(rojo1, LOW);
  digitalWrite(verde1, LOW);
  delay(1000);
 
}