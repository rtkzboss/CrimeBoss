#include "IGS_RainEmittingComponent.h"

UIGS_RainEmittingComponent::UIGS_RainEmittingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WorldRainEffectParticleSystem = NULL;
    this->m_ParticleComponent = NULL;
}


