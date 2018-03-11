#include <Arduino.h>
#include "Button.h"

Button::Button(int pin)
    : pin(pin)
{
    pinMode(pin, INPUT_PULLUP);
}

bool Button::isPressed()
{
    if (digitalRead(pin) == LOW) {
        return true;
    }

    return false;
}