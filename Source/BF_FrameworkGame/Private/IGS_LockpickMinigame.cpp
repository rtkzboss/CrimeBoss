#include "IGS_LockpickMinigame.h"

AIGS_LockpickMinigame::AIGS_LockpickMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AkComponent = NULL;
    this->ButtonPressAkAudioEvent = NULL;
    this->CurrentPinCount = 1;
    this->m_InstigatorInputComponent = NULL;
    this->Angle = 0.00f;
    this->bSlightlyClose = false;
    this->bVeryClose = false;
    this->bStaggered = false;
    this->CurrentRadius = 360.00f;
    this->ClampRadiusPercentage = 0.50f;
}

void AIGS_LockpickMinigame::SuccessOnePick() {
}


void AIGS_LockpickMinigame::SetSuccess(bool inSuccess) {
}

void AIGS_LockpickMinigame::SetStaggered(bool inStaggered) {
}

void AIGS_LockpickMinigame::ResetPins() {
}








void AIGS_LockpickMinigame::OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState) {
}

void AIGS_LockpickMinigame::OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void AIGS_LockpickMinigame::Init(AIGS_PlayerCharacter* inCharacter, UIGS_InteractiveComponent* inOwningInteraction) {
}

float AIGS_LockpickMinigame::HandleMouseInput_Implementation(FVector2D inXY) {
    return 0.0f;
}

void AIGS_LockpickMinigame::Escape(bool bForceEscapeWithoutNotifying) {
}

void AIGS_LockpickMinigame::Client_Escape_Implementation() {
}


