#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_AP);

  // Array of fake SSIDs
  const char* fakeSSIDs[10] = {
    "Network_1", "Network_2", "Network_3", "Network_4", "Network_5",
    "Network_6", "Network_7", "Network_8", "Network_9", "Network_10"
  };

  // Initialize each network one by one
  for (int i = 0; i < 10; i++) {
    // Use different channels to ensure networks appear as unique
    WiFi.softAP(fakeSSIDs[i], "", 1, false, i + 1);
    delay(100); // Allow each AP some time to set up
    Serial.print("Started fake network: ");
    Serial.println(fakeSSIDs[i]);
  }

  Serial.println("All fake networks are now active.");
}

void loop() {
  // Keep the networks active
  delay(1000);
}