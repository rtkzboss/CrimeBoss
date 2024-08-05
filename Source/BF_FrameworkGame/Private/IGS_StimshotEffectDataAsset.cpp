#include "IGS_StimshotEffectDataAsset.h"

UIGS_StimshotEffectDataAsset::UIGS_StimshotEffectDataAsset() {
    (*this).CombatStimshotPostProcessInterface = nullptr;
    (*this).CombatStimshotStartPostProcessInterface = nullptr;
    (*this).StaminaStimshotPostProcessInterface = nullptr;
    (*this).StaminaStimshotStartPostProcessInterface = nullptr;
    (*this).StimshotStartWeightCurve = nullptr;
    (*this).StimshotEndAkAudioEvent = nullptr;
    (*this).EffectFadeDuration = 1.000000000e+00f;
    (*this).EffectStartDuration = 1.000000000e+00f;
}


