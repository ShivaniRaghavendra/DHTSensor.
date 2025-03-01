#include<DHT.h>
#define DHTPIN 15
#define DHTTYPE DHT11
int LED=33;
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Serial.begin(115200);
  Serial.println(F("DHT!! TEST...!"));
  dht.begin();
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float h=dht.readHumidity();
  float t=dht.readTemperature();   //Temperature in Celcius:
  float f=dht.readTemperature(true); //Temperature in farenheit:
  if(isnan(h)|| isnan(t)|| isnan(f))
  {
    Serial.println(F("failed to read the DHT Sensor...!"));
    return;
  }
float hif =dht.computeHeatIndex(f,h); //HeatIndexingFarenheit:
float hic =dht.computeHeatIndex(t,h, false); //HeatIndexingCelcius:
Serial.println(F("Humidity:"));
Serial.print(h);
Serial.print(F("%Temperature"));
Serial.print(t);
Serial.print(F("C "));
Serial.print(f);
Serial.print(F("F Heat Index:"));
Serial.print(hic);
Serial.print(F("C "));
Serial.print(hif);
Serial.print(F("F "));
if(t>26.00){
  Serial.println("LED is ON");
  digitalWrite(LED,HIGH);
}
else{
  digitalWrite(LED,LOW);
}

}
