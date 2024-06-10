#include "HoudiniOutputObjectIdentifier.h"

FHoudiniOutputObjectIdentifier::FHoudiniOutputObjectIdentifier() {
    (*this).ObjectId = -1;
    (*this).GeoId = -1;
    (*this).PartId = -1;
    (*this).SplitIdentifier = TEXT("");
    (*this).PartName = TEXT("");
    (*this).PrimitiveIndex = -1;
    (*this).PointIndex = -1;
}

