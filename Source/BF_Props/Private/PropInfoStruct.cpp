#include "PropInfoStruct.h"

FPropInfoStruct::FPropInfoStruct() {
    auto& gen3407 = (*this).Force;
    gen3407.Empty();
    auto& gen3408 = (*this).Block;
    gen3408.Empty();
    (*this).MinRotation.Pitch = 0.000000000e+00f;
    (*this).MinRotation.Yaw = 0.000000000e+00f;
    (*this).MinRotation.Roll = 0.000000000e+00f;
    (*this).MaxRotation.Pitch = 0.000000000e+00f;
    (*this).MaxRotation.Yaw = 0.000000000e+00f;
    (*this).MaxRotation.Roll = 0.000000000e+00f;
    (*this).Chance = 1.000000000e+02f;
    auto& gen3409 = (*this).ChanceShare;
    gen3409.Empty();
}

