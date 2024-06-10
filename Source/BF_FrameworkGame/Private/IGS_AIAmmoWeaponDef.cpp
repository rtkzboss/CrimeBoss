#include "IGS_AIAmmoWeaponDef.h"

FIGS_AIAmmoWeaponDef::FIGS_AIAmmoWeaponDef() {
    (*this).UseTimeSetup = false;
    (*this).CombatRange.Min = 5.000000000e+02f;
    (*this).CombatRange.Max = 1.200000000e+03f;
    (*this).ShotsToFire.Min = 2;
    (*this).ShotsToFire.Max = 10;
    (*this).ShotsToFireSpray.Min = 6;
    (*this).ShotsToFireSpray.Max = 12;
    (*this).AmmoUsedUntilReload.Min = 30;
    (*this).AmmoUsedUntilReload.Max = 40;
    (*this).TimeToFire.Min = 1.000000000e+00f;
    (*this).TimeToFire.Max = 1.500000000e+00f;
    (*this).TimeToFireSpray.Min = 3.000000000e+00f;
    (*this).TimeToFireSpray.Max = 5.000000000e+00f;
    (*this).TimeUntilReload.Min = 4.000000000e+00f;
    (*this).TimeUntilReload.Max = 6.000000000e+00f;
    (*this).AfterFireCooldown.Min = 5.000000000e-01f;
    (*this).AfterFireCooldown.Max = 2.000000000e+00f;
    (*this).AfterFireCooldownCover.Min = 1.500000000e+00f;
    (*this).AfterFireCooldownCover.Max = 3.000000000e+00f;
}

