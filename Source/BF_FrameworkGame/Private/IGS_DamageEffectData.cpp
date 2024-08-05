#include "IGS_DamageEffectData.h"

FIGS_DamageEffectData::FIGS_DamageEffectData() {
    (*this).EffectPostProcess = nullptr;
    (*this).HitAkAudioEvent = nullptr;
    (*this).HitPowerMultiplier = 1.000000000e+00f;
    (*this).EffectDuration = 1.000000000e+00f;
    (*this).MinimalEffectDamage = 1.000000000e+00f;
    (*this).MaximumEffectDamage = 5.000000000e+01f;
}

