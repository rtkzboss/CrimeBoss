#include "BTTask_SwitchWeaponBB.h"

UBTTask_SwitchWeaponBB::UBTTask_SwitchWeaponBB() {
    auto& gen544 = (*this).DesiredWeaponKey.AllowedTypes;
    gen544.Empty();
    gen544.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DesiredWeaponKey, 0)) = 255;
    (*this).NodeName = TEXT("Switch Weapon BB");
}


