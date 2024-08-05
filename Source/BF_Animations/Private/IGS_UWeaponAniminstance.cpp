#include "IGS_UWeaponAniminstance.h"

UIGS_UWeaponAniminstance::UIGS_UWeaponAniminstance() {
    (*this).ReloadPlayRate = 1.000000000e+00f;
}









bool UIGS_UWeaponAniminstance::Is_TPP_Animinstance() {
    return false;
}


EIGS_WeaponAttackType UIGS_UWeaponAniminstance::GetAttackType() const {
    return EIGS_WeaponAttackType::AT_SemiAuto;
}

void UIGS_UWeaponAniminstance::AnimNotify_OnReloadFromMontage_Implementation() {
}


