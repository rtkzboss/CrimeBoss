#include "IGS_EnvironmentVolumeManager.h"

UIGS_EnvironmentVolumeManager::UIGS_EnvironmentVolumeManager() {
}

void UIGS_EnvironmentVolumeManager::SetFlashlightSettingsDataAsset(UIGS_FlashlightSettingsDataAsset* inFlashlightSettingsDataAsset) {
}

void UIGS_EnvironmentVolumeManager::OnPostProcessVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UIGS_EnvironmentVolumeManager::OnPostProcessVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UIGS_EnvironmentVolumeManager::OnInteriorVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UIGS_EnvironmentVolumeManager::OnInteriorVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UIGS_EnvironmentVolumeManager::OnEnvironmentVolumeEndOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType EnvironmentType, AActor* inOtherActor) const {
}

void UIGS_EnvironmentVolumeManager::OnEnvironmentVolumeBeginOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType EnvironmentType, AActor* inOtherActor) const {
}

UIGS_EnvironmentVolumeManager* UIGS_EnvironmentVolumeManager::Instance(const UObject* inWorldContextObject) {
    return NULL;
}


