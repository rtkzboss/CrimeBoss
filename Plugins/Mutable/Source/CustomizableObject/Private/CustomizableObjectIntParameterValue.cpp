#include "CustomizableObjectIntParameterValue.h"

FCustomizableObjectIntParameterValue::FCustomizableObjectIntParameterValue() {
    (*this).ParameterName = TEXT("");
    (*this).ParameterValueName = TEXT("");
    (*this).Uid = TEXT("");
    (*this).ParameterRangeValueNames.Empty();
}

