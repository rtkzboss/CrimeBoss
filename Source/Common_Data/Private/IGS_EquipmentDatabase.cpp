#include "IGS_EquipmentDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_EquipmentDatabase::UIGS_EquipmentDatabase() {
}

int32 UIGS_EquipmentDatabase::GetIndex(const TSubclassOf<UIGS_EquipmentInventoryObject>& inClass) const {
    return 0;
}

TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> UIGS_EquipmentDatabase::GetEquipmentByQualities(UObject* inWCO, const TArray<EMETA_ItemQuality>& inQualities, const TArray<FGameplayTag>& inUnlockedEquipment, bool inIgnoreUnlock) {
    return TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>();
}

FIGS_EquipmentTableRow UIGS_EquipmentDatabase::GetDataEquipmentByTagID(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded) {
    return FIGS_EquipmentTableRow{};
}

FIGS_EquipmentTableRow UIGS_EquipmentDatabase::GetDataEquipment(UObject* inWCO, const TSubclassOf<UIGS_EquipmentInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_EquipmentTableRow{};
}

FIGS_EquipmentTableRow UIGS_EquipmentDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_EquipmentTableRow{};
}


