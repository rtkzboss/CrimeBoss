#include "IGS_BTService_BagPickupSequence.h"

UIGS_BTService_BagPickupSequence::UIGS_BTService_BagPickupSequence() {
    auto& gen0 = (*this).BestPickupBag.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupBag, 0)) = 255;
    (*this).NodeName = TEXT("Bag Pickup Sequence");
}


