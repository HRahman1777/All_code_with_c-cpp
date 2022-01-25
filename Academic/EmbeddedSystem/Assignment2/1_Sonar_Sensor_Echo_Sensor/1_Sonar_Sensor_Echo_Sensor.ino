int triPin = 2;
int echoPin = 3;
void setup() {
  pinMode(triPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  long totalDur, distanceInCm, distanceInInch;
  digitalWrite(triPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triPin, LOW);
  totalDur = pulseIn(echoPin, HIGH);
  distanceInCm = (totalDur / 2) / 29.1;
  distanceInInch = distanceInCm / 2.54;
  Serial.print("Distance = ");
  Serial.print(distanceInCm);
  Serial.print("CM, ");
  Serial.print(distanceInInch);
  Serial.print("INCH.");
  delay(250);
}
