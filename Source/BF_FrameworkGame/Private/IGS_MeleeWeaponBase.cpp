#include "IGS_MeleeWeaponBase.h"
#include "IGS_SkinHandlerBase.h"
#include "IGS_BasherComponent.h"

AIGS_MeleeWeaponBase::AIGS_MeleeWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimaryShooter = EIGS_WeaponAttackType::AT_UNKNOWN;
    this->Basher = CreateDefaultSubobject<UIGS_BasherComponent>(TEXT("Basher"));
    this->SkinHandler = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
}

bool AIGS_MeleeWeaponBase::IsAttacking() {
    return false;
}

bool AIGS_MeleeWeaponBase::CanAttack() const {
    return false;
}


