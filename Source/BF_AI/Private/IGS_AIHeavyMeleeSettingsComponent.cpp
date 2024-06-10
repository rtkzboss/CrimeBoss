#include "IGS_AIHeavyMeleeSettingsComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIHeavyMeleeSettingsComponent::UIGS_AIHeavyMeleeSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UIGS_AIHeavyMeleeSettingsComponent::GetDestroyableWeaponHealth() {
    return 0.0f;
}

float UIGS_AIHeavyMeleeSettingsComponent::GetDestroyableWeaponDamage() {
    return 0.0f;
}

float UIGS_AIHeavyMeleeSettingsComponent::GetChargeSteeringRange() {
    return 0.0f;
}


