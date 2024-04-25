#include "IGS_MuzzleFlashHandlerComponent.h"

UIGS_MuzzleFlashHandlerComponent::UIGS_MuzzleFlashHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarrelSmokeStartAfterShots = 3;
    this->MuzzleFlashStopTime = 0.10f;
    this->MaxTimeBetweenShotsForBarrelSmoke = 1.25f;
    this->LightStopTime = 0.04f;
    this->LightFadeInSpeed = 100.00f;
    this->LightFadeOutSpeed = 50.00f;
    this->bResetBarrelSmokeOnReactivate = false;
}

void UIGS_MuzzleFlashHandlerComponent::MuzzleFlashDoEffect() {
}


