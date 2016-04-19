/*
 * Copyright 2015 Daniel Murari Boatto
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "Thermometer.h"

using namespace Ampliar::LM35;

/**
 * Constructor.
 *
 * @param analogPin Analogic pin used to receive data.
 */
Thermometer::Thermometer(uint8_t analogPin) : _pin(analogPin)
{
    //
}

/**
 * Reads the temperature in celsius degrees.
 *
 * @return The temperature.
 */
float Thermometer::readCelsius()
{
    return ((5000.0 * analogRead(_pin)) / 1024.0) / 10.0;
}

/**
 * Reads the temperature in fahrenheits.
 *
 * @return The temperature.
 */
float Thermometer::readFahrenheit()
{
    return 9.0 / 5.0 * readCelsius() + 32;
}
