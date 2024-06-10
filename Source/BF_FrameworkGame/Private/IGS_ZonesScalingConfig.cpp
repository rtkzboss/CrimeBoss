#include "IGS_ZonesScalingConfig.h"

FIGS_ZonesScalingConfig::FIGS_ZonesScalingConfig() {
    auto& gen0 = (*this).ZonesScalingCurve.EditorCurveData.Keys;
    gen0.Empty();
    gen0.AddDefaulted(2);
    (*this).ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingCurve.ExternalCurve = nullptr;
}

