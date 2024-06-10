#include "IGS_BTTask_PickupBag.h"

UIGS_BTTask_PickupBag::UIGS_BTTask_PickupBag() {
    auto& gen507 = (*this).BestPickupBag.AllowedTypes;
    gen507.Empty();
    gen507.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupBag, 0)) = 255;
    (*this).NodeName = TEXT("Pickup Bag");
}


