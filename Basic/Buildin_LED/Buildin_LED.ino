void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // LED ON
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  // LED OFF
  digitalWrite(LED_BUILTIN, HIGH);
  delay(750);
}
