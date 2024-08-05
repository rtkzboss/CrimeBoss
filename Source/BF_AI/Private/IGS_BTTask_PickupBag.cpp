#include "IGS_BTTask_PickupBag.h"

UIGS_BTTask_PickupBag::UIGS_BTTask_PickupBag() {
    auto& gen0 = (*this).BestPickupBag.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupBag, 0)) = 255;
    (*this).NodeName = TEXT("Pickup Bag");
}


