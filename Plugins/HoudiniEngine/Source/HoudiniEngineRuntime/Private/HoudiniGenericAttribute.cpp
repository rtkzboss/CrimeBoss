#include "HoudiniGenericAttribute.h"

FHoudiniGenericAttribute::FHoudiniGenericAttribute() {
    (*this).AttributeName = TEXT("");
    (*this).AttributeType = EAttribStorageType::Invalid;
    (*this).AttributeOwner = EAttribOwner::Invalid;
    (*this).AttributeCount = -1;
    (*this).AttributeTupleSize = -1;
    (*this).DoubleValues.Empty();
    (*this).IntValues.Empty();
    (*this).StringValues.Empty();
}

