#include "IGS_BTTask_MoveToMelee.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToMelee::UIGS_BTTask_MoveToMelee() {
    auto& gen485 = (*this).BattleTarget.AllowedTypes;
    gen485.Empty();
    gen485.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BattleTarget, 0)) = 255;
    auto& gen486 = (*this).LookPosKey.AllowedTypes;
    gen486.Empty();
    gen486.AddDefaulted(1);
    auto& gen487 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen487.Empty();
    gen487.AddDefaulted(1);
    auto& gen488 = (*this).BlackboardKey.AllowedTypes;
    gen488.Empty();
    gen488.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Melee");
}


