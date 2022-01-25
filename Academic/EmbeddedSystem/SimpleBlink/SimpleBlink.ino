#define LED D8 // Led in NodeMCU at pin GPIO16 (D0).

void setup() {
pinMode(LED, OUTPUT);
}
void loop() {
digitalWrite(LED, HIGH);
delay(1000);          
digitalWrite(LED, LOW); 
delay(1000);         
}
