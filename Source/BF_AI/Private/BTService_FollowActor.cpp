#include "BTService_FollowActor.h"

UBTService_FollowActor::UBTService_FollowActor() {
    auto& gen0 = (*this).OutFollowActorKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutFollowActorKey, 0)) = 255;
    auto& gen1 = (*this).OutFollowDistanceKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutFollowDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Follow Actor");
}


