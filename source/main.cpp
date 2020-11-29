#include "MicroBit.h"

MicroBit uBit;

main()
{
    uBit.init();

    while(1)
    {
        if (uBit.buttonA.isPressed())
            uBit.display.image.setPixelValue(0,0,255);
        else
            uBit.display.image.setPixelValue(0,0,0);

        if (uBit.buttonB.isPressed())
            uBit.display.image.setPixelValue(4,0,255);
        else
            uBit.display.image.setPixelValue(4,0,0);

        uBit.sleep(100);
    }
}
