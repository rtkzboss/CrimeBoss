#include "CustomizableObjectMeshToMeshVertData.h"

FCustomizableObjectMeshToMeshVertData::FCustomizableObjectMeshToMeshVertData() {
    this->SourceMeshVertIndices[0] = 0;
    this->SourceMeshVertIndices[1] = 0;
    this->SourceMeshVertIndices[2] = 0;
    this->SourceMeshVertIndices[3] = 0;
    this->Weight = 0.00f;
    this->SourceAssetIndex = 0;
    this->SourceAssetLodIndex = 0;
}

