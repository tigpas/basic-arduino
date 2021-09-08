void setup() {
  // https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/
  Serial.begin(9600);
}

void loop() {
  // https://www.arduino.cc/reference/en/language/functions/communication/serial/print/
  Serial.print("Hello World!\n");
  delay(1000);
}
