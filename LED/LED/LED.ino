#define LEDPIN D1

void setup() {
  // https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
  pinMode(LEDPIN, OUTPUT);
  // https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
  digitalWrite(LEDPIN, LOW);
}

void loop() {
  // LED ON
  digitalWrite(LEDPIN, HIGH);
  delay(250);
  // LED OFF
  digitalWrite(LEDPIN, LOW);
  delay(750);
}
