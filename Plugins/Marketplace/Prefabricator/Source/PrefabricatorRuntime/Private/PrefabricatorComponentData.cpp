#include "PrefabricatorComponentData.h"

FPrefabricatorComponentData::FPrefabricatorComponentData() {
    (*this).RelativeTransform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).ComponentName = TEXT("");
    (*this).Properties.Empty();
}

