#include "ConstructionSystemSaveConstructedItem.h"

FConstructionSystemSaveConstructedItem::FConstructionSystemSaveConstructedItem() {
    (*this).PrefabAsset = nullptr;
    (*this).Seed = 0;
    (*this).Transform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
}

