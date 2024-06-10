#include "BTTask_MoveToCombatDefendPos.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToCombatDefendPos::UBTTask_MoveToCombatDefendPos() {
    auto& gen468 = (*this).LookPosKey.AllowedTypes;
    gen468.Empty();
    gen468.AddDefaulted(1);
    auto& gen469 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen469.Empty();
    gen469.AddDefaulted(1);
    auto& gen470 = (*this).BlackboardKey.AllowedTypes;
    gen470.Empty();
    gen470.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Best Combat Defend Pos");
}


