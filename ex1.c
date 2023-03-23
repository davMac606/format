int ledVerde = 6;
int ledAmarelo = 3;
int ledVermelho = 11;


void setup() {
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
}


void loop() {
digitalWrite(ledVermelho, HIGH);
delay(10000);
digitalWrite(ledVermelho, LOW);
digitalWrite(ledAmarelo, HIGH);
delay(3000);
digitalWrite(ledAmarelo, LOW);
digitalWrite(ledVerde, HIGH);
delay(7000);
digitalWrite(ledVerde, LOW);
}