#include "IGS_AkSwitchVolumeComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UIGS_AkSwitchVolumeComponent::UIGS_AkSwitchVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CanCharacterStepUpOn = ECB_No;
    (*this).bCanEverAffectNavigation = false;
}

void UIGS_AkSwitchVolumeComponent::NotifyActorEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void UIGS_AkSwitchVolumeComponent::NotifyActorBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}


