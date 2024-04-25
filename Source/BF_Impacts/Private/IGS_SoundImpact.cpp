#include "IGS_SoundImpact.h"
#include "AkComponent.h"

AIGS_SoundImpact::AIGS_SoundImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    this->AkComponent = (UAkComponent*)RootComponent;
    this->AkAudioEvent = NULL;
}


