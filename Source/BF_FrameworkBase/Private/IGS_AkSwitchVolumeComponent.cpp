#include "IGS_AkSwitchVolumeComponent.h"

UIGS_AkSwitchVolumeComponent::UIGS_AkSwitchVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->FootstepAkSwitch = NULL;
    this->FootstepNoneAkSwitch = NULL;
}

void UIGS_AkSwitchVolumeComponent::NotifyActorEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void UIGS_AkSwitchVolumeComponent::NotifyActorBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}


