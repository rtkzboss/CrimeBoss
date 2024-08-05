#include "IGS_PlayerBotOverrideSettings.h"

FIGS_PlayerBotOverrideSettings::FIGS_PlayerBotOverrideSettings() {
    (*this).ForItemClass = EIGS_WieldableClass::T_UNKNOWN;
    (*this).PlayerBotSettings.CombatRange.Min = 5.000000000e+02f;
    (*this).PlayerBotSettings.CombatRange.Max = 1.200000000e+03f;
    (*this).PlayerBotSettings.ShotsToFire.Min = 2;
    (*this).PlayerBotSettings.ShotsToFire.Max = 10;
    (*this).PlayerBotSettings.ShotsToFireSpray.Min = 5;
    (*this).PlayerBotSettings.ShotsToFireSpray.Max = 12;
    (*this).PlayerBotSettings.AmmoUsedUntilReload.Min = 30;
    (*this).PlayerBotSettings.AmmoUsedUntilReload.Max = 40;
    (*this).PlayerBotSettings.AffterFireCooldown.Min = 5.000000000e-01f;
    (*this).PlayerBotSettings.AffterFireCooldown.Max = 2.000000000e+00f;
    (*this).PlayerBotSettings.AffterFireCooldownCover.Min = 1.500000000e+00f;
    (*this).PlayerBotSettings.AffterFireCooldownCover.Max = 3.000000000e+00f;
    (*this).PlayerBotSettings.CoverStickiness = 5.000000000e-01f;
    (*this).PlayerBotSettings.ReactionIntensity = 8.000000119e-01f;
}

