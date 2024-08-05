#include "IGS_Keypad.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_Keypad::AIGS_Keypad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ButtonHighlightTime = 5.000000000e-01f;
    (*this).TimeToClearAfterFail = 1.000000000e+00f;
    (*this).MaximalCodeLength = 4;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
}

void AIGS_Keypad::SetButtonHighlightAfterDelay(int32 inButtonId) {
}

void AIGS_Keypad::Server_ProcessButtonLetter_Implementation(const FString& inCharacter) {
}

void AIGS_Keypad::ProcessClick() {
}

void AIGS_Keypad::OnKeypadUsed(APawn* inInstigator) {
}




void AIGS_Keypad::OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState) {
}

void AIGS_Keypad::OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void AIGS_Keypad::KeyboardKeyPressed(const FString& inKey) {
}

void AIGS_Keypad::Client_OnKeypadUsed_Implementation(AIGS_PlayerCharacter* inPlayerCharacter) {
}

void AIGS_Keypad::Client_Escape_Implementation() {
}

void AIGS_Keypad::All_SetLightStatus_Implementation(bool InVisibility, bool inFailed) const {
}

void AIGS_Keypad::All_SetCodeTextRender_Implementation(const FText& inCodeText) {
}

void AIGS_Keypad::All_OnKeycodeCheckResult_Implementation(bool inPassed) {
}

void AIGS_Keypad::All_OnButtonPressed_Implementation(int32 inButtonId) {
}

void AIGS_Keypad::All_OnButtonHighlightOff_Implementation(int32 inButtonId) {
}

void AIGS_Keypad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_Keypad, mR_IsInUse);
}


