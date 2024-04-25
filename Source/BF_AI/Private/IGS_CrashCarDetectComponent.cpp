#include "IGS_CrashCarDetectComponent.h"

UIGS_CrashCarDetectComponent::UIGS_CrashCarDetectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrashDetectType = EIGS_CrashDetectType::CDT_None;
    this->CarOwner = NULL;
    this->CrashDetectCollision = NULL;
}

void UIGS_CrashCarDetectComponent::OnCrashDetectComponentBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

void UIGS_CrashCarDetectComponent::CallOnStartCrashDelegate(FHitResult inHitResult) {
}

void UIGS_CrashCarDetectComponent::CallOnEndCrashDelegate() {
}


