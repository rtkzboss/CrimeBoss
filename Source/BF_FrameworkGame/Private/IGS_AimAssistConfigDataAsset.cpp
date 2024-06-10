#include "IGS_AimAssistConfigDataAsset.h"

UIGS_AimAssistConfigDataAsset::UIGS_AimAssistConfigDataAsset() {
    (*this).UpdateTargetsRate = 2.000000030e-01f;
    (*this).AimAreaExtents.X = 5.000000000e+03f;
    (*this).AimAreaExtents.Y = 3.000000000e+02f;
    (*this).AimAreaExtents.Z = 3.000000000e+02f;
    (*this).bSlowdownEnabled = true;
    (*this).SlowdownConfig.Radius = 7.000000000e+01f;
    (*this).SlowdownConfig.MinMultiplier = 3.000000000e+00f;
    (*this).SlowdownConfig.MaxMultiplier = 1.000000000e+00f;
    (*this).SlowdownConfig.bUseStrengthCurve = true;
    auto& gen565 = (*this).SlowdownConfig.SlowdownStrengthCurve.EditorCurveData.Keys;
    gen565.Empty();
    gen565.AddDefaulted(2);
    (*this).SlowdownConfig.SlowdownStrengthCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).SlowdownConfig.SlowdownStrengthCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).SlowdownConfig.SlowdownStrengthCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    auto& gen566 = (*this).SlowdownConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys;
    gen566.Empty();
    gen566.AddDefaulted(2);
    (*this).SlowdownConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).SlowdownConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).SlowdownConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).bSoftLockEnabled = true;
    (*this).SoftLockConfig.SoftLockZoneRadius = 1.000000000e+02f;
    (*this).SoftLockConfig.MaxDistance = 1.500000000e+03f;
    (*this).SoftLockConfig.LockStrength = 6.000000238e-01f;
    (*this).SoftLockConfig.TimeWithoutStickInputToDisableSoftLock = 2.500000000e-01f;
    (*this).SoftLockConfig.StickInputDeadzoneForSoftLock = 1.000000015e-01f;
    (*this).SoftLockConfig.StrengthDecayStartPitch = 7.000000000e+01f;
    auto& gen567 = (*this).SoftLockConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys;
    gen567.Empty();
    gen567.AddDefaulted(2);
    (*this).SoftLockConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).SoftLockConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).SoftLockConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).bBulletBendingEnabled = true;
    (*this).BulletBendingConfig.MinStartRadius = 4.500000000e+01f;
    (*this).BulletBendingConfig.MaxStartRadius = 4.500000000e+01f;
    (*this).BulletBendingConfig.MinFullPowerRadius = 3.000000000e+01f;
    (*this).BulletBendingConfig.MaxFullPowerRadius = 3.000000000e+01f;
    (*this).BulletBendingConfig.HipFireZoneScale = 1.000000000e+00f;
    (*this).BulletBendingConfig.bUseInterpolationCurve = true;
    auto& gen568 = (*this).BulletBendingConfig.InterpolationCurve.EditorCurveData.Keys;
    gen568.Empty();
    gen568.AddDefaulted(2);
    (*this).BulletBendingConfig.InterpolationCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).BulletBendingConfig.InterpolationCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).BulletBendingConfig.InterpolationCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    auto& gen569 = (*this).BulletBendingConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys;
    gen569.Empty();
    gen569.AddDefaulted(2);
    (*this).BulletBendingConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).BulletBendingConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).BulletBendingConfig.ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
}


