#include "IGS_CodeLockComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_CodeLockComponent::UIGS_CodeLockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Code = 0;
    this->MinCylinderValue = 1;
    this->MaxCylinderValue = 7;
    this->R_IsLocked = true;
    this->R_bIsOccupied = false;
    this->m_DigitCount = 0;
    this->m_OldOwner = NULL;
}

void UIGS_CodeLockComponent::SetInstigator(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_CodeLockComponent::SetCylinderValue(int32 InValue, int32 inCylinderIndex) {
}

void UIGS_CodeLockComponent::SetCode(int32 inCode) {
}

void UIGS_CodeLockComponent::Server_SetInstigator_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_CodeLockComponent::Server_SetCylinderValue_Implementation(int32 InValue, int32 inCylinderIndex) {
}

void UIGS_CodeLockComponent::OnRep_IsLocked(bool inOldLocked) {
}

void UIGS_CodeLockComponent::OnRep_Cylinders(TArray<int32> inOldCylinders) {
}

void UIGS_CodeLockComponent::IncreaseCylinderValue(int32 inCylinderIndex) {
}

bool UIGS_CodeLockComponent::GetIsLocked() {
    return false;
}

int32 UIGS_CodeLockComponent::GetCode() {
    return 0;
}

void UIGS_CodeLockComponent::DecreaseCylinderValue(int32 inCylinderIndex) {
}

void UIGS_CodeLockComponent::Client_SetCylinderValue_Implementation(int32 InValue, int32 inCylinderIndex) {
}

void UIGS_CodeLockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_CodeLockComponent, R_Cylinders);
    DOREPLIFETIME(UIGS_CodeLockComponent, R_IsLocked);
    DOREPLIFETIME(UIGS_CodeLockComponent, R_bIsOccupied);
}


