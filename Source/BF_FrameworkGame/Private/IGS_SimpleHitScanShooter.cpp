#include "IGS_SimpleHitScanShooter.h"
#include "ComponentInstanceDataCache.h"

UIGS_SimpleHitScanShooter::UIGS_SimpleHitScanShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TraceChannel = TraceTypeQuery3;
    (*this).ImpactAILoudness = 1.000000000e+00f;
}

void UIGS_SimpleHitScanShooter::Multicast_HandleMiss_Implementation(const FTransform& inShotTransform, const FHitResult& inFinalHit) {
}

void UIGS_SimpleHitScanShooter::Multicast_HandleHitResults_Implementation(const FTransform& inShotTransform, const TArray<FHitResult>& inPenetrations, const FHitResult& inFinalHit) {
}


