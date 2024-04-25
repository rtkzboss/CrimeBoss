#include "IGS_TelephoneBase.h"

AIGS_TelephoneBase::AIGS_TelephoneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRinging = false;
    this->bPublicTelephone = true;
    this->ControlRoom = NULL;
    this->m_StealthSettingsInstance = NULL;
}




void AIGS_TelephoneBase::BeginCheckInCall() {
}

void AIGS_TelephoneBase::AnswerCall(AIGS_GameCharacterFramework* inInstigator) {
}


