#include "sensor.h"

Sensor::Sensor()
{
}

Sensor::~Sensor()
{
}

bool Sensor::initialize()
{
    Wire.begin();
    qmp6988.init();
    sht30.init();
    return true;
}

bool Sensor::update()
{
    pressure = qmp6988.calcPressure();
    if (sht30.get() == 0)
    {
        temperature = sht30.cTemp;
        humidity = sht30.humidity;
    }
    else
    {
        temperature = 0.0;
        humidity = 0.0;
    }
    return true;
}

