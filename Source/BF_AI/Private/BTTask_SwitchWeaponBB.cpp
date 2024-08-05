#include "BTTask_SwitchWeaponBB.h"

UBTTask_SwitchWeaponBB::UBTTask_SwitchWeaponBB() {
    auto& gen0 = (*this).DesiredWeaponKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DesiredWeaponKey, 0)) = 255;
    (*this).NodeName = TEXT("Switch Weapon BB");
}


