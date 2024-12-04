#include <LiquidCrystal.h>
LiquidCrystal lcd (19,18,17,16,15,14);

int trig = 10;
int eco = 9;
int led = 8;

int duracion;
int distancia;

void setup(){
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  pinMode(led, OUTPUT);
  //Serial.begin(9600);
  lcd.begin(16,2);
  }


void loop (){
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  duracion = pulseIn(eco, HIGH);
  distancia = duracion / 58.2;  
    lcd.setCursor(1 ,0);
    lcd.print(distancia);
    lcd.print(" cm");
  delay(200);
if(distancia >= 30){
    digitalWrite(led, LOW);
    delay(50);
  
} else {  
    digitalWrite(led, HIGH);
    delay(50);
}

}


