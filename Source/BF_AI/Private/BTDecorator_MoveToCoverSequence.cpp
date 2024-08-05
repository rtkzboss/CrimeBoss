#include "BTDecorator_MoveToCoverSequence.h"

UBTDecorator_MoveToCoverSequence::UBTDecorator_MoveToCoverSequence() {
    auto& gen0 = (*this).ReactToThreathKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    auto& gen1 = (*this).UpdateCoverKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
    auto& gen2 = (*this).BestCoverKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    auto& gen3 = (*this).CoverKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverKey, 0)) = 255;
    auto& gen4 = (*this).MoveToPositionKey.AllowedTypes;
    gen4.Empty();
    gen4.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    auto& gen5 = (*this).IsDodgingKey.AllowedTypes;
    gen5.Empty();
    gen5.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    (*this).m_RefreshTimeStartMin = 1.000000000e+00f;
    (*this).m_RefreshTimeStartMax = 1.500000000e+00f;
    (*this).m_RefreshTimeMin = 3.000000119e-01f;
    (*this).m_RefreshTimeMax = 5.000000000e-01f;
    (*this).m_CancelOnThreathReaction = true;
    (*this).m_ReactionDefaultTime = 5.000000000e-01f;
    (*this).NodeName = TEXT("Move To Cover Sequence");
}


