#include "IGS_PickupActorInventoryItem.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_PickupActorInventoryItem::AIGS_PickupActorInventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).R_WeaponSkin = nullptr;
    (*this).R_GlobalItemCount = 1;
    (*this).R_EquipmentCount = 1;
}

void AIGS_PickupActorInventoryItem::Setup(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass) {
}

void AIGS_PickupActorInventoryItem::OnRep_WeaponSkin() {
}

void AIGS_PickupActorInventoryItem::OnRep_UniversalData() {
}

void AIGS_PickupActorInventoryItem::OnRep_ItemMods() {
}

void AIGS_PickupActorInventoryItem::OnRep_ItemCount() {
}

void AIGS_PickupActorInventoryItem::OnRep_ItemClass() {
}




FBoxSphereBounds AIGS_PickupActorInventoryItem::GetMeshBounds() {
    return FBoxSphereBounds{};
}

bool AIGS_PickupActorInventoryItem::DoesItemHaveProperty(EIGS_ItemPropertyFlags inItemFlag) {
    return false;
}

void AIGS_PickupActorInventoryItem::ChangeSkin(TSoftObjectPtr<UIGS_WeaponSkinData> inNewSkin, TSoftObjectPtr<UIGS_WeaponSkinData> inNewSpecificSkin) {
}

void AIGS_PickupActorInventoryItem::ApplyUniversalData_Implementation(FIGS_InventoryObjectUniversalData inUniversalData) {
}

void AIGS_PickupActorInventoryItem::AddMods(const TArray<TSubclassOf<UIGS_ModInventoryObject>>& inMods) {
}

void AIGS_PickupActorInventoryItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, R_WeaponSkin);
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, R_ItemClassToAdd);
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, R_ItemModsToAdd);
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, R_GlobalItemCount);
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, R_bCustomStackCount);
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, R_EquipmentCount);
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, R_UniversalData);
    DOREPLIFETIME(AIGS_PickupActorInventoryItem, mR_bWasDropped);
}


