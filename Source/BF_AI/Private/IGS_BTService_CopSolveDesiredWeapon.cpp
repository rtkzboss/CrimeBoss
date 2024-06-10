#include "IGS_BTService_CopSolveDesiredWeapon.h"

UIGS_BTService_CopSolveDesiredWeapon::UIGS_BTService_CopSolveDesiredWeapon() {
    auto& gen0 = (*this).MeleeTypeKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MeleeTypeKey, 0)) = 255;
    auto& gen1 = (*this).DesiredWeaponKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DesiredWeaponKey, 0)) = 255;
    (*this).NodeName = TEXT("Cop Solve Desired Weapon");
}


