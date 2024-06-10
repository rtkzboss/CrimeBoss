#include "IGS_ParticleImpact.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_ParticleImpact::AIGS_ParticleImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    (*this).NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    (*this).RootComponent = (USceneComponent*)SceneComponent;
    (*this).ParticleComponent->SetupAttachment((*this).SceneComponent);
    (*this).NiagaraComponent->SetupAttachment((*this).SceneComponent);
}

void AIGS_ParticleImpact::OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent) {
}

void AIGS_ParticleImpact::OnNiagaraSystemFinished(UNiagaraComponent* inNiagaraComponent) {
}


