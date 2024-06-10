#include "IGS_LowHealthEffectDataAsset.h"

UIGS_LowHealthEffectDataAsset::UIGS_LowHealthEffectDataAsset() {
    (*this).LowHealthPostProcessInterface = nullptr;
    (*this).LowHealthCurve = nullptr;
    (*this).EffectStartAkAudioEvent = nullptr;
    (*this).EffectStopAkAudioEvent = nullptr;
    (*this).EffectAkRtpc = nullptr;
    (*this).AbsoluteLowHealthThreshold = 1.200000000e+02f;
}


