void setup() {
  randomSeed(analogRead(A0)); // read unused ping to use as seed
  
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    Serial.print(random(1, 101));
    Serial.print(" ");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
