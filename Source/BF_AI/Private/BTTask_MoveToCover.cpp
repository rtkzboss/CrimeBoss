#include "BTTask_MoveToCover.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToCover::UBTTask_MoveToCover() {
    auto& gen0 = (*this).CoverBlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverBlackboardKey, 0)) = 255;
    auto& gen1 = (*this).IsApproachMoveKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsApproachMoveKey, 0)) = 255;
    auto& gen2 = (*this).LookPosKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    auto& gen3 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(1);
    auto& gen4 = (*this).BlackboardKey.AllowedTypes;
    gen4.Empty();
    gen4.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Cover");
}


