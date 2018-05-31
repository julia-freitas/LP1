#include <dht.h>

dht DHT;

#define DHT11_PIN 7
#define LED 13

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  delay(2000);

  if (DHT.temperature >= 25)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);
 
  //delay(1000);
}

