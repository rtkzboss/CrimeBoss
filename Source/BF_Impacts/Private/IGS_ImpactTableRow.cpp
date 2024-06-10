#include "IGS_ImpactTableRow.h"

FIGS_ImpactTableRow::FIGS_ImpactTableRow() {
    (*this).PhysicalMaterial = nullptr;
    (*this).FallBackItem.ID = nullptr;
    (*this).FallBackItem.SoundSettings.AkAudioEventPath = nullptr;
    (*this).FallBackItem.SoundSettings.SoundMaxLength = 1.000000000e+00f;
    (*this).FallBackItem.SoundSettings.DistanceSpawn = 5.000000000e+00f;
    (*this).FallBackItem.SoundSettings.bOverrideFallbackSettings = false;
    (*this).FallBackItem.ParticleSettings.ParticleSystemPath = nullptr;
    (*this).FallBackItem.ParticleSettings.NiagaraSystemPath = nullptr;
    (*this).FallBackItem.ParticleSettings.ParticleDecalIDSoft = nullptr;
    (*this).FallBackItem.ParticleSettings.DistanceSpawn = 5.000000000e+00f;
    (*this).FallBackItem.ParticleSettings.bOverrideFallbackSettings = false;
    (*this).FallBackItem.DecalSettings.DecalImpactDataPath = nullptr;
    (*this).FallBackItem.DecalSettings.DistanceSpawn = 5.000000000e+00f;
    (*this).FallBackItem.DecalSettings.bOverrideFallbackSettings = false;
    (*this).FallBackItem.AkAudioEvent = nullptr;
    (*this).FallBackItem.ParticleSystem = nullptr;
    (*this).FallBackItem.NiagaraSystem = nullptr;
    (*this).FallBackItem.ParticleDecalID = nullptr;
    (*this).FallBackItem.DecalImpactData = nullptr;
    (*this).ImpactItem.Empty();
}

