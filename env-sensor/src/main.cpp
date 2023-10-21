#include <M5Stack.h>
#include "m5stack-env/M5_ENV.h"

SHT3X sht30;
QMP6988 qmp6988;

float temperature = 0.0;
float humidity = 0.0;
float pressure = 0.0;

void setup()
{
    M5.begin();
    M5.lcd.setTextSize(2);

    Wire.begin();
    qmp6988.init();
    sht30.init();
    M5.lcd.println("ENV III Unit Test");
}

void loop()
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
    M5.lcd.fillRect(0, 20, 100, 60, BLACK);
    M5.lcd.setCursor(0, 20);
    M5.lcd.printf("T: %2.1f  \r\nH: %2.0f%%  \r\nP:%2.0fPa\r\n",
                  temperature, humidity, pressure);
    delay(2000);
}