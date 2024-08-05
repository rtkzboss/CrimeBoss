#include "IGS_TelephoneBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_TelephoneBase::AIGS_TelephoneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bPublicTelephone = true;
}




void AIGS_TelephoneBase::BeginCheckInCall() {
}

void AIGS_TelephoneBase::AnswerCall(AIGS_GameCharacterFramework* inInstigator) {
}


