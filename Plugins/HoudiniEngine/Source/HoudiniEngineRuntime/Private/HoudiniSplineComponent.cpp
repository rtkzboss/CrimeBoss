#include "HoudiniSplineComponent.h"
#include "ComponentInstanceDataCache.h"

UHoudiniSplineComponent::UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto& gen0 = (*this).CurvePoints;
    gen0.Empty();
    gen0.AddDefaulted(2);
    auto& gen1 = (*this).DisplayPoints;
    gen1.Empty();
    gen1.AddDefaulted(2);
    (*this).CurveOrder = 2;
    (*this).bIsHoudiniSplineVisible = true;
    (*this).bCookOnCurveChanged = true;
    (*this).NodeId = -1;
}


