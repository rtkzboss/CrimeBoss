#include "IGS_InteractiveWireBox.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_InteractiveWireBox::AIGS_InteractiveWireBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StatusFailColor.R = 255;
    (*this).StatusFailColor.A = 255;
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


