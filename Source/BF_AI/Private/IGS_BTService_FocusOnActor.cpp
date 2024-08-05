#include "IGS_BTService_FocusOnActor.h"

UIGS_BTService_FocusOnActor::UIGS_BTService_FocusOnActor() {
    auto& gen0 = (*this).ActorKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ActorKey, 0)) = 255;
    (*this).NodeName = TEXT("Focus On Actor");
}


