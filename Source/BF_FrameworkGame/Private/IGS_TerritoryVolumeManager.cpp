#include "IGS_TerritoryVolumeManager.h"

UIGS_TerritoryVolumeManager::UIGS_TerritoryVolumeManager() {
}

void UIGS_TerritoryVolumeManager::RemoveRestrictionTag(const FName& inTag) {
}

void UIGS_TerritoryVolumeManager::OnTerritoryVolumeEndOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const {
}

void UIGS_TerritoryVolumeManager::OnTerritoryVolumeBeginOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const {
}

TArray<FName> UIGS_TerritoryVolumeManager::GetRestrictionTags() const {
    return TArray<FName>();
}

TArray<FName> UIGS_TerritoryVolumeManager::GetRestrictedTags() const {
    return TArray<FName>();
}

void UIGS_TerritoryVolumeManager::AddRestrictionTag(const FName& inTag) {
}


