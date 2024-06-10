#include "IGS_BTService_ThrowSequence.h"

UIGS_BTService_ThrowSequence::UIGS_BTService_ThrowSequence() {
    auto& gen394 = (*this).ThrowRequestKey.AllowedTypes;
    gen394.Empty();
    gen394.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    auto& gen395 = (*this).ThrowSlotKey.AllowedTypes;
    gen395.Empty();
    gen395.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Sequence");
}


