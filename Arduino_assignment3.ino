// Diode Signal Detector on ESP32
const int signalPin = 25;  // GPIO pin connected to the diode-protected signal

void setup() {
  Serial.begin(115200);         // Initialize serial communication
  pinMode(signalPin, INPUT);    // Set signalPin as input
}

void loop() {
  int signalState = digitalRead(signalPin);  // Read the signal state (HIGH or LOW)

  if (signalState == HIGH) {
    Serial.println("High voltage detected!");
  } else {
    Serial.println("No high voltage detected (safe).");
  }

  delay(500);  // Wait half a second before next reading
}

