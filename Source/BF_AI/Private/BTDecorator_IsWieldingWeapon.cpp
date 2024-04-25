#include "BTDecorator_IsWieldingWeapon.h"

UBTDecorator_IsWieldingWeapon::UBTDecorator_IsWieldingWeapon() {
    this->NodeName = TEXT("Is Wielding Weapon");
    this->WeaponType = EIGS_SwitchWeaponTask_WeaponType::WT_Primary;
}


