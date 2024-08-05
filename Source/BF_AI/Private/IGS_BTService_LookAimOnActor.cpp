#include "IGS_BTService_LookAimOnActor.h"

UIGS_BTService_LookAimOnActor::UIGS_BTService_LookAimOnActor() {
    auto& gen0 = (*this).ActorKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ActorKey, 0)) = 255;
    (*this).NodeName = TEXT("Look Aim On Actor");
}


