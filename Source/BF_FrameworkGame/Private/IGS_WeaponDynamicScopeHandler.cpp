#include "IGS_WeaponDynamicScopeHandler.h"

UIGS_WeaponDynamicScopeHandler::UIGS_WeaponDynamicScopeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicScopePostprocessMaterial = NULL;
    this->DynamicScopePostprocessVerticalMaterial = NULL;
    this->DynamicSniperScopePostprocessMaterial = NULL;
    this->DynamicSniperScopePostprocessVerticalMaterial = NULL;
}

void UIGS_WeaponDynamicScopeHandler::OnWeaponDestroyed(AActor* inDestroyed) {
}

void UIGS_WeaponDynamicScopeHandler::OnAimChanged_Implementation(bool inAim) {
}

void UIGS_WeaponDynamicScopeHandler::DisableAimPostprocess() const {
}


