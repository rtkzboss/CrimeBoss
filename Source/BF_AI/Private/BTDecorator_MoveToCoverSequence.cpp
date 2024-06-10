#include "BTDecorator_MoveToCoverSequence.h"

UBTDecorator_MoveToCoverSequence::UBTDecorator_MoveToCoverSequence() {
    auto& gen298 = (*this).ReactToThreathKey.AllowedTypes;
    gen298.Empty();
    gen298.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    auto& gen299 = (*this).UpdateCoverKey.AllowedTypes;
    gen299.Empty();
    gen299.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
    auto& gen300 = (*this).BestCoverKey.AllowedTypes;
    gen300.Empty();
    gen300.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    auto& gen301 = (*this).CoverKey.AllowedTypes;
    gen301.Empty();
    gen301.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverKey, 0)) = 255;
    auto& gen302 = (*this).MoveToPositionKey.AllowedTypes;
    gen302.Empty();
    gen302.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    auto& gen303 = (*this).IsDodgingKey.AllowedTypes;
    gen303.Empty();
    gen303.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    (*this).m_RefreshTimeStartMin = 1.000000000e+00f;
    (*this).m_RefreshTimeStartMax = 1.500000000e+00f;
    (*this).m_RefreshTimeMin = 3.000000119e-01f;
    (*this).m_RefreshTimeMax = 5.000000000e-01f;
    (*this).m_CancelOnThreathReaction = true;
    (*this).m_ReactionDefaultTime = 5.000000000e-01f;
    (*this).NodeName = TEXT("Move To Cover Sequence");
}


