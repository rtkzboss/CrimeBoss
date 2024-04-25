#include "IGS_EnvironmentBoxComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_EnvironmentBoxComponent::UIGS_EnvironmentBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->EffectBlendStartDuration = 10.00f;
    this->EffectBlendStopDuration = 25.00f;
    this->VolumeType = EIGS_EnvironmentVolumeType::Exterior;
    this->m_IsEnabled = true;
}

void UIGS_EnvironmentBoxComponent::SetEnabled(bool inNewIsEnabled) {
}

void UIGS_EnvironmentBoxComponent::OnEnvironmentVolumeEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void UIGS_EnvironmentBoxComponent::OnEnvironmentVolumeBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

bool UIGS_EnvironmentBoxComponent::GetEnabled() const {
    return false;
}


