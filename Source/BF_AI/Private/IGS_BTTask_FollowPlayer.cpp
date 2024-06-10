#include "IGS_BTTask_FollowPlayer.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_FollowPlayer::UIGS_BTTask_FollowPlayer() {
    auto& gen430 = (*this).SuspectedTargetPos.AllowedTypes;
    gen430.Empty();
    gen430.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetPos, 0)) = 255;
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    auto& gen431 = (*this).LookPosKey.AllowedTypes;
    gen431.Empty();
    gen431.AddDefaulted(1);
    auto& gen432 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen432.Empty();
    gen432.AddDefaulted(1);
    auto& gen433 = (*this).BlackboardKey.AllowedTypes;
    gen433.Empty();
    gen433.AddDefaulted(2);
    (*this).NodeName = TEXT("Follow player");
}


