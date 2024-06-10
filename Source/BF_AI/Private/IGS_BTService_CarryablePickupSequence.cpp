#include "IGS_BTService_CarryablePickupSequence.h"

UIGS_BTService_CarryablePickupSequence::UIGS_BTService_CarryablePickupSequence() {
    auto& gen326 = (*this).BestCarryablePickup.AllowedTypes;
    gen326.Empty();
    gen326.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCarryablePickup, 0)) = 255;
    (*this).NodeName = TEXT("Weapon Pickup Sequence");
}


