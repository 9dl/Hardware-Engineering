#include <SPI.h>
#include <RF24.h>

// Define the pins connected to the nRF24L01 module
#define CE_PIN   13
#define CSN_PIN  15
#define SCK_PIN  18
#define MOSI_PIN 23
#define MISO_PIN 19
#define IRQ_PIN  21 // Optional, if used for interrupts

RF24 radio(CE_PIN, CSN_PIN);

void setup() {
  Serial.begin(115200);
  SPI.begin(SCK_PIN, MISO_PIN, MOSI_PIN, CSN_PIN);  // Initialize SPI with your pins

  radio.begin();
  // Initialize radio settings here
}

void loop() {
  // Your code for using the nRF24L01 module
}
