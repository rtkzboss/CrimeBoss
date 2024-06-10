#include "IGS_BTService_EvaluatePickupWeapons.h"

UIGS_BTService_EvaluatePickupWeapons::UIGS_BTService_EvaluatePickupWeapons() {
    auto& gen343 = (*this).BestWeaponPickup.AllowedTypes;
    gen343.Empty();
    gen343.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestWeaponPickup, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Pickup Weapons");
}


