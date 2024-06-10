#include "ParameterUIData.h"

FParameterUIData::FParameterUIData() {
    (*this).Name = TEXT("");
    (*this).ParamUIMetadata.ObjectFriendlyName = TEXT("");
    (*this).ParamUIMetadata.UISectionName = TEXT("");
    (*this).ParamUIMetadata.UIOrder = 0;
    (*this).ParamUIMetadata.UIThumbnail = nullptr;
    (*this).Type = EMutableParameterType::None;
    (*this).ArrayIntegerParameterOption.Empty();
    (*this).IntegerParameterGroupType = ECustomizableObjectGroupType::COGT_ONE_OR_NONE;
    (*this).bDontCompressRuntimeTextures = false;
}

