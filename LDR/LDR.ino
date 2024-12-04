int ldr = A5; 
int valor;
int delte = 1000;
int led_azul = 2;
void setup() {
  
Serial.begin (9600);
pinMode(ldr, INPUT);
pinMode(led_azul,OUTPUT);

}

void loop() {

int valor = analogRead(ldr);
Serial.println(valor);
delay(delte);
if(valor>300){
digitalWrite(led_azul,HIGH);
}else{
  digitalWrite(led_azul,LOW);
  }

}
