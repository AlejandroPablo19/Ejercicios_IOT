int rojo= 10;
int verde=9;
int azul=8;

void setup(){
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
  //blanco
  /*analogWrite(rojo, 255);
  analogWrite(verde, 255);
  analogWrite(azul, 255);*/
  //amarillo
  /*analogWrite(rojo, 255);
  analogWrite(verde, 255);
  analogWrite(azul, 0);*/
  //rosa 
  /*analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 255);*/
  //cafe
  analogWrite(rojo, 63);
  analogWrite(verde, 34);
  analogWrite(azul, 19);
}

