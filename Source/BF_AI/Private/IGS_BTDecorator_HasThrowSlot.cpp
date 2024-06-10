#include "IGS_BTDecorator_HasThrowSlot.h"

UIGS_BTDecorator_HasThrowSlot::UIGS_BTDecorator_HasThrowSlot() {
    auto& gen286 = (*this).ThrowSlotKey.AllowedTypes;
    gen286.Empty();
    gen286.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Has Throw Slot");
}


