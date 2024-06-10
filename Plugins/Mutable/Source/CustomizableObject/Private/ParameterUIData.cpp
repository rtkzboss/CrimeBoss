#include "ParameterUIData.h"

FParameterUIData::FParameterUIData() {
    (*this).Name = TEXT("");
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).Type = EMutableParameterType::None;
    auto& gen1588 = (*this).ArrayIntegerParameterOption;
    gen1588.Empty();
    (*this).IntegerParameterGroupType = ECustomizableObjectGroupType::COGT_ONE_OR_NONE;
    (*this).bDontCompressRuntimeTextures = false;
}

