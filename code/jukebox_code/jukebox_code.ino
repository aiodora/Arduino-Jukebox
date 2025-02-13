#include <Wire.h>

#define I2C_ADDRESS 0x2A

static const uint6_t BUFSIZE = 64;
volatile uint8_t gpsBuffer[BUFSIZE];
volatile uint8_t head = 0;
volatile uint8_t tail = 0;

void setup() {
  Wire.begin(I2C_ADDRESS);

  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);

  Serial.begin(4800, SERIAL_8N2);
}

void loop() {
  while(Serial.available() > 0) {
    uint8_t c = Serial.read();

    gpsBuffer[head] = c;
    head = (head + 1) % BUFSIZE;
  }
}

void receiveEvent(int numBytes) {
  while(Wire.available() > 0) {
    uint8_t c = Wire.read();
    Serial.write(c);
  }
}

void requestEvent() {
  int available bytes = (head >= tail) ? (head - tail) : (BUFSIZE - tail + head);
  int bytesToSend = (availableBytes > 32) ? 32 : availableBytes;

  for(int i=0; i<bytesToSend; i++) {
    Wire.write(gpsBuffer[tail]);
    tail = (tail + 1) % BUFSIZE;
  } 
}
