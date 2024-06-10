#include "IGS_BTTask_MoveToBestPosInCombatRange.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToBestPosInCombatRange::UIGS_BTTask_MoveToBestPosInCombatRange() {
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    auto& gen0 = (*this).SuspectedTargetPos.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetPos, 0)) = 255;
    auto& gen1 = (*this).LookPosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(2);
    auto& gen2 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    auto& gen3 = (*this).BlackboardKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(2);
    (*this).NodeName = TEXT("Move to Best Pos in Combat Range");
}


