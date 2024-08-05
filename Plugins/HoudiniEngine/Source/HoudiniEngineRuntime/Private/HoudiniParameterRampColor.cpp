#include "HoudiniParameterRampColor.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterRampColor::UHoudiniParameterRampColor() {
    (*this).NumDefaultPoints = -1;
    (*this).ParmType = EHoudiniParameterType::ColorRamp;
}


