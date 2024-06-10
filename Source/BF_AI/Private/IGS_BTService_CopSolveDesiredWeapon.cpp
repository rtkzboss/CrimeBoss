#include "IGS_BTService_CopSolveDesiredWeapon.h"

UIGS_BTService_CopSolveDesiredWeapon::UIGS_BTService_CopSolveDesiredWeapon() {
    auto& gen327 = (*this).MeleeTypeKey.AllowedTypes;
    gen327.Empty();
    gen327.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MeleeTypeKey, 0)) = 255;
    auto& gen328 = (*this).DesiredWeaponKey.AllowedTypes;
    gen328.Empty();
    gen328.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DesiredWeaponKey, 0)) = 255;
    (*this).NodeName = TEXT("Cop Solve Desired Weapon");
}


