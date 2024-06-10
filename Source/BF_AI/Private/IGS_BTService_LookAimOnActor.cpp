#include "IGS_BTService_LookAimOnActor.h"

UIGS_BTService_LookAimOnActor::UIGS_BTService_LookAimOnActor() {
    auto& gen370 = (*this).ActorKey.AllowedTypes;
    gen370.Empty();
    gen370.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ActorKey, 0)) = 255;
    (*this).NodeName = TEXT("Look Aim On Actor");
}


