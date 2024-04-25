#include "IGS_BashResult.h"

FIGS_BashResult::FIGS_BashResult() {
    this->BashingCharacter = NULL;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->ImpactType = NULL;
    this->bHit = false;
    this->bIsAI = false;
    this->bIsUnarmedMelee = false;
}

