int ledVerde = 6;
int ledAmarelo = 3;
int ledVermelho = 11;


int ledVerde2 = 7;
int ledVermelho2= 8;
int ledAmarelo2=13;

void setup() {
  Serial.begin(9600);

 
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  
  pinMode(ledVermelho, OUTPUT);

 
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);



   
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  
  pinMode(ledVermelho2, OUTPUT);

 
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho2, LOW);
 
}


void loop() {

digitalWrite(ledVermelho, HIGH);
digitalWrite(ledVerde2, HIGH);
delay(10000);
digitalWrite(ledVermelho, LOW);
digitalWrite(ledVerde2, LOW);

digitalWrite(ledAmarelo, HIGH);
digitalWrite(ledAmarelo2, HIGH);
delay(3000);
digitalWrite(ledAmarelo, LOW);
digitalWrite(ledAmarelo2, LOW);


digitalWrite(ledVerde, HIGH);
digitalWrite(ledVermelho2, HIGH);
delay(7000);
digitalWrite(ledVerde, LOW);
digitalWrite(ledVermelho2, LOW);



}