#include "IGS_BTTask_HideBehindPlayer.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_HideBehindPlayer::UIGS_BTTask_HideBehindPlayer() {
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    auto& gen438 = (*this).LookPosKey.AllowedTypes;
    gen438.Empty();
    gen438.AddDefaulted(1);
    auto& gen439 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen439.Empty();
    gen439.AddDefaulted(1);
    auto& gen440 = (*this).BlackboardKey.AllowedTypes;
    gen440.Empty();
    gen440.AddDefaulted(2);
    (*this).NodeName = TEXT("Hide Behind Player");
}


