/*
 * Microplastic Detection Device
 * Generic Arduino/ESP32 starter firmware.
 *
 * Replace SENSOR_PIN and threshold values according to the actual
 * sensor and calibration procedure used in your prototype.
 */

#define SENSOR_PIN 34
#define LED_PIN 2
#define DETECTION_THRESHOLD 1800

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  bool detected = sensorValue >= DETECTION_THRESHOLD;

  digitalWrite(LED_PIN, detected ? HIGH : LOW);

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Detection: ");
  Serial.println(detected ? "POSSIBLE MICROPLASTIC" : "NO DETECTION");

  delay(1000);
}
