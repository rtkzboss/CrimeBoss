#include "IGS_AIDataComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIDataComponent::UIGS_AIDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LastEnemyHitTime = -3.402823466e+38f;
    (*this).LastShootTime = -3.402823466e+38f;
    (*this).LastInjuredTime = -3.402823466e+38f;
    (*this).ForcedWeaponType = EIGS_SwitchWeaponTask_WeaponType::WT_Unknown;
    (*this).GeneralReactionsEnabled = true;
    (*this).LastMoveTime = -1.000000000e+00f;
    (*this).CanEscape = true;
}

FIGS_ShootingOverride UIGS_AIDataComponent::GetShootingOverride() const {
    return FIGS_ShootingOverride{};
}


