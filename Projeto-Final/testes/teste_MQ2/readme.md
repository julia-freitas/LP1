# Teste do modulo de fumaça (MQ2)

- utilizei funções;

- utilizei ponteiros;


## Informações sobre o módulo

In this example, you will read the sensor analog output voltage and when the smoke reaches a certain level, it will make sound a buzzer and a red LED will turn on.

When the output voltage is below  that level, a green LED will be on.

## What is an MQ-2 Smoke Sensor?

The MQ-2 smoke sensor is sensitive to smoke and to the following flammable gases:

- LPG
- Butane
- Propane
- Methane
- Alcohol
- Hydrogen

The resistance of the sensor is different depending on the type of the gas.

The smoke sensor has a built-in potentiometer that allows you to adjust the sensor sensitivity according to how accurate you want to detect gas.

## How does it Work?


The voltage that the sensor outputs changes accordingly to the smoke/gas level that exists in the atmosphere. The sensor outputs a voltage that is proportional to the concentration of smoke/gas.

In other words, the relationship between voltage and gas concentration is the following:

- The **_greater_** the gas concentration, the **_greater_** the output voltage
- The **_lower_** the gas concentration, the **_lower_** the output voltage

The output can be an analog signal (A0) that can be read with an analog input of the Arduino or a digital output (D0) that can be read with a digital input of the Arduino.

## Pin Wiring

The MQ-2 sensor has 4 pins.

Pin ------------------------------------- Wiring to Arduino Uno

A0 ------------------------------------- Analog pins

D0 ------------------------------------- Digital pins

GND ----------------------------------- GND

VCC ------------------------------------ 5V


## Referências

https://create.arduino.cc/projecthub/Aritro/smoke-detection-using-mq-2-gas-sensor-79c54a

http://wiki.seeedstudio.com/Grove-Gas_Sensor-MQ2/
