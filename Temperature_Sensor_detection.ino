#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
  Serial.println("Searching for devices...");
  
  int deviceCount = sensors.getDeviceCount();
  Serial.print("Found ");
  Serial.print(deviceCount, DEC);
  Serial.println(" devices.");
  
  // Print the addresses of the found devices
  for (int i = 0; i < deviceCount; i++) {
    DeviceAddress deviceAddress;
    if (sensors.getAddress(deviceAddress, i)) {
      Serial.print("Device ");
      Serial.print(i);
      Serial.print(" address: ");
      printAddress(deviceAddress);
      Serial.println();
    }
  }
}

void loop() {
  // nothing to do here
}

void printAddress(DeviceAddress deviceAddress) {
  for (uint8_t i = 0; i < 8; i++) {
    if (deviceAddress[i] < 16) Serial.print("0");
    Serial.print(deviceAddress[i], HEX);
  }
}
