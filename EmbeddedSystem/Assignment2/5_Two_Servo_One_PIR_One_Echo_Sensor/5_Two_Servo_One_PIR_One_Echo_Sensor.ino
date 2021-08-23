/*
Hasibur Rahman
181-15-1777
PC-B
*/
#include<Servo.h>
Servo servoOne, servoTwo;
int triggerPin = 4, echoPin = 5, pirSPin = 6;

void setup()
{
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pirSPin, INPUT);
  servoOne.attach(11);
  servoTwo.attach(12);
  Serial.begin(9600);
}

void loop()
{
  int pirValue = digitalRead(pirSPin);
  float totalDur, inchDis;
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  totalDur = pulseIn(echoPin, HIGH);
  inchDis = ((totalDur/2)/29.1)/2.54;
  
  if (pirValue == HIGH) {
    servoOne.write(90);
    delay(200);
  }
  
  if(inchDis>=20 && inchDis<=30)
  {
    servoTwo.write(90);
    delay(200);
  }
  else
  {
    servoOne.write(0);
    delay(200);
    servoTwo.write(0);
    delay(200);
  }
  
  Serial.println(inchDis);
 
  delay(2000);   
}
