#include "IGS_Common_DataDevSettings_Misc.h"

UIGS_Common_DataDevSettings_Misc::UIGS_Common_DataDevSettings_Misc() {
    (*this).InvalidMaterialGray = nullptr;
    (*this).InvalidMaterialPink = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/M_InvalidPink.M_InvalidPink"), TEXT(""));
    (*this).AssetsPreloaderDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_AssetsPreloaderDatabase.DT_AssetsPreloaderDatabase"), TEXT(""));
    (*this).EntitlementItemsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_EntitlementItemsDatabase.DT_EntitlementItemsDatabase"), TEXT(""));
    (*this).PerksDataTable = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Effects/Perks/DT_PerkDatabase.DT_PerkDatabase"), TEXT(""));
    (*this).ClassDataTable = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Effects/Classes/DT_ClassDatabase.DT_ClassDatabase"), TEXT(""));
    (*this).InitAbilityChargesEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_InitAbilityCharges.GE_InitAbilityCharges_C"), TEXT(""));
    (*this).AddAbilityChargesEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_AddAbilityCharges.GE_AddAbilityCharges_C"), TEXT(""));
    (*this).FPSDifficultyDA = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DA_FPSDifficulty.DA_FPSDifficulty"), TEXT(""));
}


