/**
 * This example shows how to use LM35 to read the temperature
 * in Celsius degrees.
 *
 * More information: https://github.com/dboatto/LM35
 *
 * In order to use this example, open the Serial Monitor on
 * Arduino IDE (Ctrl+Shit+M).
 */
#include <Arduino.h>
#include "Thermometer.h"

//All library classes are inside namespaces.
//Therefore, use the following statement to import them.
using namespace Ampliar::LM35;

Thermometer thermometer(1);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print(thermometer.readCelsius());
    Serial.print(" C");
    Serial.println();

    delay(1000);
}
