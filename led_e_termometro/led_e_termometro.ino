#include "DHT.h"
#define DHTPIN 2  
#define DHTTYPE DHT11 
int rosso = 10;
int blu = 9;

int d = 200;
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  dht.begin();
  pinMode(rosso, OUTPUT);
  pinMode(blu, OUTPUT);

}

void loop() {
  delay(2000);
  float t = dht.readTemperature();
  if(t>=32.00){
    digitalWrite(rosso, HIGH);
    delay(d);
    digitalWrite(rosso, LOW);
    delay(d);
  }else{
    digitalWrite(blu, HIGH);
    delay(d);
    digitalWrite(blu, LOW);
     delay(d);
  }
 
  
}
