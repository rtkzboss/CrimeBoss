#include "BTTask_InCover.h"

UBTTask_InCover::UBTTask_InCover() {
    this->NodeName = TEXT("In Cover");
    this->RotationDelay = 0.80f;
    this->m_CoverPoint = NULL;
    this->m_Controller = NULL;
    this->m_Character = NULL;
    this->m_Memory = NULL;
    this->m_Threath = NULL;
    this->m_CharacterData = NULL;
    this->m_MovementComponent = NULL;
}


