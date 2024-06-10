#include "HoudiniParameterRampColorPoint.h"

UHoudiniParameterRampColorPoint::UHoudiniParameterRampColorPoint() {
    (*this).Interpolation = EHoudiniRampInterpolationType::InValid;
    (*this).InstanceIndex = -1;
}


