#include "Arduino_SensorKit.h"

float pressure;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Pressure.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Temperature: ");
  Serial.print(Pressure.readTemperature());
  Serial.println("C");

  Serial.print("Pressure: ");
  Serial.print(Pressure.readPressure());
  Serial.println("Pa");

  Serial.print("Altitude: ");
  Serial.print(Pressure.readAltitude());
  Serial.println("m");

  Serial.println("\n");

  delay(10000);

}
