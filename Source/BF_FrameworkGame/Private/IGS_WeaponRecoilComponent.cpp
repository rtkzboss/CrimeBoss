#include "IGS_WeaponRecoilComponent.h"

UIGS_WeaponRecoilComponent::UIGS_WeaponRecoilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentRecoilPitchBank = 0.00f;
    this->TotalRecoilPitchBank = 0.00f;
    this->CompensatePitchBank = 0.00f;
    this->LastPitch = 0.00f;
    this->LastYaw = 0.00f;
    this->CurrentDownSpeed = 0.00f;
}

void UIGS_WeaponRecoilComponent::Reinit() {
}

void UIGS_WeaponRecoilComponent::AddRecoil() {
}


