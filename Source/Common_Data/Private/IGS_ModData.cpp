#include "IGS_ModData.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_ScopeType.h"

FIGS_ModData::FIGS_ModData() {
    (*this).CompatibleWeapon = nullptr;
    (*this).ModType = EIGS_ModType::Mod_VALID;
    (*this).ModMesh = nullptr;
    (*this).CommonModData.HolsterTimeMultiplier = 1.000000000e+00f;
    (*this).CommonModData.ADSTimeMultiplier = 1.000000000e+00f;
    (*this).CommonModData.HipFireSpreadMultiplier = 1.000000000e+00f;
    (*this).CommonModData.ADSSpreadMultiplier = 1.000000000e+00f;
    (*this).CommonModData.SpreadIncreasePerShotMultiplier = 1.000000000e+00f;
    (*this).CommonModData.MovementSpreadMultiplier = 1.000000000e+00f;
    (*this).CommonModData.VerticalRecoilMultiplier = 1.000000000e+00f;
    (*this).CommonModData.HorizontalRecoilMultiplier = 1.000000000e+00f;
    (*this).CommonModData.StabilityMultiplier = 1.000000000e+00f;
    (*this).CommonModData.BaseDamageMultiplier = 1.000000000e+00f;
    (*this).CommonModData.EffectiveRangeMultiplier = 1.000000000e+00f;
    (*this).CommonModData.MaxRangeMultiplier = 1.000000000e+00f;
    (*this).CommonModData.RPMMultiplier = 1.000000000e+00f;
    (*this).BarrelModData.IsSuppressor = false;
    (*this).BarrelModData.MuzzleFlashParticle = nullptr;
    (*this).BarrelModData.MuzzleFlashTortillaParticle = nullptr;
    (*this).BarrelModData.MuzzleFlashStimuliMultiplier = 1.000000000e+00f;
    (*this).BarrelModData.ShotSoundStimuliMultiplier = 1.000000000e+00f;
    (*this).ScopeModData.IsDynamicScope = false;
    (*this).ScopeModData.DynamicScopeMesh = nullptr;
    (*this).ScopeModData.ReticleMaterial = nullptr;
    (*this).ScopeModData.ReticleTortillaMaterial = nullptr;
    (*this).ScopeModData.ScopeType = EIGS_ScopeType::Scope_Normal;
    auto& gen0 = (*this).ScopeModData.ScopeZoom;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).ScopeModData.WeaponTortillaOffset.X = 0.000000000e+00f;
    (*this).ScopeModData.WeaponTortillaOffset.Y = 0.000000000e+00f;
    (*this).ScopeModData.WeaponTortillaOffset.Z = 0.000000000e+00f;
    (*this).ScopeModData.WeaponTortillaAimFOV = 6.000000000e+01f;
    (*this).ScopeModData.AimOffsetLocation.X = 0.000000000e+00f;
    (*this).ScopeModData.AimOffsetLocation.Y = 0.000000000e+00f;
    (*this).ScopeModData.AimOffsetLocation.Z = 0.000000000e+00f;
    (*this).ScopeModData.AimOffsetRotation.X = 0.000000000e+00f;
    (*this).ScopeModData.AimOffsetRotation.Y = 0.000000000e+00f;
    (*this).ScopeModData.AimOffsetRotation.Z = 0.000000000e+00f;
    (*this).ScopeModData.AttachOffsetVector.X = 0.000000000e+00f;
    (*this).ScopeModData.AttachOffsetVector.Y = 0.000000000e+00f;
    (*this).ScopeModData.AttachOffsetVector.Z = 0.000000000e+00f;
    (*this).ScopeModData.ScopeInPercent = 8.000000119e-01f;
    (*this).MagazineModData.ExtendedAmmoCount = 0;
    (*this).MagazineModData.ExtendedReserveCount = 0;
    (*this).MagazineModData.ReloadTimeMultiplier = 1.000000000e+00f;
    (*this).VisibilityModData.IsFlashlight = false;
    (*this).VisibilityModData.IsLaser = false;
}

