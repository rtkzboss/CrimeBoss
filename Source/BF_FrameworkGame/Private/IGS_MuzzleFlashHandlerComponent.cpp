#include "IGS_MuzzleFlashHandlerComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_MuzzleFlashHandlerComponent::UIGS_MuzzleFlashHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BarrelSmokeStartAfterShots = 3;
    (*this).MuzzleFlashStopTime = 1.000000015e-01f;
    (*this).MaxTimeBetweenShotsForBarrelSmoke = 1.250000000e+00f;
    (*this).LightStopTime = 3.500000015e-02f;
    (*this).LightFadeInSpeed = 1.000000000e+02f;
    (*this).LightFadeOutSpeed = 5.000000000e+01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UIGS_MuzzleFlashHandlerComponent::MuzzleFlashDoEffect() {
}


