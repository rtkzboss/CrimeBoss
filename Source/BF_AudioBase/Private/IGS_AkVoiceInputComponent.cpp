#include "IGS_AkVoiceInputComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AkVoiceInputComponent::UIGS_AkVoiceInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = false;
}


