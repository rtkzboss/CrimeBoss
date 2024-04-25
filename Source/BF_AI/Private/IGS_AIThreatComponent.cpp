#include "IGS_AIThreatComponent.h"

UIGS_AIThreatComponent::UIGS_AIThreatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DmgRequiredToMaxThreat = 0.20f;
    this->ThreathFromFriendsDeath = 1.00f;
    this->ShotNearThreatAddonThreat = 0.50f;
    this->ShotNearDistance = 200.00f;
    this->FullDropTime = 3.00f;
    this->ThreatLevel = 0.00f;
    this->m_AIController = NULL;
    this->m_AIMemory = NULL;
    this->m_PossessedPawn = NULL;
    this->m_ObjectStatus = NULL;
    this->m_CharacterData = NULL;
}


