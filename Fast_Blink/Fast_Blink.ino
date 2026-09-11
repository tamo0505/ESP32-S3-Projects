// Project: Fast Blink
// Board: ESP32-S3
// LED Pin: GPIO 4

const int LED_PIN = 4;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(200);

  digitalWrite(LED_PIN, LOW);
  delay(200);
}
