#include "HoudiniGenericAttribute.h"

FHoudiniGenericAttribute::FHoudiniGenericAttribute() {
    (*this).AttributeName = TEXT("");
    (*this).AttributeType = EAttribStorageType::Invalid;
    (*this).AttributeOwner = EAttribOwner::Invalid;
    (*this).AttributeCount = -1;
    (*this).AttributeTupleSize = -1;
    auto& gen1596 = (*this).DoubleValues;
    gen1596.Empty();
    auto& gen1597 = (*this).IntValues;
    gen1597.Empty();
    auto& gen1598 = (*this).StringValues;
    gen1598.Empty();
}

