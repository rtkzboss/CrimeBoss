#include "CoverGenerator.h"
#include "Components/SceneComponent.h"

ACoverGenerator::ACoverGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->ForceRefresh = false;
    this->bUseCoverZones = false;
    this->bRegenerateAtBeginPlay = false;
    this->bRegenerateAtNavigationRebuilt = false;
    this->SegmentLength = 5.00f;
    this->CharWidth = 40.00f;
    this->CharHeight = 180.00f;
    this->StepDistTrace = 20.00f;
    this->TraceLength = 150.00f;
    this->MinSpaceBetweenValidPoints = 50.00f;
    this->SphereSize = 5.00f;
    this->WidthMaxAgent = 80.00f;
    this->HeightMinCrouching = 60.00f;
    this->HeightMaxCrouching = 80.00f;
    this->HeightMaxStanding = 180.00f;
    this->OffsetWhenLeaningSides = 65.00f;
    this->OffsetWhenLeaningUp = 15.00f;
    this->OffsetWhenStandingUp = 35.00f;
    this->OffsetFrontAim = 200.00f;
    this->bDraw1AllSegmentPointsTested = false;
    this->bDraw2SegmentPointsWithinBounds = false;
    this->bDraw3SimpleCoverGeometryTest = false;
    this->bDraw4SecondPassTracesSides = false;
    this->bDraw4SecondPassTracesSidesFrontAndBottom = false;
    this->DebugDrawAllPoints = false;
    this->DebugDrawAllBusyPoints = false;
    this->DebugDisplayLog = false;
    this->DebugDistance = 25000.00f;
    this->bDrawOctreeBounds = false;
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


