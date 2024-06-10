#include "HoudiniSplineComponent.h"
#include "ComponentInstanceDataCache.h"

UHoudiniSplineComponent::UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto& gen200 = (*this).CurvePoints;
    gen200.Empty();
    gen200.AddDefaulted(2);
    auto& gen201 = (*this).DisplayPoints;
    gen201.Empty();
    gen201.AddDefaulted(2);
    (*this).CurveOrder = 2;
    (*this).bIsHoudiniSplineVisible = true;
    (*this).bCookOnCurveChanged = true;
    (*this).NodeId = -1;
}


