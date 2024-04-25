#include "IGS_AISuspiciousnessComponentBase.h"

UIGS_AISuspiciousnessComponentBase::UIGS_AISuspiciousnessComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlertedByCharacter = NULL;
    this->AlertedByCharacterSusObject = NULL;
    this->m_Offence = NULL;
}

bool UIGS_AISuspiciousnessComponentBase::IsReacting() {
    return false;
}

bool UIGS_AISuspiciousnessComponentBase::IsAlerted() const {
    return false;
}

AIGS_GameCharacterFramework* UIGS_AISuspiciousnessComponentBase::GetAlertedByCharacter() {
    return NULL;
}

void UIGS_AISuspiciousnessComponentBase::ClearOffence() {
}


