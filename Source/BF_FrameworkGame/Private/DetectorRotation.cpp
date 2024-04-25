#include "DetectorRotation.h"
#include "Net/UnrealNetwork.h"

UDetectorRotation::UDetectorRotation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationPoint = NULL;
    this->FullRotationSpeed = 0.00f;
    this->FollowRotationSpeed = 0.00f;
    this->PatrollingRotationSpeed = 0.00f;
    this->ControlledRotationSpeed = 0.00f;
    this->TotalHorizontalRotationAngleDegrees = 0.00f;
    this->TotalVerticalRotationAngleDegrees = 0.00f;
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


