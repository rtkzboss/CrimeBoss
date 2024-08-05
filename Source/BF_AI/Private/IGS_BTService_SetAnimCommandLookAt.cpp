#include "IGS_BTService_SetAnimCommandLookAt.h"

UIGS_BTService_SetAnimCommandLookAt::UIGS_BTService_SetAnimCommandLookAt() {
    auto& gen0 = (*this).OutLookPos.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutLookPos, 0)) = 255;
    (*this).NodeName = TEXT("Set Anim Command Look At");
}


