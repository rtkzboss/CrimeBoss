#include "AkAmbientSound.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AkComponent.h"

AAkAmbientSound::AAkAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent0"));
    (*this).StopWhenOwnerIsDestroyed = true;
    (*this).RootComponent = (USceneComponent*)AkComponent;
}

void AAkAmbientSound::StopAmbientSound() {
}

void AAkAmbientSound::StartAmbientSound() {
}


