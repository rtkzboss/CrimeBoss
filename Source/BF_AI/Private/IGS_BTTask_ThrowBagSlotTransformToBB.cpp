#include "IGS_BTTask_ThrowBagSlotTransformToBB.h"

UIGS_BTTask_ThrowBagSlotTransformToBB::UIGS_BTTask_ThrowBagSlotTransformToBB() {
    auto& gen548 = (*this).ThrowSlotKey.AllowedTypes;
    gen548.Empty();
    gen548.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    auto& gen549 = (*this).ThrowSlotPositionKey.AllowedTypes;
    gen549.Empty();
    gen549.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotPositionKey, 0)) = 255;
    auto& gen550 = (*this).ThrowSlotLookAtPositionKey.AllowedTypes;
    gen550.Empty();
    gen550.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotLookAtPositionKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Bag Slot Transform To BB");
}


