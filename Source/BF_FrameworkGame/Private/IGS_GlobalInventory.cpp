#include "IGS_GlobalInventory.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_GlobalInventory::UIGS_GlobalInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_GlobalInventory::RemoveItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass, bool inRemoveAll) {
    return false;
}

void UIGS_GlobalInventory::OnRep_WTSlot(FIGS_GlobalItemSlot inWTSlot) {
}

void UIGS_GlobalInventory::OnRep_Slots(const TArray<FIGS_GlobalItemSlot>& inOldSlots) {
}

bool UIGS_GlobalInventory::IsItemAllowedInInventory(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass, int32 inCount) {
    return false;
}

bool UIGS_GlobalInventory::HasItemWithProperty(EIGS_ItemPropertyFlags inProperty) {
    return false;
}

int32 UIGS_GlobalInventory::GetWTCount() const {
    return 0;
}

int32 UIGS_GlobalInventory::GetItemCount(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass) const {
    return 0;
}

TArray<FIGS_GlobalItemSlot> UIGS_GlobalInventory::GetAllSlotsBP() const {
    return TArray<FIGS_GlobalItemSlot>();
}

bool UIGS_GlobalInventory::CanAddItems(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd, int32 inCount) {
    return false;
}

bool UIGS_GlobalInventory::CanAddItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd) {
    return false;
}

int32 UIGS_GlobalInventory::AddWT(const TSubclassOf<UIGS_GlobalInventoryObject>& inWTClassToAdd, int32 inCount) {
    return 0;
}

int32 UIGS_GlobalInventory::AddItems(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd, int32 inCount) {
    return 0;
}

bool UIGS_GlobalInventory::AddItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd) {
    return false;
}

void UIGS_GlobalInventory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_GlobalInventory, mR_Slots);
    DOREPLIFETIME(UIGS_GlobalInventory, mR_WTSlot);
}


