
int led = 3;
int SENSOR = k2;
int temperatura;
int humedad;
DHT dth (SENSOR, DHT11);

void setup(){
  Serial.begin(9600);
  dht.begin();
  pinMode (led, OUTPUT);
}

void loop(){
  temperatura = dht.readTemperature();
  humedad = dht.readHumidity();
  delay(1);
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print("Humedad: ");
  Serial.print(humedad);
  delay(500);

  if(temperatura >=28){
    digitalWrite(led, HIGH);
  }
}

