// Soil moisture sensor pin
#define MOISTURE_PIN A0

// Water pump pin
#define PUMP_PIN 2

int soilMoisture; // Stores soil moisture value

void setup() {
  Serial.begin(9600);

  // Initialize pins
  pinMode(PUMP_PIN, OUTPUT);
  digitalWrite(PUMP_PIN, HIGH); // Start with the pump OFF
}

void loop() {
  // Read soil moisture
  soilMoisture = analogRead(MOISTURE_PIN);

  // Print soil moisture value to Serial Monitor
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoisture);

  // Soil moisture and pump control logic
  if (soilMoisture > 950) {
    digitalWrite(PUMP_PIN, LOW); // Turn ON the pump
    Serial.println("Pump: ON  Moisture: LOW");
  } else if (soilMoisture > 300 && soilMoisture <= 950) {
    digitalWrite(PUMP_PIN, HIGH); // Turn OFF the pump
    Serial.println("Pump: OFF Moisture: MID");
  } else {
    digitalWrite(PUMP_PIN, HIGH); // Turn OFF the pump
    Serial.println("Pump: OFF Moisture: HIGH");
  }

  delay(1000); // Delay before next reading
}
