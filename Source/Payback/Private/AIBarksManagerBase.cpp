#include "AIBarksManagerBase.h"

UAIBarksManagerBase::UAIBarksManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CombatTauntsCooldownPerChar = 15.00f;
    this->CombatTauntsCooldownGlobal = 8.00f;
    this->CombatTauntsDistance = 1500.00f;
    this->StealthIdleCooldownPerChar = 15.00f;
    this->StealthIdleCooldownGlobal = 8.00f;
    this->StealthIdleDistance = 1500.00f;
    this->m_AIDirector = NULL;
    this->m_SuspicionManager = NULL;
}

void UAIBarksManagerBase::ReportStealthIdleDialogue(AIGS_GameCharacterFramework* inCharacterFramework, FText inDialogue) {
}


