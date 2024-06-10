#include "IGS_BTTask_PickupActor.h"

UIGS_BTTask_PickupActor::UIGS_BTTask_PickupActor() {
    (*this).PickupDelay = 1.000000000e+00f;
    auto& gen506 = (*this).BestPickupActor.AllowedTypes;
    gen506.Empty();
    gen506.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupActor, 0)) = 255;
    (*this).NodeName = TEXT("Pickup Actor");
}


