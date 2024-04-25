#include "IGS_InteractiveWireBox.h"
#include "Net/UnrealNetwork.h"

AIGS_InteractiveWireBox::AIGS_InteractiveWireBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightsTimeline = NULL;
}

void AIGS_InteractiveWireBox::SetWireLightState(int32 inWireIndex, bool inState) {
}

void AIGS_InteractiveWireBox::Client_SetWireLight_Implementation(int32 inWireIndex, bool inState) {
}

void AIGS_InteractiveWireBox::Client_SetFailStatus_Implementation() {
}

void AIGS_InteractiveWireBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_InteractiveWireBox, mR_WiresInfo);
}


