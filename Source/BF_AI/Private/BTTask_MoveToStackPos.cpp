#include "BTTask_MoveToStackPos.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToStackPos::UBTTask_MoveToStackPos() {
    auto& gen0 = (*this).LookPosKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    auto& gen1 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*this).BlackboardKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Stack Pos");
}


