#include "IGS_ImpactDevSettings.h"

UIGS_ImpactDevSettings::UIGS_ImpactDevSettings() {
    (*this).ShotImpactsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Impacts/Shot/DT_ShotImpacts.DT_ShotImpacts"), TEXT(""));
    (*this).FootstepImpactsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Impacts/Footsteps/DT_FootstepImpacts.DT_FootstepImpacts"), TEXT(""));
    (*this).MeleeImpactsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Impacts/Melee/DT_MeleeImpacts.DT_MeleeImpacts"), TEXT(""));
    (*this).DestroyImpactsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Impacts/Destroy/DT_DestroyImpacts.DT_DestroyImpacts"), TEXT(""));
    (*this).HitImpactsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Impacts/Hit/DT_HitImpacts.DT_HitImpacts"), TEXT(""));
    (*this).ImpactManagerSettingsDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Impacts/DA_ImpactManagerSettings.DA_ImpactManagerSettings"), TEXT(""));
}


