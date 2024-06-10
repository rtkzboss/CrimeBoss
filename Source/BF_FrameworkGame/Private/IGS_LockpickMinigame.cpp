#include "IGS_LockpickMinigame.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_LockpickMinigame::AIGS_LockpickMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CurrentPinCount = 1;
    (*this).CurrentRadius = 3.600000000e+02f;
    (*this).ClampRadiusPercentage = 5.000000000e-01f;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
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


