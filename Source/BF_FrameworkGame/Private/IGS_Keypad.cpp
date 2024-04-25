#include "IGS_Keypad.h"
#include "Net/UnrealNetwork.h"

AIGS_Keypad::AIGS_Keypad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->KeypadCode = 0;
    this->InteractiveComponent = NULL;
    this->AkComponent = NULL;
    this->KeycodePassAkAudioEvent = NULL;
    this->KeycodeFailAkAudioEvent = NULL;
    this->ButtonPressAkAudioEvent = NULL;
    this->GreenLight = NULL;
    this->RedLight = NULL;
    this->CodeTextRenderComponent = NULL;
    this->ButtonHighlightTime = 0.50f;
    this->TimeToClearAfterFail = 1.00f;
    this->MaximalCodeLength = 4;
    this->mR_IsInUse = false;
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


