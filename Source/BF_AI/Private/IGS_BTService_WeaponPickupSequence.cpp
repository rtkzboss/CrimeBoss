#include "IGS_BTService_WeaponPickupSequence.h"

UIGS_BTService_WeaponPickupSequence::UIGS_BTService_WeaponPickupSequence() {
    auto& gen400 = (*this).BestPickupWeapon.AllowedTypes;
    gen400.Empty();
    gen400.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupWeapon, 0)) = 255;
    (*this).NodeName = TEXT("Weapon Pickup Sequence");
}


