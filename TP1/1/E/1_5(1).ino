#define rojo1 2
#define rojo2 4
#define verde 7
#define buzzer 13

int destellos = 8;

void setup() {
  pinMode(rojo1, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  
  for (int i = 0; i < destellos; i++) {
    digitalWrite(verde, LOW);
    digitalWrite(buzzer, HIGH);

    digitalWrite(rojo1, HIGH);
    digitalWrite(rojo2, LOW);
    delay(500);

    digitalWrite(rojo1, LOW);
    digitalWrite(rojo2, HIGH);
    delay(500);
  }

 
  digitalWrite(rojo1, LOW);
  digitalWrite(rojo2, LOW);
  digitalWrite(buzzer, LOW);

  digitalWrite(verde, HIGH);
  delay(6000);
  digitalWrite(verde, LOW);
}