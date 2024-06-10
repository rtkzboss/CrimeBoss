#include "IGS_PlayerBotItemsData.h"

FIGS_PlayerBotItemsData::FIGS_PlayerBotItemsData() {
    (*this).DefaultSettings.CombatRange.Min = 5.000000000e+02f;
    (*this).DefaultSettings.CombatRange.Max = 1.200000000e+03f;
    (*this).DefaultSettings.ShotsToFire.Min = 2;
    (*this).DefaultSettings.ShotsToFire.Max = 10;
    (*this).DefaultSettings.ShotsToFireSpray.Min = 5;
    (*this).DefaultSettings.ShotsToFireSpray.Max = 12;
    (*this).DefaultSettings.AmmoUsedUntilReload.Min = 30;
    (*this).DefaultSettings.AmmoUsedUntilReload.Max = 40;
    (*this).DefaultSettings.AffterFireCooldown.Min = 5.000000000e-01f;
    (*this).DefaultSettings.AffterFireCooldown.Max = 2.000000000e+00f;
    (*this).DefaultSettings.AffterFireCooldownCover.Min = 1.500000000e+00f;
    (*this).DefaultSettings.AffterFireCooldownCover.Max = 3.000000000e+00f;
    (*this).DefaultSettings.CoverStickiness = 5.000000000e-01f;
    (*this).DefaultSettings.ReactionIntensity = 8.000000119e-01f;
    auto& gen2105 = (*this).OverridetSettings;
    gen2105.Empty();
}

