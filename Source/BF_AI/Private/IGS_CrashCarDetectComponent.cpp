#include "IGS_CrashCarDetectComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_CrashCarDetectComponent::UIGS_CrashCarDetectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_CrashCarDetectComponent::OnCrashDetectComponentBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

void UIGS_CrashCarDetectComponent::CallOnStartCrashDelegate(FHitResult inHitResult) {
}

void UIGS_CrashCarDetectComponent::CallOnEndCrashDelegate() {
}


