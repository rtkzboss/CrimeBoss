#include "IGS_PlayerBotTableRow.h"

FIGS_PlayerBotTableRow::FIGS_PlayerBotTableRow() {
    (*this).ID = nullptr;
    (*this).Data.DefaultSettings.CombatRange.Min = 5.000000000e+02f;
    (*this).Data.DefaultSettings.CombatRange.Max = 1.200000000e+03f;
    (*this).Data.DefaultSettings.ShotsToFire.Min = 2;
    (*this).Data.DefaultSettings.ShotsToFire.Max = 10;
    (*this).Data.DefaultSettings.ShotsToFireSpray.Min = 5;
    (*this).Data.DefaultSettings.ShotsToFireSpray.Max = 12;
    (*this).Data.DefaultSettings.AmmoUsedUntilReload.Min = 30;
    (*this).Data.DefaultSettings.AmmoUsedUntilReload.Max = 40;
    (*this).Data.DefaultSettings.AffterFireCooldown.Min = 5.000000000e-01f;
    (*this).Data.DefaultSettings.AffterFireCooldown.Max = 2.000000000e+00f;
    (*this).Data.DefaultSettings.AffterFireCooldownCover.Min = 1.500000000e+00f;
    (*this).Data.DefaultSettings.AffterFireCooldownCover.Max = 3.000000000e+00f;
    (*this).Data.DefaultSettings.CoverStickiness = 5.000000000e-01f;
    (*this).Data.DefaultSettings.ReactionIntensity = 8.000000119e-01f;
    auto& gen2104 = (*this).Data.OverridetSettings;
    gen2104.Empty();
}

