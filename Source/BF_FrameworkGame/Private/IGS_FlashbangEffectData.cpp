#include "IGS_FlashbangEffectData.h"

FIGS_FlashbangEffectData::FIGS_FlashbangEffectData() {
    auto& gen2667 = (*this).EffectPostProcesses;
    gen2667.Empty();
    (*this).EffectDuration = 1.000000000e+00f;
    (*this).ExplosionAroundPlayerPowerTrigger.X = 3.000000119e-01f;
    (*this).ExplosionAroundPlayerPowerTrigger.Y = 6.999999881e-01f;
    (*this).StunnedEffectDuration = 1.000000000e+00f;
    (*this).StunnedElectricEffectDuration = 1.000000000e+00f;
}

