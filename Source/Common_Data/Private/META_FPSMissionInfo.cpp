#include "META_FPSMissionInfo.h"

FMETA_FPSMissionInfo::FMETA_FPSMissionInfo() {
    (*this).FPSMissionID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Scenario, 0)) = NAME_None;
    (*this).LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).TileEnviroment = EIGS_TileEnviroment::None;
    (*this).NeedObjectiveCompletion = false;
    (*this).PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).bForceEnemyTier = false;
    (*this).EnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).bForceSWATTier = false;
    (*this).SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).bForceAllyTier = false;
    (*this).AllyTier = EIGS_AITiers::AT_Tier1;
    (*this).bForceDifficulty = false;
    (*this).Difficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).bForceHeat = false;
    (*this).bMinimalHeatOnly = false;
    (*this).Heat = EMETA_Heat::Medium;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).SupportedLoot, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).SupportedLoot, 0)).Empty();
    (*this).TotalLootbagCount = -1;
    (*this).ForcedDetectivesCount = 0;
    (*this).StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).bDownedCharctersSurvive = false;
}

