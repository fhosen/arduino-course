int counter = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (counter % 3 == 0) {
    Serial.println("Fizz");
  } else {
   Serial.println(counter); 
  }
  counter++;
  delay(1000);
}
