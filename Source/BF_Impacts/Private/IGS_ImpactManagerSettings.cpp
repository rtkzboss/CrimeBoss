#include "IGS_ImpactManagerSettings.h"

UIGS_ImpactManagerSettings::UIGS_ImpactManagerSettings() {
    this->BloodSplatterDistance = 500.00f;
    this->bRandomRotation = false;
    this->EnableImpactOptimizations = true;
    this->DefaultImpactPlayerMaxDistance = 5000.00f;
    this->RefreshImpactCountPoolRate = 0.10f;
    this->EnableSoundImpactOptimizations = true;
    this->DefaultSoundImpactPlayerMaxDistance = 5000.00f;
    this->FootstepSoundImpactPlayerMaxDistance = 2000.00f;
    this->SoundImpactCountCap = 10;
    this->EnableParticleImpactOptimizations = true;
    this->DefaultParticleImpactPlayerMaxDistance = 5000.00f;
    this->ParticleImpactCountCap = 10;
    this->EnableDecalImpactOptimizations = true;
    this->DefaultDecalImpactPlayerMaxDistance = 5000.00f;
    this->DecalImpactCountCap = 10;
}


