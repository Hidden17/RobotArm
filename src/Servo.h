#pragma once


class Servo{
    public:
        Servo (int pin);
        bool ifON();
        static const int16_t MIN_ANGLE = -90; // int16bytes
        static const int16_t MAX_ANGLE = 90;
        static const uint16_t MIN_PWM = 544; // unasigned
        static const uint16_t MAX_PWM = 2400;

        Servo (int pin);
        uint8_t getPin(); //nodig omdat je private gebruikt 
        Servo &enable();
    
    private:
     int pin;
};