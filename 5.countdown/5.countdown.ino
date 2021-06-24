void setup() {
  Serial.begin(9600);
  for (int i = 30; i >= 0; i--) {
    Serial.println(i);
    delay(200);
  }
}

void loop() {
}
