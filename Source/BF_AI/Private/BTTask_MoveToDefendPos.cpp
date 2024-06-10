#include "BTTask_MoveToDefendPos.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToDefendPos::UBTTask_MoveToDefendPos() {
    auto& gen479 = (*this).LookPosKey.AllowedTypes;
    gen479.Empty();
    gen479.AddDefaulted(1);
    auto& gen480 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen480.Empty();
    gen480.AddDefaulted(1);
    auto& gen481 = (*this).BlackboardKey.AllowedTypes;
    gen481.Empty();
    gen481.AddDefaulted(2);
    (*this).NodeName = TEXT("Move Back To Defend Pos");
}


