const int signalPin = 25; // Input pin connected after the diode

void setup() {
    Serial.begin(115200);          // Initialize serial communication
    pinMode(signalPin, INPUT_PULLDOWN); // Use internal pull-down to avoid floating
}

void loop() {
    bool isHighVoltage = digitalRead(signalPin);

    if (isHighVoltage) {
        Serial.println("⚡ High voltage detected after the diode!");
    } else {
        Serial.println("✅ No high voltage detected (safe).");
    }

    delay(500); // Wait before the next read
}
