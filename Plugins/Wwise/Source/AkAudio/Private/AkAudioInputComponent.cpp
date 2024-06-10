#include "AkAudioInputComponent.h"
#include "ComponentInstanceDataCache.h"

UAkAudioInputComponent::UAkAudioInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UAkAudioInputComponent::PostAssociatedAudioInputEvent() {
    return 0;
}


