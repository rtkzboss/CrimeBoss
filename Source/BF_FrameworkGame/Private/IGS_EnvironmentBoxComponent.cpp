#include "IGS_EnvironmentBoxComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_EnvironmentBoxComponent::UIGS_EnvironmentBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).EffectBlendStartDuration = 1.000000000e+01f;
    (*this).EffectBlendStopDuration = 2.500000000e+01f;
    (*this).m_IsEnabled = true;
    (*this).AreaClass = UNavArea_Obstacle::StaticClass();
    (*this).bCanEverAffectNavigation = false;
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


