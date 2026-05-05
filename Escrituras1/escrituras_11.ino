#define rojo1 5
#define verde1 3
#define azul1 4
#define rojo2 8
#define verde2 6
#define azul2 7
#define rojo3 11
#define verde3 9
#define azul3 10
#define buzz 0


void setup()
{
  pinMode(rojo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(verde3, OUTPUT);
  pinMode(azul3, OUTPUT);
  pinMode(rojo3, OUTPUT);
  
}

void loop()
{
  analogWrite(buzz, 0);
  analogWrite(rojo1, 255);
  
  delay(2000);
  
  analogWrite(rojo1, 0);
  analogWrite(buzz, 255);
  delay(100);
  analogWrite(buzz,0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
 digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
 digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  //primer ciclo END
  
  //segundo ciclo ON
  digitalWrite(rojo2, HIGH);
  digitalWrite(azul2, HIGH);
  
  delay(2000);
  
  digitalWrite(rojo2, LOW);
  digitalWrite(azul2, LOW);
  analogWrite(buzz, 255);
  delay(100);
  analogWrite(buzz,0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
 digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
 digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  analogWrite(azul3, 60);
  analogWrite(verde3, 60);
  
  delay(2000);
  
   analogWrite(azul3, 0);
  analogWrite(verde3, 0);
  analogWrite(buzz, 255);
  delay(100);
  analogWrite(buzz,0);
   delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
 digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
 digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  analogWrite(rojo1, 255);
  analogWrite(verde1, 65);
  digitalWrite(rojo2, HIGH);
  analogWrite(verde2, 65);
  digitalWrite(rojo3 , HIGH);
  analogWrite(verde3, 65);
  
  delay(187);
  
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  digitalWrite(rojo2, LOW);
  analogWrite(verde2, 0);
  digitalWrite(rojo3 , LOW);
  analogWrite(verde3, 0);
  
  delay(187);
  
  
  
  
  
}