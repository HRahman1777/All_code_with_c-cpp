int redLed = 11;
int pirSensor = 3;
int flag = LOW;
void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(pirSensor, INPUT);
  Serial.begin (9600);
}
void loop()
{
  int rawValue=0;
  rawValue = digitalRead(pirSensor);
  if (rawValue == HIGH) {
    digitalWrite(redLed, HIGH);
    delay (100);

    if ( flag == LOW ) {
      Serial.println("Motion Detected!");
      flag = HIGH;
    }
  }

  else {
    digitalWrite(redLed, LOW);
    delay(200);

    if (flag == HIGH) {
      Serial.println("Motion Stopped!");
      flag = LOW;
    }
  }
}
