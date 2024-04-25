#include "BTTask_SwitchWeapon.h"

UBTTask_SwitchWeapon::UBTTask_SwitchWeapon() {
    this->NodeName = TEXT("Switch Weapon");
    this->WeaponTypeToSwitchTo = EIGS_SwitchWeaponTask_WeaponType::WT_Primary;
}


