#include "IGS_ProjectileWithMovementWithEffect.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"

AIGS_ProjectileWithMovementWithEffect::AIGS_ProjectileWithMovementWithEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ParticleSystemMovement = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle System Movement"));
    (*this).AudioComponentMovement = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component Movement"));
}

void AIGS_ProjectileWithMovementWithEffect::OnParticleMovementFinished(UParticleSystemComponent* inParticleSystemComponent) {
}


