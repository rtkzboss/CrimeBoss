#include "IGS_InjuryComponentAI.h"

UIGS_InjuryComponentAI::UIGS_InjuryComponentAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeavyReactionTresholdMin = 0.70f;
    this->HeavyReactionTresholdMax = 0.70f;
    this->HeavyReactionTresholdInterval = 0.20f;
    this->HeavyReactionMinSingleDamage = 180.00f;
    this->HeavyReactionChance = 0.10f;
    this->HeavyReactionCooldownMin = 0.00f;
    this->HeavyReactionCooldownMax = 0.00f;
    this->MediumReactionTresholdMin = 0.35f;
    this->MediumReactionTresholdMax = 0.75f;
    this->MediumReactionTresholdInterval = 1.00f;
    this->MediumReactionMinSingleDamage = 25.00f;
    this->MediumReactionChance = 1.00f;
    this->MediumReactionCooldownMin = 0.00f;
    this->MediumReactionCooldownMax = 0.00f;
    this->m_Controller = NULL;
    this->m_Pawn = NULL;
    this->m_ObjectStatus = NULL;
    this->m_CharacterData = NULL;
    this->m_BleedingHandler = NULL;
}

void UIGS_InjuryComponentAI::RequestReaction(bool inIsHeavy, FVector inHitDirection) {
}


