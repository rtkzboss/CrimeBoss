#include "IGS_ContinuousTrackComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/PoseableMeshComponent.h"

UIGS_ContinuousTrackComponent::UIGS_ContinuousTrackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInputSplinePointsToConstructionScript = true;
    const FProperty* p_bClosedLoop = GetClass()->FindPropertyByName("bClosedLoop");
    (*p_bClosedLoop->ContainerPtrToValuePtr<bool>(this)) = true;
    this->SK_BaseMesh = NULL;
    this->SM_TrackPieceMesh = NULL;
    this->SK_Base = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("SK_Base"));
    this->SM_TrackPieces = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("SM_TrackPieces"));
    this->TrackPieceLength = 6.00f;
    this->SprocketToTrackMovement = -20.00f;
    this->bOscillateCurve = true;
    this->OscillateCurveCV = 6;
    this->OscillateEvery = 5;
    this->OscillationScale = 2.00f;
}

void UIGS_ContinuousTrackComponent::SetDriveSprocketAngle(float Angle) {
}

float UIGS_ContinuousTrackComponent::GetDriveSprocketAngleAtDistance(float SprocketRadius, float Distance) {
    return 0.0f;
}

void UIGS_ContinuousTrackComponent::CreateSplineCurve() {
}

void UIGS_ContinuousTrackComponent::CreateContinuousTrack() {
}


