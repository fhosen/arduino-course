int speed = 9600; // The speed that the serial connection will use to communicate to the computer
int delayInMS = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(speed);
  Serial.println("Starting");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("A ");
  delay(delayInMS);
  Serial.println("B");
  delay(delayInMS);
}
