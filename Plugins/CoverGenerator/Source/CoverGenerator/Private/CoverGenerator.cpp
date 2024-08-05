#include "CoverGenerator.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

ACoverGenerator::ACoverGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SegmentLength = 5.000000000e+00f;
    (*this).CharWidth = 4.000000000e+01f;
    (*this).CharHeight = 1.800000000e+02f;
    (*this).StepDistTrace = 2.000000000e+01f;
    (*this).TraceLength = 1.500000000e+02f;
    (*this).MinSpaceBetweenValidPoints = 5.000000000e+01f;
    (*this).SphereSize = 5.000000000e+00f;
    (*this).WidthMaxAgent = 8.000000000e+01f;
    (*this).HeightMinCrouching = 6.000000000e+01f;
    (*this).HeightMaxCrouching = 8.000000000e+01f;
    (*this).HeightMaxStanding = 1.800000000e+02f;
    (*this).OffsetWhenLeaningSides = 6.500000000e+01f;
    (*this).OffsetWhenLeaningUp = 1.500000000e+01f;
    (*this).OffsetWhenStandingUp = 3.500000000e+01f;
    (*this).OffsetFrontAim = 2.000000000e+02f;
    (*this).DebugDistance = 2.500000000e+04f;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
}

void ACoverGenerator::ReleaseCover(UCoverPoint* CoverPoint) {
}

void ACoverGenerator::OnNavigationGenerationFinished(ANavigationData* NavData) {
}

bool ACoverGenerator::OccupyCover(UCoverPoint* CoverPoint, AController* Controller) {
    return false;
}

bool ACoverGenerator::IsFreeCoverPoint(const UCoverPoint* CoverPoint) {
    return false;
}

TArray<UCoverPoint*> ACoverGenerator::GetCoverWithinBox(const FBox& BoxIn) {
    return TArray<UCoverPoint*>();
}

ACoverGenerator* ACoverGenerator::GetCoverGenerator(const UObject* WorldContextObject) {
    return NULL;
}

bool ACoverGenerator::CoverExistWithinBox(const FBox& BoxIn) {
    return false;
}


