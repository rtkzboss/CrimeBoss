#include "IGS_ImpactItem.h"

FIGS_ImpactItem::FIGS_ImpactItem() {
    (*this).ID = nullptr;
    (*this).SoundSettings.AkAudioEventPath = nullptr;
    (*this).SoundSettings.SoundMaxLength = 1.000000000e+00f;
    (*this).SoundSettings.DistanceSpawn = 5.000000000e+00f;
    (*this).SoundSettings.bOverrideFallbackSettings = false;
    (*this).ParticleSettings.ParticleSystemPath = nullptr;
    (*this).ParticleSettings.NiagaraSystemPath = nullptr;
    (*this).ParticleSettings.ParticleDecalIDSoft = nullptr;
    (*this).ParticleSettings.DistanceSpawn = 5.000000000e+00f;
    (*this).ParticleSettings.bOverrideFallbackSettings = false;
    (*this).DecalSettings.DecalImpactDataPath = nullptr;
    (*this).DecalSettings.DistanceSpawn = 5.000000000e+00f;
    (*this).DecalSettings.bOverrideFallbackSettings = false;
    (*this).AkAudioEvent = nullptr;
    (*this).ParticleSystem = nullptr;
    (*this).NiagaraSystem = nullptr;
    (*this).ParticleDecalID = nullptr;
    (*this).DecalImpactData = nullptr;
}

