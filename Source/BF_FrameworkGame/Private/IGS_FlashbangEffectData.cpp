#include "IGS_FlashbangEffectData.h"

FIGS_FlashbangEffectData::FIGS_FlashbangEffectData() {
    (*this).EffectPostProcesses.Empty();
    (*this).WeightTimeCurve = nullptr;
    (*this).EffectDuration = 1.000000000e+00f;
    (*this).EffectAkAudioEvent = nullptr;
    (*this).FlashbangEffectAkRtpc = nullptr;
    (*this).StunnedElectricStartAkAudioEvent = nullptr;
    (*this).StunnedElectricStopAkAudioEvent = nullptr;
    (*this).StunnedStartAkAudioEvent = nullptr;
    (*this).StunnedStopAkAudioEvent = nullptr;
    (*this).ExplosionAroundPlayerPowerTrigger.X = 3.000000119e-01f;
    (*this).ExplosionAroundPlayerPowerTrigger.Y = 6.999999881e-01f;
    (*this).StunnedEffect = nullptr;
    (*this).StunnedEffectDuration = 1.000000000e+00f;
    (*this).StunnedElectricEffect = nullptr;
    (*this).StunnedElectricEffectDuration = 1.000000000e+00f;
}

