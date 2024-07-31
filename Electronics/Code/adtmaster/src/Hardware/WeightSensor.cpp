#include <Arduino.h>
#include "pins.h"
#include "HX711.h"

class WeightSensor
{
private:
    HX711 scale;

    /* data */
    int startTime;
    int endTime;
    int timeDrinking;
    float weight;
    int startingWeight;
    bool isDrinking = true;
    bool drinkingDone = false;

    float getUnits(byte measurements)
    {
        scale.get_units(measurements), 1;
    }

    float getValue(byte measurements)
    {
        scale.get_value(measurements), 1;
    }

public:
    WeightSensor()
    {
        scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
        scale.set_scale(2280.f); // this value is obtained by calibrating the scale with known weights; see the README for details
        scale.tare();            // reset the scale to 0
    }

    void printValue(byte measurements)
    {
        Serial.print("Loadcell value ");
        Serial.println(getValue(measurements));
    }

    void loop()
    {
        // Meten huidige waarden TODO

        // Detecteren gewicht weg TODO
        // als 10gram omlaag sla timestamp op

        // Detecteren gewicht terug TODO
        // als omhoog sla timestamp op

        // Dan even wachten tot gewicht weer stabiel en verschil in gram berekenen
    }

    int getWeight()
    {
        return weight;
    }

    int getTime()
    {
        return endTime - startTime;
    }

    void powerdown()
    {
        scale.power_down();
    }

    void powerup()
    {
        scale.power_up();
    }

    bool isDrinkingDone()
    {
        return drinkingDone;
    }
};