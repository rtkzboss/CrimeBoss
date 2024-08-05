#include "ActorInfoStruct.h"

FActorInfoStruct::FActorInfoStruct() {
    (*this).ActorSpawnerComponent = nullptr;
    (*this).bEnableTransformOffset = false;
    (*this).LocationOffset.X = 0.000000000e+00f;
    (*this).LocationOffset.Y = 0.000000000e+00f;
    (*this).LocationOffset.Z = 0.000000000e+00f;
    (*this).RotationOffset.Pitch = 0.000000000e+00f;
    (*this).RotationOffset.Yaw = 0.000000000e+00f;
    (*this).RotationOffset.Roll = 0.000000000e+00f;
}

