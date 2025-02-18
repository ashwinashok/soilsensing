
int sensorPin = A0; // Analog pin where the sensor is connected

void setup() {
  Serial.begin(9600); // Start the serial communication at 9600 baud rate
  pinMode(sensorPin, INPUT); // Set the sensor pin as an input
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the analog value from sensor
  int moisturePercent = map(sensorValue, 0, 1023, 0, 100); // Convert to percentage
  Serial.print("Moisture Level: ");
  Serial.print(moisturePercent);
  Serial.println(" %"); // Print the percentage value to the Serial Monitor
  delay(1000); // Delay for 60 seconds (60000 milliseconds) before the next read
}

