#include "IGS_AISwatHeavyTierData.h"

FIGS_AISwatHeavyTierData::FIGS_AISwatHeavyTierData() {
    (*this).Shock.ActivationDistance = 3.000000000e+02f;
    (*this).Shock.Cooldown = 1.000000000e+01f;
    (*this).Shock.Radius = 3.500000000e+02f;
    (*this).Shock.Angle = 1.800000000e+02f;
    (*this).Shock.ChargeTime = 2.000000000e+00f;
    (*this).Shock.Damage = 1.000000000e+01f;
    (*this).Shock.Count = 4;
    (*this).Shock.Duration.Min = 3.750000000e+00f;
    (*this).Shock.Duration.Max = 4.250000000e+00f;
    (*this).WeakSpot.WeakSpotHealth = 1.000000000e+02f;
    (*this).WeakSpot.DoomTimer.Min = 5.000000000e+00f;
    (*this).WeakSpot.DoomTimer.Max = 1.000000000e+01f;
    (*this).Injured.HealthToInjured = 2.500000000e+03f;
    (*this).Injured.InjuredTime.Min = 6.000000000e+00f;
    (*this).Injured.InjuredTime.Max = 7.500000000e+00f;
}

