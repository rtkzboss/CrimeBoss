#include "IGS_EnvironmentVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_EnvironmentVolume::AIGS_EnvironmentVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).EffectBlendStartDuration = 1.000000000e+01f;
    (*this).EffectBlendStopDuration = 2.500000000e+01f;
    (*this).m_IsEnabled = true;
    (*this).BrushColor.B = 255;
    (*this).BrushColor.G = 208;
    (*this).BrushColor.R = 0;
    (*this).BrushColor.A = 128;
    (*this).bColored = true;
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


