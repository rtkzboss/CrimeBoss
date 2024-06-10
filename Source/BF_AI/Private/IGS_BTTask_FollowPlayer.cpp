#include "IGS_BTTask_FollowPlayer.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_FollowPlayer::UIGS_BTTask_FollowPlayer() {
    auto& gen0 = (*this).SuspectedTargetPos.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetPos, 0)) = 255;
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    auto& gen1 = (*this).LookPosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    auto& gen3 = (*this).BlackboardKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(2);
    (*this).NodeName = TEXT("Follow player");
}


