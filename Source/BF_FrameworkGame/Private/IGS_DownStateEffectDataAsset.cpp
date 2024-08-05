#include "IGS_DownStateEffectDataAsset.h"

UIGS_DownStateEffectDataAsset::UIGS_DownStateEffectDataAsset() {
    (*this).DownedEffectPostProcessInterface = nullptr;
    (*this).DyingEffectPostProcessInterface = nullptr;
    (*this).ReviveEffectPostProcessInterface = nullptr;
    (*this).DownedEffectWeightCurve = nullptr;
    (*this).DyingEffectWeightCurve = nullptr;
    (*this).ReviveEffectWeightCurve = nullptr;
    (*this).EffectBakerDownedAkAudioEvent = nullptr;
    (*this).EffectStartAkAudioEvent = nullptr;
    (*this).EffectStopAkAudioEvent = nullptr;
    (*this).EffectAkRtpc = nullptr;
    (*this).ReviveEffectDuration = 4.000000000e+00f;
}


