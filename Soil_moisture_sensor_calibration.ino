const int moisturePin = A0; // Analog pin for soil moisture sensor

// Replace these values with your actual calibration values
int dryValue = 1023;  // Example value for completely dry soil
int wetValue = 242; // Value for fully saturated soil

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
}

void loop() {
  int moistureValue = analogRead(moisturePin); // Read the analog value from the soil moisture sensor
  
  // Map the moisture value to a percentage
  int moisturePercent = map(moistureValue, dryValue, wetValue, 0, 100);
  moisturePercent = constrain(moisturePercent, 0, 100); // Ensure the value is within 0-100%
  
  // Print the results to the Serial Monitor
  Serial.print("Soil Moisture Value: ");
  Serial.print(moistureValue);
  Serial.print(" | Soil Moisture (%): ");
  Serial.print(moisturePercent);
  Serial.println("%");
  
  delay(1000); // Wait for 1 second before taking another reading
}
