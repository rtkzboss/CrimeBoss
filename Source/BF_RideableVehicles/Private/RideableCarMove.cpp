#include "RideableCarMove.h"

FRideableCarMove::FRideableCarMove() {
    (*this).Throttle = 0.000000000e+00f;
    (*this).SteeringThrow = 0.000000000e+00f;
    (*this).Brake = false;
    (*this).DeltaTime = 0.000000000e+00f;
    (*this).Time = 0.000000000e+00f;
}

