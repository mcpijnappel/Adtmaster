#ifndef ACTIVITY
#define ACTIVITY
#include <Arduino.h>
    class Activity
    {
 
    private:
        

    public:
        Activity(String activityName)
        {
            name = activityName;
        }
String name = "default";

        void onStart()
        {
           // Serial.println("Starting " + name);
            Serial.println(name);
        };
        void loop() {}
        void onFinish() {}
    };
#endif