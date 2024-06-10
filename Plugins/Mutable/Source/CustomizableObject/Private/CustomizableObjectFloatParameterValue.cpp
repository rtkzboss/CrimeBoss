#include "CustomizableObjectFloatParameterValue.h"

FCustomizableObjectFloatParameterValue::FCustomizableObjectFloatParameterValue() {
    (*this).ParameterName = TEXT("");
    (*this).ParameterValue = 0.000000000e+00f;
    (*this).Uid = TEXT("");
    (*this).ParameterRangeValues.Empty();
}

