#include "BTTask_MoveToWithRepath.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToWithRepath::UBTTask_MoveToWithRepath() {
    (*this).RefreshTimeMin = 1.100000024e+00f;
    (*this).RefreshTimeMax = 1.299999952e+00f;
    auto& gen0 = (*this).LookPosKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    auto& gen1 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*this).BlackboardKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To With Repath");
}


