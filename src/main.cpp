#include <cantino.h>
#include "Button.h"
#include "Servo.h"

using namespace cantino;

int main() 
{
    int counter = 0;
    Button primaryButton(2);
    Servo primaryPin(3);
    while (true) {
        if (primaryButton.isPressed()) {
            counter++;
        }
        if (primaryPin.ifON()){
            cout << "servo connected" << endl;
        }
        cout << counter << endl;
    }
}