#include <M5Stack.h>
#include "sensor/sensor.h"

Sensor sensor;

void setup()
{
    M5.begin();
    M5.lcd.setTextSize(2);

    sensor.initialize();
    M5.lcd.println("ENV III Unit Test");
}

void loop()
{
    sensor.update();

    M5.lcd.fillRect(0, 20, 100, 60, BLACK);
    M5.lcd.setCursor(0, 20);
    M5.lcd.printf("T: %2.1f  \r\nH: %2.0f%%  \r\nP:%2.0fPa\r\n",
                  sensor.getTemperature(), sensor.getHumidity(), sensor.getPressure());
    delay(2000);
}