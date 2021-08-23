int left1 = 9;
int left2 = 10;
int right1 = 11;
int right2 = 12;
void setup ()
{
  pinMode(left1, OUTPUT);
  pinMode(left2, OUTPUT);
  pinMode(right1, OUTPUT);
  pinMode(right2, OUTPUT);
}
void loop ()
{
  //to go Forward
  digitalWrite(left1, HIGH);
  digitalWrite(left2, LOW);
  digitalWrite(right1, HIGH);
  digitalWrite(right2, LOW);
  delay(2000);

  //to go Backward
  digitalWrite(left1, LOW);
  digitalWrite(left2, HIGH);
  digitalWrite(right1, LOW);
  digitalWrite(right2, HIGH);
  delay(2000);

}
