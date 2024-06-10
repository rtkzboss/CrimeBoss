#include "IGS_BulletBendingConfig.h"

FIGS_BulletBendingConfig::FIGS_BulletBendingConfig() {
    (*this).MinStartRadius = 4.500000000e+01f;
    (*this).MaxStartRadius = 4.500000000e+01f;
    (*this).MinFullPowerRadius = 3.000000000e+01f;
    (*this).MaxFullPowerRadius = 3.000000000e+01f;
    (*this).HipFireZoneScale = 1.000000000e+00f;
    (*this).bUseInterpolationCurve = true;
    auto& gen2418 = (*this).InterpolationCurve.EditorCurveData.Keys;
    gen2418.Empty();
    gen2418.AddDefaulted(2);
    (*this).InterpolationCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).InterpolationCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).InterpolationCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).InterpolationCurve.ExternalCurve = nullptr;
    (*this).bZonesScalingEnabled = false;
    auto& gen2419 = (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys;
    gen2419.Empty();
    gen2419.AddDefaulted(2);
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.ExternalCurve = nullptr;
}

