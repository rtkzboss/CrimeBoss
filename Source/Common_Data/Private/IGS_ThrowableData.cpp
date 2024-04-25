#include "IGS_ThrowableData.h"

FIGS_ThrowableData::FIGS_ThrowableData() {
    this->HitImpactType = NULL;
    this->HitImpactCooldown = 0.00f;
    this->HitImpactCustomMass = 0.00f;
    this->HitImpactUseDefaultMaterial = false;
    this->Bounciness = 0.00f;
    this->Friction = 0.00f;
    this->MinFrictionFraction = 0.00f;
    this->HighThrowSpeed = 0.00f;
    this->LowThrowSpeed = 0.00f;
    this->HighThrowHeight = 0.00f;
    this->LowThrowHeight = 0.00f;
    this->SpawnDistance = 0.00f;
}

