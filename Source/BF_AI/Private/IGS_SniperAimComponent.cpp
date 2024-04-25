#include "IGS_SniperAimComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_SniperAimComponent::UIGS_SniperAimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mR_IsLocked = false;
}

void UIGS_SniperAimComponent::OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_SniperAimComponent::OnRep_SniperAimData() {
}

void UIGS_SniperAimComponent::Multicast_ReportFire_Implementation(bool inIsHit) {
}

void UIGS_SniperAimComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_SniperAimComponent, mR_SniperAimData);
    DOREPLIFETIME(UIGS_SniperAimComponent, mR_IsLocked);
}


