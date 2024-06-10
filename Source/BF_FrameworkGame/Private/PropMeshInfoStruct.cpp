#include "PropMeshInfoStruct.h"

FPropMeshInfoStruct::FPropMeshInfoStruct() {
    (*this).PivotVariationMax = 0.000000000e+00f;
    auto& gen3103 = (*this).MeshesToSpawn;
    gen3103.Empty();
}

