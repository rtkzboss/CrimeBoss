#include "IGS_ContinuousTrackComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/PoseableMeshComponent.h"

UIGS_ContinuousTrackComponent::UIGS_ContinuousTrackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SK_Base = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("SK_Base"));
    (*this).SM_TrackPieces = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("SM_TrackPieces"));
    (*this).TrackPieceLength = 6.000000000e+00f;
    (*this).SprocketToTrackMovement = -2.000000000e+01f;
    (*this).bOscillateCurve = true;
    (*this).OscillateCurveCV = 6;
    (*this).OscillateEvery = 5;
    (*this).OscillationScale = 2.000000000e+00f;
    auto& gen0 = (*this).SplineCurves.Position.Points;
    gen0.Empty();
    gen0.AddDefaulted(18);
    (*this).SplineCurves.Position.bIsLooped = true;
    (*this).SplineCurves.Position.LoopKeyOffset = 1.000000000e+00f;
    auto& gen1 = (*this).SplineCurves.Rotation.Points;
    gen1.Empty();
    gen1.AddDefaulted(18);
    (*this).SplineCurves.Rotation.bIsLooped = true;
    (*this).SplineCurves.Rotation.LoopKeyOffset = 1.000000000e+00f;
    auto& gen2 = (*this).SplineCurves.Scale.Points;
    gen2.Empty();
    gen2.AddDefaulted(18);
    (*this).SplineCurves.Scale.bIsLooped = true;
    (*this).SplineCurves.Scale.LoopKeyOffset = 1.000000000e+00f;
    auto& gen3 = (*this).SplineCurves.ReparamTable.Points;
    gen3.Empty();
    gen3.AddDefaulted(181);
    (*this).SplineCurves.Version = 3;
    (*this).bInputSplinePointsToConstructionScript = true;
    (*USplineComponent::StaticClass()->FindPropertyByName("bClosedLoop")->ContainerPtrToValuePtr<bool>(&(*this), 0)) = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
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


