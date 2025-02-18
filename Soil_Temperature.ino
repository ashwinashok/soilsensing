#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into pin 2 on the Arduino
#define ONE_WIRE_BUS 13

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures(); // Request temperature readings from the sensor(s)
  float tempC = sensors.getTempCByIndex(0); // Get temperature in Celsius
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println("°C");
  delay(1000); // Wait 1 second before repeating the loop
}
