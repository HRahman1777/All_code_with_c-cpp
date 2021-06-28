int p=12;

void setup() {
  pinMode(p, OUTPUT);
}

void loop() {
  digitalWrite(p, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);
  digitalWrite(p, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
}
