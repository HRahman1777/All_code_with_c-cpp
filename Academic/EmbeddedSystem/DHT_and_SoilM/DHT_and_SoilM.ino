#include<DHT.h>
#define DHTPIN 11
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(A0, INPUT);
  
  Serial.begin(9600);
  Serial.println(F("DHT11 testing!"));
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));


//for soil moisture

  int mois = analogRead(A0);

  Serial.print(mois);
  //Serial.print(analogRead(A0));

  Serial.print(" - ");

  if (mois >= 1000) {
    Serial.println("Sensor is not in the Soil or DISCONNECTED");
  }

  if (mois < 1000
      && mois >= 600) {
    Serial.println("Soil is DRY");
  }

  if (mois < 600
      && mois >= 370) {
    Serial.println("Soil is HUMID");
  }

  if (mois < 370) {
    Serial.println("Sensor in WATER");
  }
  delay(2000);
}
