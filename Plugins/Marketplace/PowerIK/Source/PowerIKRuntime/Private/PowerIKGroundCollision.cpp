#include "PowerIKGroundCollision.h"

FPowerIKGroundCollision::FPowerIKGroundCollision() {
    (*this).CollisionChannel = ECC_WorldStatic;
    (*this).TraceComplex = true;
    (*this).RayCastUp = 2.000000000e+02f;
    (*this).RayCastDown = 2.000000000e+02f;
    (*this).EnableWallCollision = false;
    (*this).WallOffset = 2.000000000e+01f;
}

