#include<Servo.h>
Servo serMOne;
void setup()
{
  serMOne.attach(11);
}
void loop()
{
  serMOne.write(45);
  delay(1000);
  serMOne.write(0);
  delay(1000);
  serMOne.write(90);
  delay(1000);
  serMOne.write(135);
  delay(1000);
  serMOne.write(180);
  delay(1000);
  serMOne.write(90);
  delay(1000);
}
