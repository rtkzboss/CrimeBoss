#include "IGS_UnlockHelpers.h"

UIGS_UnlockHelpers::UIGS_UnlockHelpers() {
}

void UIGS_UnlockHelpers::PrintUnlockStats(UObject* inWCO, const FIGS_UnlockStats& inOutUnlockStats, int32 inSimulationsCount) {
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockHelpers::GetAllWeaponSkinsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag, const TArray<FIGS_UnlockItemInfo>& inUnlockItems) {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockHelpers::GetAllWeaponsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag, const TArray<FIGS_UnlockItemInfo>& inUnlockItems) {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FGameplayTag> UIGS_UnlockHelpers::GetAllSubItemsFromItemTagID(UObject* inWCO, const FGameplayTag& inTagID) {
    return TArray<FGameplayTag>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockHelpers::GetAllBaseWeaponsOfFamilyFromWeapons(const TArray<FIGS_UnlockItemInfo>& inUnlockItems) {
    return TArray<FIGS_UnlockItemInfo>();
}

void UIGS_UnlockHelpers::AddUnlockStats(UObject* inWCO, FIGS_UnlockStats& inOutUnlockStats, const FIGS_UnlockItemInfo& inUnlockItemInfo, int32 inLevel) {
}


