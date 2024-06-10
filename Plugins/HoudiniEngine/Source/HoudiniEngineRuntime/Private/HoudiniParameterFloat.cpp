#include "HoudiniParameterFloat.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFloat::UHoudiniParameterFloat() {
    (*this).Min = -3.402823466e+38f;
    (*this).Max = 3.402823466e+38f;
    (*this).UIMin = -3.402823466e+38f;
    (*this).UIMax = 3.402823466e+38f;
    (*this).ParmType = EHoudiniParameterType::Float;
}


