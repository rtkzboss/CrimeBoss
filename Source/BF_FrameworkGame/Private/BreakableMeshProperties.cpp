#include "BreakableMeshProperties.h"

FBreakableMeshProperties::FBreakableMeshProperties() {
    this->mR_IsBroken = false;
    this->mR_IsMaterialSwitched = false;
    this->bCanTakeBulletDamage = false;
    this->bCanTakeMeleeDamage = false;
    this->bCanTakeExplosiveDamage = false;
    this->bCanTakeBreachExplosiveDamage = false;
    this->HealthToSwitchMaterial = 0;
    this->bSimulatePhysicsOnBreak = false;
    this->StaticMeshBroken = NULL;
    this->ParticleBreak = NULL;
    this->AkEventOnBreak = NULL;
    this->AkEventOnImpact = NULL;
}

