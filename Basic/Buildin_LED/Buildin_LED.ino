void setup() {
  // https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
  // LED ON
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  // LED OFF
  digitalWrite(LED_BUILTIN, HIGH);
  delay(750);
}
