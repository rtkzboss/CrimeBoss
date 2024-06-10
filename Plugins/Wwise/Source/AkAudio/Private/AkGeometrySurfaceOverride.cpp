#include "AkGeometrySurfaceOverride.h"

FAkGeometrySurfaceOverride::FAkGeometrySurfaceOverride() {
    (*this).AcousticTexture = nullptr;
    (*this).bEnableOcclusionOverride = false;
    (*this).OcclusionValue = 1.000000000e+00f;
    (*this).SurfaceArea = 0.000000000e+00f;
}

