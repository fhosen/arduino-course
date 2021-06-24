void setup() {
  Serial.begin(9600);
  Serial.println(sumDigits(0));     // Should be 0
  Serial.println(sumDigits(2));     // Should be 2
  Serial.println(sumDigits(28));    // Should be 10
  Serial.println(sumDigits(504));   // Should be 9
  Serial.println(sumDigits(2048));  // Should be 14
  Serial.println(sumDigits(32767)); // Should be 25
}
 
void loop() {
  // Do nothing
}
 
int sumDigits(int x) {
  int accum = 0;
  int digit;
  String asString = String(x);
  Serial.print("------  ");
  Serial.print(asString);
  Serial.print(" digits: ");
  for (int i = 0; i < asString.length(); i++) {
    digit = int(asString[i] - '0');
    Serial.print(digit);
    Serial.print(" | ");
    accum += digit;
  }

  Serial.println();
  return accum;
}
