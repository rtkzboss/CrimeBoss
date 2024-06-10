#include "IGS_RainOnCameraEffectData.h"

FIGS_RainOnCameraEffectData::FIGS_RainOnCameraEffectData() {
    (*this).RainOnCameraDryingUpDuration = 4.000000000e+00f;
    (*this).StartDryingUpAfter = 4.000000000e+00f;
    (*this).DownpourStopDuration = 1.000000000e+00f;
    (*this).RainOnCameraExteriorReactionSpeed = 8.000000119e-01f;
    (*this).ShortWhileOutside = 4.000000000e+00f;
    (*this).RainOnCameraExterior = nullptr;
    (*this).RainOnCameraInterior = nullptr;
}

