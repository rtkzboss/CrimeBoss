#include "IGS_BTTask_ThrowBagSlotTransformToBB.h"

UIGS_BTTask_ThrowBagSlotTransformToBB::UIGS_BTTask_ThrowBagSlotTransformToBB() {
    auto& gen0 = (*this).ThrowSlotKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    auto& gen1 = (*this).ThrowSlotPositionKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotPositionKey, 0)) = 255;
    auto& gen2 = (*this).ThrowSlotLookAtPositionKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotLookAtPositionKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Bag Slot Transform To BB");
}


