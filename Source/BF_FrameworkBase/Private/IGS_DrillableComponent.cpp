#include "IGS_DrillableComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_DrillableComponent::UIGS_DrillableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CurrentHealth = 1.000000000e+02f;
    (*this).RelativeHealth = 1.000000000e+00f;
    (*this).MaxHealth = 1.000000000e+02f;
    (*this).FailThreshold = 2.000000030e-01f;
}

void UIGS_DrillableComponent::SetDrilledState_Implementation(bool inDrilled) {
}

void UIGS_DrillableComponent::Server_DrillStart_Implementation(FVector inStartPoint) {
}

void UIGS_DrillableComponent::ResetDrillable() {
}

void UIGS_DrillableComponent::OnRep_OnCurrentHealthChange() {
}

bool UIGS_DrillableComponent::GetDrilledState() {
    return false;
}

float UIGS_DrillableComponent::GetDrillableRelativeHealth() {
    return 0.0f;
}

void UIGS_DrillableComponent::DrillStart(FVector inStartPoint, AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_DrillableComponent::ApplyDrillDamage(float inAmount) {
}

void UIGS_DrillableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DrillableComponent, CurrentHealth);
    DOREPLIFETIME(UIGS_DrillableComponent, RelativeHealth);
    DOREPLIFETIME(UIGS_DrillableComponent, bDrilled);
    DOREPLIFETIME(UIGS_DrillableComponent, CurrentInstigator);
    DOREPLIFETIME(UIGS_DrillableComponent, MaxHealth);
}


