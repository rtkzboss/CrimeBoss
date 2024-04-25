#include "IGS_DestructableVehicleSettings.h"

UIGS_DestructableVehicleSettings::UIGS_DestructableVehicleSettings() {
    this->ExplosionDamageType = NULL;
    this->FireDamageType = NULL;
    this->ExplosionBaseDamage = 500.00f;
    this->ExplosionEnemyRadius = 1200.00f;
    this->ExplosionRadius = 800.00f;
    this->FireRadius = 380.00f;
    this->ExplosionDelay = 3.00f;
    this->ExplosionFireDuration = 6.00f;
    this->ExplodingDamageToInstaExplode = 900.00f;
    this->OvertimeSelfDamage = 30.00f;
    this->FireDamage = 60.00f;
    this->BaseDoorHealth = 1800.00f;
    this->MaxHealth = 4000.00f;
    this->AiDamageMultiplier = 1.00f;
    this->GraySmokeParticle = NULL;
    this->BlackSmokeParticle = NULL;
    this->ExplosionParticle = NULL;
    this->ExplosionDecalMaterial = NULL;
    this->PreExplosionAudio = NULL;
    this->PostExplosionAudio = NULL;
    this->ExplosionBounceCurve = NULL;
}


