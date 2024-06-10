#include "IGS_AISwatHeavyTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AISwatHeavyTierDef::FIGS_AISwatHeavyTierDef() {
    (*this).SpecStats.Shock.ActivationDistance = 3.000000000e+02f;
    (*this).SpecStats.Shock.Cooldown = 1.000000000e+01f;
    (*this).SpecStats.Shock.Radius = 3.500000000e+02f;
    (*this).SpecStats.Shock.Angle = 1.800000000e+02f;
    (*this).SpecStats.Shock.ChargeTime = 2.000000000e+00f;
    (*this).SpecStats.Shock.Damage = 1.000000000e+01f;
    (*this).SpecStats.Shock.Count = 4;
    (*this).SpecStats.Shock.Duration.Min = 3.750000000e+00f;
    (*this).SpecStats.Shock.Duration.Max = 4.250000000e+00f;
    (*this).SpecStats.WeakSpot.WeakSpotHealth = 1.000000000e+02f;
    (*this).SpecStats.WeakSpot.DoomTimer.Min = 5.000000000e+00f;
    (*this).SpecStats.WeakSpot.DoomTimer.Max = 1.000000000e+01f;
    (*this).SpecStats.Injured.HealthToInjured = 2.500000000e+03f;
    (*this).SpecStats.Injured.InjuredTime.Min = 6.000000000e+00f;
    (*this).SpecStats.Injured.InjuredTime.Max = 7.500000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
}

