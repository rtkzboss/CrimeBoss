#include "IGS_InstancedBreakableWindow.h"
#include "EIGS_OverlapResponseType.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "EIGS_BreakPushImpulse.h"
#include "EIGS_WindowBreakBehaviour.h"
#include "Net/UnrealNetwork.h"

UIGS_InstancedBreakableWindow::UIGS_InstancedBreakableWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IgnoreSectionIndex = 20;
}

void UIGS_InstancedBreakableWindow::HideWindowInstance(const int32& InstanceIndex) {
}

void UIGS_InstancedBreakableWindow::All_ImpactInstance_Implementation(FVector_NetQuantize Location, int32 InstanceIndex) {
}

void UIGS_InstancedBreakableWindow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_InstancedBreakableWindow, mR_BreakableWindowInstances);
}


