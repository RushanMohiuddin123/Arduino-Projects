int led = 13;  // The LED is connected to pin 13

void setup() {
  pinMode(led, OUTPUT);     // Set pin 13 as an output
  digitalWrite(led, LOW);   // Start with LED off
}

void loop() {
  digitalWrite(led, HIGH);  // Turn LED ON
  delay(1000);              // Wait for 1 second
  digitalWrite(led, LOW);   // Turn LED OFF
  delay(1000);              // Wait for 1 second
}
