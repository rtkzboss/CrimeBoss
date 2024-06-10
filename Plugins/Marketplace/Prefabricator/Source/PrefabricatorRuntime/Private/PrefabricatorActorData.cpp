#include "PrefabricatorActorData.h"

FPrefabricatorActorData::FPrefabricatorActorData() {
    (*this).PrefabItemID.A = 0;
    (*this).PrefabItemID.B = 0;
    (*this).PrefabItemID.C = 0;
    (*this).PrefabItemID.D = 0;
    (*this).RelativeTransform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).ClassPath = TEXT("");
    (*this).ClassPathRef = FSoftClassPath();
    (*this).Properties.Empty();
    (*this).Components.Empty();
}

