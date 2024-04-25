#include "BTDecorator_MoveToCoverSequence.h"

UBTDecorator_MoveToCoverSequence::UBTDecorator_MoveToCoverSequence() {
    this->NodeName = TEXT("Move To Cover Sequence");
    this->m_RefreshTimeStartMin = 1.00f;
    this->m_RefreshTimeStartMax = 1.50f;
    this->m_RefreshTimeMin = 0.30f;
    this->m_RefreshTimeMax = 0.50f;
    this->m_CancelOnThreathReaction = true;
    this->m_ReactionDefaultTime = 0.50f;
}


