#include "BTTask_MoveToCover.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToCover::UBTTask_MoveToCover() {
    auto& gen474 = (*this).CoverBlackboardKey.AllowedTypes;
    gen474.Empty();
    gen474.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverBlackboardKey, 0)) = 255;
    auto& gen475 = (*this).IsApproachMoveKey.AllowedTypes;
    gen475.Empty();
    gen475.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsApproachMoveKey, 0)) = 255;
    auto& gen476 = (*this).LookPosKey.AllowedTypes;
    gen476.Empty();
    gen476.AddDefaulted(1);
    auto& gen477 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen477.Empty();
    gen477.AddDefaulted(1);
    auto& gen478 = (*this).BlackboardKey.AllowedTypes;
    gen478.Empty();
    gen478.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Cover");
}


