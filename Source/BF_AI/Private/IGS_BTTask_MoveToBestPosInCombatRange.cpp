#include "IGS_BTTask_MoveToBestPosInCombatRange.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToBestPosInCombatRange::UIGS_BTTask_MoveToBestPosInCombatRange() {
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    auto& gen458 = (*this).SuspectedTargetPos.AllowedTypes;
    gen458.Empty();
    gen458.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetPos, 0)) = 255;
    auto& gen459 = (*this).LookPosKey.AllowedTypes;
    gen459.Empty();
    gen459.AddDefaulted(2);
    auto& gen460 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen460.Empty();
    gen460.AddDefaulted(1);
    auto& gen461 = (*this).BlackboardKey.AllowedTypes;
    gen461.Empty();
    gen461.AddDefaulted(2);
    (*this).NodeName = TEXT("Move to Best Pos in Combat Range");
}


