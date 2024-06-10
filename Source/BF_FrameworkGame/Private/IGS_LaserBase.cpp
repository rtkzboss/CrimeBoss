#include "IGS_LaserBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_LaserBase::AIGS_LaserBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DestroyingReportsToHQ = true;
    (*this).DestroyingIsSuspicious = true;
    (*this).DisablingIsSuspicious = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
}



void AIGS_LaserBase::OnLaserDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void AIGS_LaserBase::DisableLaser(AIGS_GameCharacterFramework* inInstigator) {
}


