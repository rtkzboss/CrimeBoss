#include "IGS_FlashlightSettingsDataAsset.h"

UIGS_FlashlightSettingsDataAsset::UIGS_FlashlightSettingsDataAsset() {
    this->SpotIntensity = 10.00f;
    this->SpotAttenuationRadius = 900.00f;
    this->SpotOuterConeAngle = 45.00f;
    this->SpotTemperature = 4145.00f;
    this->SpotVolumetricScatteringIntensity = 0.05f;
    this->SpotLightFalloffExponent = 2.00f;
    this->SpotShadowBias = 0.15f;
    this->SpotShadowFilterSharpen = 0.10f;
    this->PointIntensity = 10.00f;
    this->PointAttenuationRadius = 900.00f;
    this->PointTemperature = 4145.00f;
    this->PointVolumetricScatteringIntensity = 0.05f;
    this->PointLightFalloffExponent = 2.00f;
    this->PointShadowBias = 0.15f;
    this->PointShadowFilterSharpen = 0.10f;
}


