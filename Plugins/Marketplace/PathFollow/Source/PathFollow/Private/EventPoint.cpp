#include "EventPoint.h"

FEventPoint::FEventPoint() {
    (*this).Name = NAME_None;
    (*this).Distance = 0.000000000e+00f;
    (*this).UserData = nullptr;
    (*this).FireMode = EPFEventFireMode::Always;
    (*this).FireCount = -1;
    (*this).Index = -1;
}

