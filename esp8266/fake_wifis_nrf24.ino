#include <ESP8266WiFi.h>
#include <SPI.h>
#include <RF24.h>

// Define the pins based on your wiring
#define CE_PIN    D2  // GPIO 4
#define CSN_PIN   D1  // GPIO 5

RF24 radio(CE_PIN, CSN_PIN); // Create an RF24 object

void setup() {
  // Start Serial for debugging
  Serial.begin(115200);
  // Initialize Wi-Fi AP mode
  WiFi.mode(WIFI_AP);

  // Array of fake SSIDs
  const char* fakeSSIDs[10] = {
    "Network_1", "Network_2", "Network_3", "Network_4", "Network_5",
    "Network_6", "Network_7", "Network_8", "Network_9", "Network_10"
  };

  // Initialize the nRF24L01+ radio module
  radio.begin();
  radio.setPALevel(RF24_PA_HIGH); // Set power amplifier level for better range
  radio.setChannel(1); // Set communication channel
  radio.openWritingPipe(0xF0F0F0F0E1LL); // Define sending address for communication
  radio.openReadingPipe(1, 0xF0F0F0F0D2LL); // Define receiving address for communication
  radio.startListening(); // Start listening for incoming data

  Serial.println("nRF24L01+ Module Initialized.");

  // Start fake networks one by one
  for (int i = 0; i < 10; i++) {
    // Start Wi-Fi AP with different SSID and unique channel
    WiFi.softAP(fakeSSIDs[i], "", 1, false, i + 1);
    delay(100); // Allow each AP some time to set up
    Serial.print("Started fake network: ");
    Serial.println(fakeSSIDs[i]);

    // Send fake SSID through nRF24L01+
    radio.stopListening(); // Stop listening to send data
    radio.write(fakeSSIDs[i], sizeof(fakeSSIDs[i])); // Send SSID over the radio
    Serial.print("Sent SSID: ");
    Serial.println(fakeSSIDs[i]);
    radio.startListening(); // Start listening again for incoming data
  }

  Serial.println("All fake networks are now active.");
}

void loop() {
  // Listen for incoming data via nRF24L01+
  if (radio.available()) {
    char receivedMessage[32] = "";  // Buffer for received data
    radio.read(&receivedMessage, sizeof(receivedMessage));  // Read data
    Serial.print("Received: ");
    Serial.println(receivedMessage);
  }

  // Keep the networks active
  delay(1000);
}
