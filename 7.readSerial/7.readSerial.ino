String myString = "";
long timeoutInMS = 200;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(timeoutInMS);
}

void loop() {
  myString = Serial.readString();
  if (myString != "") {
    Serial.println(myString.toInt());
    myString = "";
  }
}
