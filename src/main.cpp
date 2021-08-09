#include"rendering.h"

int main()
{
    auto Temple = new Object("TempleObj");
    Temple->setPosition(0.0f, 0.0, 0.0f);
    Temple->setScale(3.0f, 3.0f, 3.0f);
    Temple->setRotationVector(0, 1, 0);
    Temple->setAngle(0);
    Temple->setModelName("res/models/Mayadevimodel.obj");

    Temple->addObject(Temple);
    

    Render:: Render(Temple);
    return 0;
}

