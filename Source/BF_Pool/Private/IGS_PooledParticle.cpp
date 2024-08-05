#include "IGS_PooledParticle.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"

AIGS_PooledParticle::AIGS_PooledParticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    (*this).RootComponent = (USceneComponent*)ParticleComponent;
}

void AIGS_PooledParticle::OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent) {
}


