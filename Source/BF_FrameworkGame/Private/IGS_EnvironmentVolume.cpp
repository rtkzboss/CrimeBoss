#include "IGS_EnvironmentVolume.h"

AIGS_EnvironmentVolume::AIGS_EnvironmentVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->EffectBlendStartDuration = 10.00f;
    this->EffectBlendStopDuration = 25.00f;
    this->VolumeType = EIGS_EnvironmentVolumeType::Exterior;
    this->m_IsEnabled = true;
}

void AIGS_EnvironmentVolume::SetEnabled(bool inNewIsEnabled) {
}

void AIGS_EnvironmentVolume::OnEnvironmentVolumeEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_EnvironmentVolume::OnEnvironmentVolumeBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

bool AIGS_EnvironmentVolume::GetEnabled() const {
    return false;
}


