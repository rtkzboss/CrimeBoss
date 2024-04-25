#include "IGS_PlayerMetaTransferComponent.h"

UIGS_PlayerMetaTransferComponent::UIGS_PlayerMetaTransferComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBotControlled = false;
}

void UIGS_PlayerMetaTransferComponent::OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_PlayerMetaTransferComponent::HandlePlayerDownState(FIGS_HitInfo inHitInfo) {
}


