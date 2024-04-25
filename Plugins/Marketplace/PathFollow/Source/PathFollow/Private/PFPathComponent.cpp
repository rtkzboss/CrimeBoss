#include "PFPathComponent.h"

UPFPathComponent::UPFPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MirrorAroundX = false;
    this->ReversePath = false;
    this->_FollowerComponent = NULL;
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


