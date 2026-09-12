#include "sensor_interface.h"

#define DETECTION_THRESHOLD 1800

int readSensor() {
    return 0; /* Connect to the actual sensor ADC/interface */
}

bool detectMicroplastic(int sensorValue) {
    return sensorValue >= DETECTION_THRESHOLD;
}
