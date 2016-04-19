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
#ifndef __AMPLIAR_LM35_REALTIME_CLOCK_H__
#define __AMPLIAR_LM35_REALTIME_CLOCK_H__

#include <stdint.h>
#include <Arduino.h>

namespace Ampliar { namespace LM35 {

/**
 * This class abstracts basic temperature reading functionalities of LM35.
 *
 * @author Daniel Murari Boatto
 */
class Thermometer
{
public:
    Thermometer(uint8_t analogPin);
    float readCelsius();
    float readFahrenheit();

private:
    /**
     * Analog pin number
     */
    uint8_t _pin;
};

}} //end of namespace
#endif //__AMPLIAR_LM35_REALTIME_CLOCK_H__
