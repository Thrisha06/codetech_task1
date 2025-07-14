int ledPin = 13;  // GPIO13 (D7 on NodeMCU ESP8266)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn ON LED
  delay(1000);                 // Wait 1 second
  digitalWrite(ledPin, LOW);   // Turn OFF LED
  delay(1000);                 // Wait 1 second
}
