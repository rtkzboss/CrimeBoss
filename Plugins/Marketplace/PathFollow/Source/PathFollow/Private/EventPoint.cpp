#include "EventPoint.h"

FEventPoint::FEventPoint() {
    this->Distance = 0.00f;
    this->UserData = NULL;
    this->FireMode = EPFEventFireMode::Forward;
    this->FireCount = 0;
    this->Index = 0;
}

