#include "IGS_BTDecorator_HasThrowTicket.h"

UIGS_BTDecorator_HasThrowTicket::UIGS_BTDecorator_HasThrowTicket() {
    auto& gen287 = (*this).ThrowRequestKey.AllowedTypes;
    gen287.Empty();
    gen287.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    auto& gen288 = (*this).ThrowSlotKey.AllowedTypes;
    gen288.Empty();
    gen288.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Has Throw Ticket");
}


