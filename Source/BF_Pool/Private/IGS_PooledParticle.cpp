#include "IGS_PooledParticle.h"
#include "Particles/ParticleSystemComponent.h"

AIGS_PooledParticle::AIGS_PooledParticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->ParticleComponent = (UParticleSystemComponent*)RootComponent;
}

void AIGS_PooledParticle::OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent) {
}


