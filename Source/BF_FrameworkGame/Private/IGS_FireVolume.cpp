#include "IGS_FireVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_FireVolume::AIGS_FireVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->HeatRegenPerSecond = 5.00f;
    this->MaxHeat = 100.00f;
    this->Heat = 0.00f;
    this->HeatToFX = NULL;
    this->Immortal = false;
    this->bAllowRegen = true;
    this->Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
    this->FireNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireNiagaraComponent"));
    this->Volume->SetupAttachment(RootComponent);
    this->FireNiagaraComponent->SetupAttachment(RootComponent);
}


