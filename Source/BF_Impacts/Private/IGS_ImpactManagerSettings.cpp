#include "IGS_ImpactManagerSettings.h"

UIGS_ImpactManagerSettings::UIGS_ImpactManagerSettings() {
    (*this).GunshotSubUVs.Y = 5;
    (*this).SlashSubUVs.X = 6;
    (*this).SlashSubUVs.Y = 8;
    (*this).BluntSmallSubUVs.X = 9;
    (*this).BluntSmallSubUVs.Y = 11;
    (*this).BluntLargeSubUVs.X = 12;
    (*this).BluntLargeSubUVs.Y = 14;
    (*this).StabSubUVs.X = 15;
    (*this).StabSubUVs.Y = 15;
    (*this).SizeRange.X = 1.400000000e+01f;
    (*this).SizeRange.Y = 2.200000000e+01f;
    (*this).BloodSplatterDistance = 5.000000000e+02f;
    (*this).RotationRange.Y = 1.800000000e+02f;
    (*this).EnableImpactOptimizations = true;
    (*this).DefaultImpactPlayerMaxDistance = 5.000000000e+03f;
    (*this).RefreshImpactCountPoolRate = 1.000000015e-01f;
    (*this).EnableSoundImpactOptimizations = true;
    (*this).DefaultSoundImpactPlayerMaxDistance = 5.000000000e+03f;
    (*this).FootstepSoundImpactPlayerMaxDistance = 2.000000000e+03f;
    (*this).SoundImpactCountCap = 10;
    (*this).EnableParticleImpactOptimizations = true;
    (*this).DefaultParticleImpactPlayerMaxDistance = 5.000000000e+03f;
    (*this).ParticleImpactCountCap = 10;
    (*this).EnableDecalImpactOptimizations = true;
    (*this).DefaultDecalImpactPlayerMaxDistance = 5.000000000e+03f;
    (*this).DecalImpactCountCap = 10;
}


