#include "IGS_PlayerBotSettings.h"

FIGS_PlayerBotSettings::FIGS_PlayerBotSettings() {
    (*this).CombatRange.Min = 5.000000000e+02f;
    (*this).CombatRange.Max = 1.200000000e+03f;
    (*this).ShotsToFire.Min = 2;
    (*this).ShotsToFire.Max = 10;
    (*this).ShotsToFireSpray.Min = 5;
    (*this).ShotsToFireSpray.Max = 12;
    (*this).AmmoUsedUntilReload.Min = 30;
    (*this).AmmoUsedUntilReload.Max = 40;
    (*this).AffterFireCooldown.Min = 5.000000000e-01f;
    (*this).AffterFireCooldown.Max = 2.000000000e+00f;
    (*this).AffterFireCooldownCover.Min = 1.500000000e+00f;
    (*this).AffterFireCooldownCover.Max = 3.000000000e+00f;
    (*this).CoverStickiness = 5.000000000e-01f;
    (*this).ReactionIntensity = 8.000000119e-01f;
}

