#include "CustomizableObjectMeshToMeshVertData.h"

FCustomizableObjectMeshToMeshVertData::FCustomizableObjectMeshToMeshVertData() {
    (*this).PositionBaryCoordsAndDist.X = 0.000000000e+00f;
    (*this).PositionBaryCoordsAndDist.Y = 0.000000000e+00f;
    (*this).PositionBaryCoordsAndDist.Z = 0.000000000e+00f;
    (*this).PositionBaryCoordsAndDist.W = 1.000000000e+00f;
    (*this).NormalBaryCoordsAndDist.X = 0.000000000e+00f;
    (*this).NormalBaryCoordsAndDist.Y = 0.000000000e+00f;
    (*this).NormalBaryCoordsAndDist.Z = 0.000000000e+00f;
    (*this).NormalBaryCoordsAndDist.W = 1.000000000e+00f;
    (*this).TangentBaryCoordsAndDist.X = 0.000000000e+00f;
    (*this).TangentBaryCoordsAndDist.Y = 0.000000000e+00f;
    (*this).TangentBaryCoordsAndDist.Z = 0.000000000e+00f;
    (*this).TangentBaryCoordsAndDist.W = 1.000000000e+00f;
    (*this).SourceMeshVertIndices[0] = 0;
    (*this).SourceMeshVertIndices[1] = 0;
    (*this).SourceMeshVertIndices[2] = 0;
    (*this).SourceMeshVertIndices[3] = 0;
    (*this).Weight = 0.000000000e+00f;
    (*this).SourceAssetIndex = 0;
    (*this).SourceAssetLodIndex = 0;
}

