#include "IGS_BTTask_FireBase.h"

UIGS_BTTask_FireBase::UIGS_BTTask_FireBase() {
    this->NodeName = TEXT("Fire");
    this->Target = NULL;
    this->AIGameCharacter = NULL;
    this->DesiredWeaponShootAmmo = 0;
    this->CurrWeaponShootAmmo = 0;
    this->Weapon = NULL;
}


