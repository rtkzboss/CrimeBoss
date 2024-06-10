#include "IGS_AISettingsComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AISettingsComponent::UIGS_AISettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MeleeActivationDistance = 2.000000000e+02f;
    (*this).PrimaryBashActivationDistance = 2.000000000e+02f;
    (*this).SecondaryBashActivationDistance = 2.000000000e+02f;
    (*this).CombatRangeUnarmed.Min = 5.000000000e+02f;
    (*this).CombatRangeUnarmed.Max = 1.200000000e+03f;
    (*this).MeleeCooldown.Min = 4.000000060e-01f;
    (*this).MeleeCooldown.Max = 7.500000000e-01f;
}


