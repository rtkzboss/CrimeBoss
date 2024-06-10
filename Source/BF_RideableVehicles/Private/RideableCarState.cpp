#include "RideableCarState.h"

FRideableCarState::FRideableCarState() {
    (*this).Tranform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).Velocity.X = 0.000000000e+00f;
    (*this).Velocity.Y = 0.000000000e+00f;
    (*this).Velocity.Z = 0.000000000e+00f;
    (*this).LastMove.Throttle = 0.000000000e+00f;
    (*this).LastMove.SteeringThrow = 0.000000000e+00f;
    (*this).LastMove.Brake = false;
    (*this).LastMove.DeltaTime = 0.000000000e+00f;
    (*this).LastMove.Time = 0.000000000e+00f;
}

