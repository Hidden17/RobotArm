#include <Arduino.h> //global
#include "Servo.h" //local
//slechts begin code/functies hierin stoppen, later in je header waarde geven.

Servo::Servo(int pin)
 : pin (pin)
{
    pinMode(pin, INPUT_PULLUP);
    setAngleRange(MIN_ANGLE, MAX_ANGLE);//
    setServoPWM(MIN_PWM, MAX_PWM); // 500-2400 zie servodatabase.com/servo/towerpro/sg90 --volgen arduino website 544-2400
    setSpeed(2); 
    turnAngle(0);
}


bool Servo::ifON(){
    return (servo.attached()); //standaard functie van servo (attach)
}

Servo &Servo::enable(){
    servo.attach(pin, MIN_PWM, MAX_PWM);
    return *this;
}

//bool Servo::ifOFF(){
//    return !(ifON()); //omgekeerd  van ifON
//}