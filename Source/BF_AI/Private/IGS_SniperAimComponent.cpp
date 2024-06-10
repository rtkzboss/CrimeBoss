#include "IGS_SniperAimComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_SniperAimComponent::UIGS_SniperAimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HorizontalOffset.Min = -1.200000000e+01f;
    (*this).HorizontalOffset.Max = 1.200000000e+01f;
    (*this).VerticalOffset.Min = -5.000000000e+00f;
    (*this).VerticalOffset.Max = 7.000000000e+00f;
    (*this).HorizontalSpeed.Min = 1.400000000e+01f;
    (*this).HorizontalSpeed.Max = 1.800000000e+01f;
    (*this).VerticalSpeed.Min = 4.000000000e+00f;
    (*this).VerticalSpeed.Max = 6.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UIGS_SniperAimComponent::OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_SniperAimComponent::OnRep_SniperAimData() {
}

void UIGS_SniperAimComponent::OnAggroTargetChanged(AIGS_AIControllerBase* InController, AActor* inAggroTarget) {
}

void UIGS_SniperAimComponent::Multicast_ReportFire_Implementation(bool inIsHit) {
}

void UIGS_SniperAimComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_SniperAimComponent, mR_SniperAimData);
    DOREPLIFETIME(UIGS_SniperAimComponent, mR_IsLocked);
}


