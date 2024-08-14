#include "IGS_ExtraFireModeDefinition.h"

FIGS_ExtraFireModeDefinition::FIGS_ExtraFireModeDefinition() {
    (*this).Attack.ProjectileClass = nullptr;
    (*this).Attack.BaseDamage = 1.000000000e+02f;
    (*this).Attack.EffectiveRange = 3.000000000e+04f;
    (*this).Attack.MaxRange = 5.000000000e+04f;
    (*this).Attack.MinDamageMultiplier = 5.000000000e-01f;
    (*this).Attack.RoundsPerMinute = 6.000000000e+02f;
    (*this).Attack.SemiAutoDelay = 1.000000015e-01f;
    (*this).Attack.BurstDelay = 2.000000030e-01f;
    (*this).Attack.ProjectilesPerShot = 1;
    (*this).Attack.ShooterTypes = 0;
    (*this).Accuracy.HipFireSpread.X = 2.000000030e-01f;
    (*this).Accuracy.HipFireSpread.Y = 4.000000000e+00f;
    (*this).Accuracy.ADSSpread.X = 0.000000000e+00f;
    (*this).Accuracy.ADSSpread.Y = 2.000000000e+00f;
    (*this).Accuracy.SpreadFallTime = 2.500000000e-01f;
    (*this).Accuracy.SpreadPerShot = 5.000000000e-01f;
    (*this).Accuracy.ADSIdleSway = 1.000000000e+00f;
    (*this).Accuracy.Multipliers.CrouchMult = 8.000000119e-01f;
    (*this).Accuracy.Multipliers.MovementMult = 1.200000048e+00f;
    (*this).Accuracy.Multipliers.JumpMult = 1.500000000e+00f;
    (*this).Recoil.Vertical.X = 3.000000119e-01f;
    (*this).Recoil.Vertical.Y = 5.000000000e-01f;
    (*this).Recoil.Horizontal.X = -1.000000015e-01f;
    (*this).Recoil.Horizontal.Y = 1.000000015e-01f;
    (*this).Recoil.RecoilPitchReturnRatio = 1.000000000e+00f;
    (*this).Recoil.VerticalRecoilDecay = 5.000000000e-01f;
    (*this).Ammo.AmmoObject = nullptr;
    (*this).Ammo.MagazineCapacity = 30;
    (*this).Ammo.ReserveCapacity = 300;
    (*this).Ammo.AmmoCostPerShot = 1;
    (*this).Animations.NoCombatEmptyReloadTime = 1.000000000e+00f;
    (*this).Animations.EmptyReloadTime = 1.000000000e+00f;
    (*this).Animations.NoCombatReloadTime = 1.000000000e+00f;
    (*this).Animations.ReloadTime = 1.000000000e+00f;
    (*this).Animations.ADSInSpeedMult = 1.000000000e+00f;
    (*this).Animations.ADSOutSpeedMult = 1.000000000e+00f;
    (*this).Animations.ScopeInPercent = 8.000000119e-01f;
    (*this).Animations.ADSMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Offences.ShotLoudness = 1.000000000e+00f;
    (*this).Offences.ImpactLoudness = 3.000000119e-01f;
    (*this).Offences.FireOffenceDelay = 2.000000000e+00f;
    (*this).AdaptiveTriggers.FeedbackMode.OverrideEnabled = false;
    (*this).AdaptiveTriggers.FeedbackMode.Position = 0;
    (*this).AdaptiveTriggers.FeedbackMode.Strength = 0;
    (*this).AdaptiveTriggers.WeaponMode.OverrideEnabled = false;
    (*this).AdaptiveTriggers.WeaponMode.StartPosition = 2;
    (*this).AdaptiveTriggers.WeaponMode.EndPosition = 2;
    (*this).AdaptiveTriggers.WeaponMode.Strength = 0;
    (*this).AdaptiveTriggers.VibrationMode.OverrideEnabled = false;
    (*this).AdaptiveTriggers.VibrationMode.Position = 0;
    (*this).AdaptiveTriggers.VibrationMode.Frequency = 0;
    (*this).AdaptiveTriggers.VibrationMode.Amplitude = 0;
}

