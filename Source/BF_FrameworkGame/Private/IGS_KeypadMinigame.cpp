#include "IGS_KeypadMinigame.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_KeypadMinigame::AIGS_KeypadMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SolutionCode = TEXT("0451");
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
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


