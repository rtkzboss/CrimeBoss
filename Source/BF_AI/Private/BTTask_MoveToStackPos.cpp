#include "BTTask_MoveToStackPos.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToStackPos::UBTTask_MoveToStackPos() {
    auto& gen496 = (*this).LookPosKey.AllowedTypes;
    gen496.Empty();
    gen496.AddDefaulted(1);
    auto& gen497 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen497.Empty();
    gen497.AddDefaulted(1);
    auto& gen498 = (*this).BlackboardKey.AllowedTypes;
    gen498.Empty();
    gen498.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Stack Pos");
}


