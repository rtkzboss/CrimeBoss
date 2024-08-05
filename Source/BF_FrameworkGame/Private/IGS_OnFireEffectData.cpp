#include "IGS_OnFireEffectData.h"

FIGS_OnFireEffectData::FIGS_OnFireEffectData() {
    (*this).EffectPostProcesses.Empty();
    (*this).WeightTimeCurve = nullptr;
    (*this).EffectDuration = 1.000000000e+00f;
    (*this).EffectStartAkAudioEvent = nullptr;
    (*this).EffectEndAkAudioEvent = nullptr;
}

