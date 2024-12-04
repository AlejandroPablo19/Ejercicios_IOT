#include <LiquidCrystal.h>

//programa para usar el sensor ultrasonido
//variables
int trig = 10;
int eco = 9;
int ledRed = 2;
int ledBlue = 3;
int ledGreen = 4;
int ledYellow = 5;
int ledWhite = 6;

int duracion;
int distancia;

//inicialisa el funcionamiento, atravez del trig va a tener una funcionalidad de salida y el eco es la que va a recibir y tiene una funcionlidad de entrada, el led es una salida y asiganamos los puertos serial que es para que se miren los datos en la ventanita 
  void setup() {
  pinMode (trig, OUTPUT);
  pinMode (eco, INPUT);
  pinMode (ledBlue, OUTPUT);
  pinMode (ledRed, OUTPUT);
  pinMode (ledGreen, OUTPUT);
  pinMode (ledYellow, OUTPUT);
  pinMode (ledWhite, OUTPUT);
  Serial.begin(9600);

}

// es la secuencia que nos permite mandar la señal.
void loop (){
  digitalWrite (trig, HIGH);
  delay(1);
  digitalWrite (trig, LOW);
  duracion = pulseIn (eco, HIGH);
  distancia = duracion / 58.2; 
  Serial.print(distancia);
  Serial.print (" Centimetros");
  Serial.println();

  delay(200);

  

  /*if (distancia = 30){
    digitalWrite (ledBlue, HIGH);
    delay(100);
    } else {
      digitalWrite (ledBlue, LOW);
    delay(100);
    }*/

    if (distancia <= 10 && distancia <= 14 ){
    digitalWrite (ledBlue, HIGH);
    delay(100);
    } else {
      digitalWrite (ledBlue, LOW);
    delay(500);
    }

     if (distancia <= 15 && distancia <= 19 ){
    digitalWrite (ledRed, HIGH);
    delay(100);
    } else {
      digitalWrite (ledRed, LOW);
    delay(500);
    }

     if (distancia <= 20 && distancia <= 24 ){
    digitalWrite (ledGreen, HIGH);
    delay(100);
    } else {
      digitalWrite (ledGreen, LOW);
    delay(500);
    }

     if (distancia <= 25 && distancia <= 29 ){
    digitalWrite (ledYellow, HIGH);
    delay(100);
    } else {
      digitalWrite (ledYellow, LOW);
    delay(500);
    }

     if (distancia <= 30 && distancia <= 35 ){
    digitalWrite (ledWhite, HIGH);
    delay(100);
    } else {
      digitalWrite (ledWhite, LOW);
    delay(500);
    }


}
