#include "IGS_ModTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_ModType.h"
#include "EIGS_ScopeType.h"

FIGS_ModTableRow::FIGS_ModTableRow() {
    (*this).ID = nullptr;
    (*this).Data.CompatibleWeapon = nullptr;
    (*this).Data.ModType = EIGS_ModType::Mod_VALID;
    (*this).Data.CommonModData.HolsterTimeMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.ADSTimeMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.HipFireSpreadMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.ADSSpreadMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.SpreadIncreasePerShotMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.MovementSpreadMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.VerticalRecoilMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.HorizontalRecoilMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.StabilityMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.BaseDamageMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.EffectiveRangeMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.MaxRangeMultiplier = 1.000000000e+00f;
    (*this).Data.CommonModData.RPMMultiplier = 1.000000000e+00f;
    (*this).Data.BarrelModData.IsSuppressor = false;
    (*this).Data.BarrelModData.MuzzleFlashStimuliMultiplier = 1.000000000e+00f;
    (*this).Data.BarrelModData.ShotSoundStimuliMultiplier = 1.000000000e+00f;
    (*this).Data.ScopeModData.IsDynamicScope = false;
    (*this).Data.ScopeModData.ScopeType = EIGS_ScopeType::Scope_Normal;
    auto& gen1948 = (*this).Data.ScopeModData.ScopeZoom;
    gen1948.Empty();
    gen1948.AddDefaulted(1);
    (*this).Data.ScopeModData.WeaponTortillaOffset.X = 0.000000000e+00f;
    (*this).Data.ScopeModData.WeaponTortillaOffset.Y = 0.000000000e+00f;
    (*this).Data.ScopeModData.WeaponTortillaOffset.Z = 0.000000000e+00f;
    (*this).Data.ScopeModData.WeaponTortillaAimFOV = 6.000000000e+01f;
    (*this).Data.ScopeModData.AimOffsetLocation.X = 0.000000000e+00f;
    (*this).Data.ScopeModData.AimOffsetLocation.Y = 0.000000000e+00f;
    (*this).Data.ScopeModData.AimOffsetLocation.Z = 0.000000000e+00f;
    (*this).Data.ScopeModData.AimOffsetRotation.X = 0.000000000e+00f;
    (*this).Data.ScopeModData.AimOffsetRotation.Y = 0.000000000e+00f;
    (*this).Data.ScopeModData.AimOffsetRotation.Z = 0.000000000e+00f;
    (*this).Data.ScopeModData.AttachOffsetVector.X = 0.000000000e+00f;
    (*this).Data.ScopeModData.AttachOffsetVector.Y = 0.000000000e+00f;
    (*this).Data.ScopeModData.AttachOffsetVector.Z = 0.000000000e+00f;
    (*this).Data.ScopeModData.ScopeInPercent = 8.000000119e-01f;
    (*this).Data.MagazineModData.ExtendedAmmoCount = 0;
    (*this).Data.MagazineModData.ExtendedReserveCount = 0;
    (*this).Data.MagazineModData.ReloadTimeMultiplier = 1.000000000e+00f;
    (*this).Data.VisibilityModData.IsFlashlight = false;
    (*this).Data.VisibilityModData.IsLaser = false;
    (*this).Data.ItemType = EIGS_ItemType::Item_UNKNOWN;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto& gen1949 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1949.Empty();
    auto& gen1950 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1950.Empty();
    auto& gen1951 = (*this).Data.GrantedAbilities;
    gen1951.Empty();
    auto& gen1952 = (*this).Data.AppliedEffects;
    gen1952.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1953 = (*this).Data.AdditionalPreloadClasses;
    gen1953.Empty();
    auto& gen1954 = (*this).Data.AdditionalPreloadObjects;
    gen1954.Empty();
}

