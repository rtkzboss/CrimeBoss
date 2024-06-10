#include "CustomizableObjectVectorParameterValue.h"

FCustomizableObjectVectorParameterValue::FCustomizableObjectVectorParameterValue() {
    (*this).ParameterName = TEXT("");
    (*this).ParameterValue.R = 0.000000000e+00f;
    (*this).ParameterValue.G = 0.000000000e+00f;
    (*this).ParameterValue.B = 0.000000000e+00f;
    (*this).ParameterValue.A = 0.000000000e+00f;
    (*this).Uid = TEXT("");
}

