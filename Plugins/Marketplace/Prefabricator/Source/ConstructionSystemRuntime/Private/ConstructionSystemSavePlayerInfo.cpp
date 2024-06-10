#include "ConstructionSystemSavePlayerInfo.h"

FConstructionSystemSavePlayerInfo::FConstructionSystemSavePlayerInfo() {
    (*this).bRestorePlayerInfo = false;
    (*this).Transform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).ControlRotation.Pitch = 0.000000000e+00f;
    (*this).ControlRotation.Yaw = 0.000000000e+00f;
    (*this).ControlRotation.Roll = 0.000000000e+00f;
}

