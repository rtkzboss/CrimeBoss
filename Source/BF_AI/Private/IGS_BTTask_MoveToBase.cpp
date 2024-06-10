#include "IGS_BTTask_MoveToBase.h"

UIGS_BTTask_MoveToBase::UIGS_BTTask_MoveToBase() {
    auto& gen424 = (*this).LookPosKey.AllowedTypes;
    gen424.Empty();
    gen424.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    auto& gen425 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen425.Empty();
    gen425.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).AcceptableRadiusKey, 0)) = 255;
    (*this).m_MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
    auto& gen426 = (*this).BlackboardKey.AllowedTypes;
    gen426.Empty();
    gen426.AddDefaulted(2);
}


