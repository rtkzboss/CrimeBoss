#include "IGS_BTTask_MoveToMelee.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToMelee::UIGS_BTTask_MoveToMelee() {
    auto& gen0 = (*this).BattleTarget.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BattleTarget, 0)) = 255;
    auto& gen1 = (*this).LookPosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    auto& gen3 = (*this).BlackboardKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Melee");
}


