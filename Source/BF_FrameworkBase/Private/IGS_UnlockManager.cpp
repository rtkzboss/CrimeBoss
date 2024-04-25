#include "IGS_UnlockManager.h"

UIGS_UnlockManager::UIGS_UnlockManager() {
    this->UnlockManagerData = NULL;
    this->IsInited = false;
}

void UIGS_UnlockManager::UnlockItemByID(FGameplayTag inTagID) {
}

void UIGS_UnlockManager::UnlockItem(const FIGS_UnlockItemInfo& inUnlockItemInfo) {
}

void UIGS_UnlockManager::ResetUnlocks() {
}

void UIGS_UnlockManager::RemovePendingUnlockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory) {
}

void UIGS_UnlockManager::RemovePendingUnlockedItemByID(FGameplayTag inTagID) {
}

void UIGS_UnlockManager::RemovePendingUnlockedItem(const FIGS_UnlockItemInfo& inUnlockItemInfo) {
}

void UIGS_UnlockManager::PrintUnlockItemInfos(const TArray<FIGS_UnlockItemInfo>& inUnlockItemInfos, const FString& inHeader) {
}

void UIGS_UnlockManager::PrintAllAvailableRewards(const int32 inLevel) {
}

bool UIGS_UnlockManager::IsUnlocked(FGameplayTag inTag) const {
    return false;
}

bool UIGS_UnlockManager::IsPendingUnlockedItemByID(FGameplayTag inTagID) const {
    return false;
}

bool UIGS_UnlockManager::IsPendingUnlockedItem(const FIGS_UnlockItemInfo& inUnlockItemInfo) const {
    return false;
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetUnlockItemInfos(const TArray<FGameplayTag>& inTagIDs) const {
    return TArray<FIGS_UnlockItemInfo>();
}

FIGS_UnlockItemInfo UIGS_UnlockManager::GetUnlockItemInfo(FGameplayTag inTagID, bool inMustBeUnlockable) const {
    return FIGS_UnlockItemInfo{};
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetForcedUnlockRewards(const TArray<FIGS_UnlockItemInfo>& inUnlockItemInfos, const int32 inLevel) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllUnlockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllUnlockedItems() const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllUnlockableItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllUnlockableItems() const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllPendingUnlockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllPendingUnlockedItems() const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllLockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory, bool inGetOnlyOwnable) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllLockedItems(bool inGetOnlyOwnable) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllEntitledItemsByEntitlementID(FGameplayTag inTagID) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllEntitledItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const {
    return TArray<FIGS_UnlockItemInfo>();
}

TArray<FIGS_UnlockItemInfo> UIGS_UnlockManager::GetAllEntitledItems() const {
    return TArray<FIGS_UnlockItemInfo>();
}

void UIGS_UnlockManager::ForceUnlockAll() {
}

void UIGS_UnlockManager::FilterWeaponsWithoutBaseWeapon(TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos) {
}

void UIGS_UnlockManager::FilterWeaponSkins(TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos) {
}

void UIGS_UnlockManager::FilterUnlockRewardsByQualityCap(TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos, const int32 inLevel) {
}

void UIGS_UnlockManager::FilterHigherLevelUnlockRewards(TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos, int32 inLevel) {
}

void UIGS_UnlockManager::FilterEntitledItems(TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos) {
}

void UIGS_UnlockManager::EnsureNotSameCategory(const TArray<FIGS_UnlockItemInfo>& inLockedItems, TArray<FIGS_UnlockItemInfo>& inOutResultItems, const int32 inMaxRewardsCount) {
}

void UIGS_UnlockManager::AddRandomRewards(TArray<FIGS_UnlockItemInfo>& inOutLockedItems, TArray<FIGS_UnlockItemInfo>& inOutResultItems, const int32 inMaxRewardsCount) {
}


