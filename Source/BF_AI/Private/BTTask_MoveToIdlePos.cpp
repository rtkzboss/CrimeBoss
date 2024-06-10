#include "BTTask_MoveToIdlePos.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToIdlePos::UBTTask_MoveToIdlePos() {
    auto& gen482 = (*this).LookPosKey.AllowedTypes;
    gen482.Empty();
    gen482.AddDefaulted(1);
    auto& gen483 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen483.Empty();
    gen483.AddDefaulted(1);
    auto& gen484 = (*this).BlackboardKey.AllowedTypes;
    gen484.Empty();
    gen484.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Idle Pos");
}


