#include "IGS_KeypadMinigame.h"

AIGS_KeypadMinigame::AIGS_KeypadMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bEnteredAnyCombination = false;
    this->bWrongCodeAddsStrike = false;
    this->SolutionCode = TEXT("0451");
    this->AkComponent = NULL;
    this->ButtonPressAkAudioEvent = NULL;
    this->m_Instigator = NULL;
    this->m_InstigatorController = NULL;
    this->m_InstigatorInputComponent = NULL;
}

void AIGS_KeypadMinigame::WinKeypad() {
}


void AIGS_KeypadMinigame::SetSuccess(bool inSuccess) {
}

void AIGS_KeypadMinigame::SetKeypadCode(const FString& inCode) {
}

void AIGS_KeypadMinigame::ResetKeypad() {
}

void AIGS_KeypadMinigame::ReportWrongCodeEntered(AIGS_PlayerCharacter* inInstigator) const {
}





void AIGS_KeypadMinigame::OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState) {
}

void AIGS_KeypadMinigame::OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}




void AIGS_KeypadMinigame::LoseKeypad() {
}

void AIGS_KeypadMinigame::Init(AIGS_PlayerCharacter* inCharacter, UIGS_InteractiveComponent* inOwningInteraction) {
}

void AIGS_KeypadMinigame::HoverDigit(int32 inDigit) {
}

void AIGS_KeypadMinigame::Escape(bool bForceEscapeWithoutNotifying) {
}

void AIGS_KeypadMinigame::EnterDigit(int32 inDigit) {
}

void AIGS_KeypadMinigame::Client_Escape_Implementation() {
}


