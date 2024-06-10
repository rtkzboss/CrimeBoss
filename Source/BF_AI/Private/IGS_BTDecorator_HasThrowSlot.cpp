#include "IGS_BTDecorator_HasThrowSlot.h"

UIGS_BTDecorator_HasThrowSlot::UIGS_BTDecorator_HasThrowSlot() {
    auto& gen0 = (*this).ThrowSlotKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Has Throw Slot");
}


