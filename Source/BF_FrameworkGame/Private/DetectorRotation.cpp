#include "DetectorRotation.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UDetectorRotation::UDetectorRotation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDetectorRotation::UpdateRotationPointByDelta(float inHorizontalDeltaRotation, float inVerticalDeltaRotation) {
}

void UDetectorRotation::OnRep_LookAtTarget(FIGS_InterestPointHolder inPreviousLookAtTarget) {
}

bool UDetectorRotation::IsCloseToFollowedPoint(float inDesiredHorzintalAngle, float inDesiredVerticalAngle) const {
    return false;
}

void UDetectorRotation::FullRotation(FVector inTarget, float inDeltaSeconds) {
}

void UDetectorRotation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDetectorRotation, LookAtTarget);
}


