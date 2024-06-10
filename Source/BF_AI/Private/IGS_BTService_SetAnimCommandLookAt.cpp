#include "IGS_BTService_SetAnimCommandLookAt.h"

UIGS_BTService_SetAnimCommandLookAt::UIGS_BTService_SetAnimCommandLookAt() {
    auto& gen383 = (*this).OutLookPos.AllowedTypes;
    gen383.Empty();
    gen383.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutLookPos, 0)) = 255;
    (*this).NodeName = TEXT("Set Anim Command Look At");
}


