#include "ParameterUIData.h"

FParameterUIData::FParameterUIData() {
    this->Type = EMutableParameterType::None;
    this->IntegerParameterGroupType = ECustomizableObjectGroupType::COGT_TOGGLE;
    this->bDontCompressRuntimeTextures = false;
}

