#include "IGS_SlowdownConfig.h"

FIGS_SlowdownConfig::FIGS_SlowdownConfig() {
    (*this).Radius = 7.000000000e+01f;
    (*this).MinMultiplier = 3.000000000e+00f;
    (*this).MaxMultiplier = 1.000000000e+00f;
    (*this).bUseStrengthCurve = true;
    auto& gen0 = (*this).SlowdownStrengthCurve.EditorCurveData.Keys;
    gen0.Empty();
    gen0.AddDefaulted(2);
    (*this).SlowdownStrengthCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).SlowdownStrengthCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).SlowdownStrengthCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).SlowdownStrengthCurve.ExternalCurve = nullptr;
    (*this).bZonesScalingEnabled = false;
    auto& gen1 = (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys;
    gen1.Empty();
    gen1.AddDefaulted(2);
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.ExternalCurve = nullptr;
}

