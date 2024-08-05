#include "IGS_TerritoryVolumeManager.h"
#include "IGS_TerritoryData.h"

UIGS_TerritoryVolumeManager::UIGS_TerritoryVolumeManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_TerritoryData> gen0(TEXT("/Game/00_Main/Core/AI/Spawning/DA_TerritoryData.DA_TerritoryData"));
    (*this).TerritoryData = gen0.Object;
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


