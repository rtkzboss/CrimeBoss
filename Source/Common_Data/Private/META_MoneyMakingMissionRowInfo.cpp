#include "META_MoneyMakingMissionRowInfo.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_Heat.h"
#include "EMETA_StealthMode.h"

FMETA_MoneyMakingMissionRowInfo::FMETA_MoneyMakingMissionRowInfo() {
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    auto& gen1933 = (*this).WeaponsRequired;
    gen1933.Empty();
    auto& gen1934 = (*this).CharactersRequired;
    gen1934.Empty();
    auto& gen1935 = (*this).CharactersRequiredButNotOwned;
    gen1935.Empty();
    auto& gen1936 = (*this).ResultsWhenJobIsNotRemovedFromTheMap;
    gen1936.Empty();
    (*this).FPSMissionInfo.FPSMissionID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FPSMissionInfo.Scenario, 0)) = NAME_None;
    (*this).FPSMissionInfo.LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).FPSMissionInfo.BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).FPSMissionInfo.TileEnviroment = EIGS_TileEnviroment::None;
    (*this).FPSMissionInfo.NeedObjectiveCompletion = false;
    (*this).FPSMissionInfo.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).FPSMissionInfo.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).FPSMissionInfo.SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).FPSMissionInfo.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).FPSMissionInfo.bForceEnemyTier = false;
    (*this).FPSMissionInfo.EnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).FPSMissionInfo.bForceSWATTier = false;
    (*this).FPSMissionInfo.SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).FPSMissionInfo.bForceAllyTier = false;
    (*this).FPSMissionInfo.AllyTier = EIGS_AITiers::AT_Tier1;
    (*this).FPSMissionInfo.bForceDifficulty = false;
    (*this).FPSMissionInfo.Difficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).FPSMissionInfo.bForceHeat = false;
    (*this).FPSMissionInfo.bMinimalHeatOnly = false;
    (*this).FPSMissionInfo.Heat = EMETA_Heat::Medium;
    auto& gen1937 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).FPSMissionInfo.SupportedLoot, 0));
    gen1937.Empty();
    auto& gen1938 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).FPSMissionInfo.SupportedLoot, 0));
    gen1938.Empty();
    (*this).FPSMissionInfo.TotalLootbagCount = -1;
    (*this).FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).FPSMissionInfo.bDownedCharctersSurvive = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    auto& gen1939 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).LootType, 0));
    gen1939.Empty();
    auto& gen1940 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).LootType, 0));
    gen1940.Empty();
    auto& gen1941 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0));
    gen1941.Empty();
    auto& gen1942 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionTypeTags, 0));
    gen1942.Empty();
}

