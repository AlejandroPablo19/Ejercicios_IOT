//pantalla lcd + fotoresistencia 
#include <LiquidCrystal.h>

int ldr = A5;
const int ledazul = 10;
int valor;
int dt = 1000;


LiquidCrystal lcd(7,6,5,4,3,2);

void setup(){
    Serial.begin(9600);
    pinMode(ldr, INPUT);
    pinMode(ledazul, OUTPUT);

    lcd.begin(16,2);
    
  
}
 void loop(){

  int valor = analogRead(ldr);
  Serial.println(valor);
  delay(dt);

  lcd.setCursor(2,0);
  lcd.print(valor);
  delay(500);
  

 
  

  if(valor>700){
    digitalWrite(ledazul, HIGH);
 
  }
  if(valor<700){
    digitalWrite(ledazul, LOW);
 
  }
 }
