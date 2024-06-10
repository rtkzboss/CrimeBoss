#include "BTService_FollowActor.h"

UBTService_FollowActor::UBTService_FollowActor() {
    auto& gen351 = (*this).OutFollowActorKey.AllowedTypes;
    gen351.Empty();
    gen351.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutFollowActorKey, 0)) = 255;
    auto& gen352 = (*this).OutFollowDistanceKey.AllowedTypes;
    gen352.Empty();
    gen352.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutFollowDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Follow Actor");
}


