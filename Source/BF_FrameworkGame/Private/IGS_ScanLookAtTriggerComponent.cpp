#include "IGS_ScanLookAtTriggerComponent.h"

UIGS_ScanLookAtTriggerComponent::UIGS_ScanLookAtTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScreenPercentage = 0.80f;
    this->bIsScanEnabled = true;
}

void UIGS_ScanLookAtTriggerComponent::SetScanEnabled(bool inState) {
}

void UIGS_ScanLookAtTriggerComponent::SetIgnoreComponents(TArray<UPrimitiveComponent*> inIgnoreActorComponents) {
}

void UIGS_ScanLookAtTriggerComponent::SetIgnoreActors(TArray<AActor*> inIgnoreActors) {
}

void UIGS_ScanLookAtTriggerComponent::Server_Trigger_Implementation(UIGS_LookAtTriggerComponent* inInteractiveComponent) {
}
bool UIGS_ScanLookAtTriggerComponent::Server_Trigger_Validate(UIGS_LookAtTriggerComponent* inInteractiveComponent) {
    return true;
}


