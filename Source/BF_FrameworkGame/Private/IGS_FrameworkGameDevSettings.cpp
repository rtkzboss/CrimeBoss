#include "IGS_FrameworkGameDevSettings.h"

UIGS_FrameworkGameDevSettings::UIGS_FrameworkGameDevSettings() {
    (*this).AmmoBoxDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/AmmoPickup/DT_AmmoPickupData.DT_AmmoPickupData"), TEXT(""));
    (*this).AmmoBoxSpawnDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/AmmoPickup/DT_AmmoPickupSpawn.DT_AmmoPickupSpawn"), TEXT(""));
    (*this).WeaponPlaceholderForceFeedback = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/_Common/FFE_WeaponBase.FFE_WeaponBase"), TEXT(""));
    (*this).PlayerSettingsCurveTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Characters/CT_PlayerSettings.CT_PlayerSettings"), TEXT(""));
    (*this).KillConfirmedParticleClass = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Impacts/Shot/ID/BP_ImpactShot_KillConfirmed.BP_ImpactShot_KillConfirmed_C"), TEXT(""));
    (*this).FallDamageCurve = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Curve_FallDamage_Float.Curve_FallDamage_Float"), TEXT(""));
    (*this).FallDamageType = FSoftObjectPath(TEXT("/Game/00_Main/Core/DamageTypes/BP_DT_FallDamage.BP_DT_FallDamage_C"), TEXT(""));
    (*this).BodyBagCarryableClass = FSoftObjectPath(TEXT("/Game/00_Main/Carryables/Objects/BP_Carryable_BodyBag.BP_Carryable_BodyBag_C"), TEXT(""));
    (*this).PickupClassesData = FSoftObjectPath(TEXT("/Game/00_Main/Pickups/DA_PickupClassesData.DA_PickupClassesData"), TEXT(""));
    (*this).DefaultArmsClass = FSoftObjectPath(TEXT("/Game/00_Main/Core/Player/Arms/BP_Arms_Fallback.BP_Arms_Fallback_C"), TEXT(""));
    (*this).StealthSettingsDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Stealth/DA_StealthSettings.DA_StealthSettings"), TEXT(""));
    (*this).StealthVoiceoversDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Stealth/DA_StealthVoiceovers.DA_StealthVoiceovers"), TEXT(""));
    (*this).OffenceTablesDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Stealth/DA_OffenceTables.DA_OffenceTables"), TEXT(""));
}


