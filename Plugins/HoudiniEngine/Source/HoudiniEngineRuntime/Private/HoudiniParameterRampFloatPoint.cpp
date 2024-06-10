#include "HoudiniParameterRampFloatPoint.h"

UHoudiniParameterRampFloatPoint::UHoudiniParameterRampFloatPoint() {
    (*this).Interpolation = EHoudiniRampInterpolationType::InValid;
    (*this).InstanceIndex = -1;
}


