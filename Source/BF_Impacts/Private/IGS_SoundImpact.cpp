#include "IGS_SoundImpact.h"
#include "AkComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_SoundImpact::AIGS_SoundImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    (*this).RootComponent = (USceneComponent*)AkComponent;
}


