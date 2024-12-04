int rojo = 9;
int azul = 10;
int verde = 11;

int trig = 7;
int eco = 6;
int distancia;
int duracion;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duracion = pulseIn(eco, HIGH);
  distancia = duracion / 58.2;
  
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  
  digitalWrite(rojo, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);

  if (distancia <= 10) {
    digitalWrite(rojo, HIGH);
    Serial.println("Intruso");
  } 
  else if (distancia <= 100) {
    digitalWrite(azul, HIGH);
    Serial.println("Objeto detectado");
  } 
  else {
    digitalWrite(verde, HIGH);
    Serial.println("Espacio vacio");
  }

  delay(500);  
}

