#include "IGS_SimpleHitScanShooter.h"

UIGS_SimpleHitScanShooter::UIGS_SimpleHitScanShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceChannel = TraceTypeQuery3;
    this->DrawDebugTrace = EDrawDebugTrace::None;
    this->DamageType = NULL;
    this->ShotImpactType = NULL;
    this->ImpactAILoudness = 1.00f;
}

void UIGS_SimpleHitScanShooter::Multicast_HandleMiss_Implementation(const FTransform& inShotTransform, const FHitResult& inFinalHit) {
}

void UIGS_SimpleHitScanShooter::Multicast_HandleHitResults_Implementation(const FTransform& inShotTransform, const TArray<FHitResult>& inPenetrations, const FHitResult& inFinalHit) {
}


