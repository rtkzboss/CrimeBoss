#include "IGS_InstancedBreakableWindow.h"
#include "Net/UnrealNetwork.h"

UIGS_InstancedBreakableWindow::UIGS_InstancedBreakableWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mR_DecalsLocation.AddDefaulted(7);
    this->IgnoreSectionIndex = 20;
}

void UIGS_InstancedBreakableWindow::HideWindowInstance(const int32& InstanceIndex) {
}

void UIGS_InstancedBreakableWindow::All_ImpactInstance_Implementation(FVector_NetQuantize Location, int32 InstanceIndex) {
}

void UIGS_InstancedBreakableWindow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_InstancedBreakableWindow, mR_BreakableWindowInstances);
}


