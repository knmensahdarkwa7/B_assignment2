// ESP32 Back EMF Detector
const int emfPin = 35; // Analog pin connected to voltage divider

void setup() {
  Serial.begin(115200);
  analogReadResolution(12); // ESP32 supports 12-bit ADC (0–4095)
}

void loop() {
  int emfValue = analogRead(emfPin);

  // Optional: map to voltage if needed
  float voltage = (emfValue / 4095.0) * 3.3; // Assuming 3.3V reference

  if (emfValue > 100) { // Threshold to avoid noise
    Serial.print("Back EMF detected! Value: ");
    Serial.print(emfValue);
    Serial.print(" | Voltage: ");
    Serial.println(voltage, 2); // Print voltage with 2 decimal places
  }

  delay(100); // Sampling delay
}

