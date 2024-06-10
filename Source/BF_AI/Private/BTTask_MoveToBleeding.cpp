#include "BTTask_MoveToBleeding.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToBleeding::UBTTask_MoveToBleeding() {
    (*this).RefreshTimeMin = 4.000000000e+00f;
    (*this).RefreshTimeMax = 6.000000000e+00f;
    auto& gen465 = (*this).LookPosKey.AllowedTypes;
    gen465.Empty();
    gen465.AddDefaulted(1);
    auto& gen466 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen466.Empty();
    gen466.AddDefaulted(1);
    auto& gen467 = (*this).BlackboardKey.AllowedTypes;
    gen467.Empty();
    gen467.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Bleeding");
}


