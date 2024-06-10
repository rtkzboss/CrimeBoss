#include "IGS_BTService_CarryablePickupSequence.h"

UIGS_BTService_CarryablePickupSequence::UIGS_BTService_CarryablePickupSequence() {
    auto& gen0 = (*this).BestCarryablePickup.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCarryablePickup, 0)) = 255;
    (*this).NodeName = TEXT("Weapon Pickup Sequence");
}


