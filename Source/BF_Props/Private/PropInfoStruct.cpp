#include "PropInfoStruct.h"

FPropInfoStruct::FPropInfoStruct() {
    (*this).Force.Empty();
    (*this).Block.Empty();
    (*this).MinRotation.Pitch = 0.000000000e+00f;
    (*this).MinRotation.Yaw = 0.000000000e+00f;
    (*this).MinRotation.Roll = 0.000000000e+00f;
    (*this).MaxRotation.Pitch = 0.000000000e+00f;
    (*this).MaxRotation.Yaw = 0.000000000e+00f;
    (*this).MaxRotation.Roll = 0.000000000e+00f;
    (*this).Chance = 1.000000000e+02f;
    (*this).ChanceShare.Empty();
}

