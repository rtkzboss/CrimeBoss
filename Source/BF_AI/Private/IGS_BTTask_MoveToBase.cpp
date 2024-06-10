#include "IGS_BTTask_MoveToBase.h"

UIGS_BTTask_MoveToBase::UIGS_BTTask_MoveToBase() {
    auto& gen0 = (*this).LookPosKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    auto& gen1 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).AcceptableRadiusKey, 0)) = 255;
    (*this).m_MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
    auto& gen2 = (*this).BlackboardKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(2);
}


