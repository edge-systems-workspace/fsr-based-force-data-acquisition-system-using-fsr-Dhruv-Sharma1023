#include <Arduino.h>

// TODO 1:
// Define FSR analog pin (Use A0)
const uint8_t FSR_PIN = A0;

// TODO 2:
// Create variable to store sensor reading
int fsrValue = 0; // current FSR ADC reading (0-1023 on 10-bit ADC)

// TODO 7:
// Threshold for detecting pressure from FSR
const int FSR_THRESHOLD = 100; // adjust as needed

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);
    delay(10); // allow Serial port to initialize

    // TODO 4:
    // Print system initialization message
    Serial.println("FSR Force Measurement System v1.0");
    Serial.println("System Initialized...");
}

void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrValue = (int)analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.print(fsrValue);
    Serial.println(" (ADC)");

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)
    if (fsrValue > FSR_THRESHOLD) {   // adjust threshold as needed

        // TODO 8:
        // Print pressure detection message
        Serial.print("Pressure Detected! ADC=");
        Serial.println(fsrValue);
    } else {
        Serial.println("No Significant Pressure.");
    }

    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(500);
}