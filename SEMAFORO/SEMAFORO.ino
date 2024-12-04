//semaforo
int ledRojo = 7;    
int ledAmarillo = 6;
int ledVerde = 5;    
int tiempoRojo = 5000
int tiempoAmarillo = 2000;
int tiempoVerde = 5000;    

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  delay(tiempoVerde);
  digitalWrite(ledVerde, LOW);

  digitalWrite(ledAmarillo, HIGH);
  delay(tiempoAmarillo);
  digitalWrite(ledAmarillo, LOW);

  digitalWrite(ledRojo, HIGH);
  delay(tiempoRojo);
  digitalWrite(ledRojo, LOW);
}
