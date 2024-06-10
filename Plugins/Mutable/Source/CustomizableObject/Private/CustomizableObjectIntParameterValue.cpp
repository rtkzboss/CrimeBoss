#include "CustomizableObjectIntParameterValue.h"

FCustomizableObjectIntParameterValue::FCustomizableObjectIntParameterValue() {
    (*this).ParameterName = TEXT("");
    (*this).ParameterValueName = TEXT("");
    (*this).Uid = TEXT("");
    auto& gen1584 = (*this).ParameterRangeValueNames;
    gen1584.Empty();
}

