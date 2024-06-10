#include "PFPathComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UPFPathComponent::UPFPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DrawerConfig.bDrawIfNotSelected = true;
    (*this).DrawerConfig.bDrawIfSelected = true;
    (*this).DrawerConfig.PathColor.B = 255;
    (*this).DrawerConfig.PathColor.A = 255;
    (*this).DrawerConfig.Thickness = 5.000000000e+00f;
    auto& gen89 = (*this)._speedCurve._speedCurve.Points;
    gen89.Empty();
    gen89.AddDefaulted(2);
}

float UPFPathComponent::GetTimeForPath() {
    return 0.0f;
}

FVector UPFPathComponent::GetLocationAtSplinePointMirrored(int32 PointIdx, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector UPFPathComponent::GetLocationAtSplineInputKeyMirrored(float Key, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector UPFPathComponent::GetLocationAtDistanceAlongSplineMirrored(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}


