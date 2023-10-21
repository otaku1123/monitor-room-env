#pragma once

#include "M5_ENV.h"

class Sensor
{
private:
    float temperature = 0.0;
    float humidity = 0.0;
    float pressure = 0.0;

    SHT3X sht30;
    QMP6988 qmp6988;

public:
    Sensor();
    ~Sensor();

    bool initialize();
    bool update();

    float getTemperature() { return temperature; }
    float getHumidity() { return humidity; }
    float getPressure() { return pressure; }
};
