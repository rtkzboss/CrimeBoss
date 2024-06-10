#include "IGS_BTTask_ThrowBagSlotToBB.h"

UIGS_BTTask_ThrowBagSlotToBB::UIGS_BTTask_ThrowBagSlotToBB() {
    auto& gen546 = (*this).ThrowRequestKey.AllowedTypes;
    gen546.Empty();
    gen546.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    auto& gen547 = (*this).ThrowSlotKey.AllowedTypes;
    gen547.Empty();
    gen547.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Bag Slot To BB");
}


