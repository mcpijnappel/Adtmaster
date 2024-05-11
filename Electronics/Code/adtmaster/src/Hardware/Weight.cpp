#include <Arduino.h>
class WeightSensor
{
private:
    /* data */
    int startTime;
    int endTime;
    int timeDrinking;
    int weight;
    int startingWeight;
    bool isDrinking = true;
    bool drinkingDone = false;
public:
    WeightSensor()
    {
    }

    void loop(){
        //Meten huidige waarden TODO

        //Detecteren gewicht weg TODO
        //als 10gram omlaag sla timestamp op

        //Detecteren gewicht terug TODO
        //als omhoog sla timestamp op

        //Dan even wachten tot gewicht weer stabiel en verschil in gram berekenen
    }
    int getWeight() {
        return weight;
    }
    int getTime() {
        return endTime - startTime;
    }

    bool drinkingDone(){
        return drinkingDone;
    }

};