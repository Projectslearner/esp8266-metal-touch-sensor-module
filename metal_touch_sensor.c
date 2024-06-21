/*
    Project name : ESP8266 Metal touch sensor module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-metal-touch-sensor-module
*/

const int touchSensorPin = D2; // Digital pin connected to the capacitive touch sensor module

void setup() {
  pinMode(touchSensorPin, INPUT); // Set the pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the capacitive touch sensor
  int touchState = digitalRead(touchSensorPin);

  // Print the sensor state to the Serial Monitor
  if (touchState == HIGH) {
    Serial.println("Metal Object Detected");
  } else {
    Serial.println("No Metal Object Detected");
  }

  delay(1000); // Delay before next reading
}
