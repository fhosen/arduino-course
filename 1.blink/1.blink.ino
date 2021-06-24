int ledPin = 13;
int delayInMS = 250;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(delayInMS);
  digitalWrite(ledPin, LOW);
  delay(delayInMS);
}
