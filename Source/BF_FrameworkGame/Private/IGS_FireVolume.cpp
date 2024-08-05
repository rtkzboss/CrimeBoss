#include "IGS_FireVolume.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_FireVolume::AIGS_FireVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HeatRegenPerSecond = 5.000000000e+00f;
    (*this).MaxHeat = 1.000000000e+02f;
    (*this).bAllowRegen = true;
    (*this).Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
    (*this).FireNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireNiagaraComponent"));
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).Volume->SetupAttachment((*this).RootComponent);
    (*this).FireNiagaraComponent->SetupAttachment((*this).RootComponent);
}


