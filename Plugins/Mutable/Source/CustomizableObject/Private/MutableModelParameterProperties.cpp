#include "MutableModelParameterProperties.h"

FMutableModelParameterProperties::FMutableModelParameterProperties() {
    (*this).Name = TEXT("");
    (*this).Type = EMutableParameterType::None;
    (*this).ImageDescriptionCount = 0;
    auto& gen1575 = (*this).PossibleValues;
    gen1575.Empty();
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
}

