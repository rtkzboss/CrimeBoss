#include "META_RivalAttackMissionRowInfo.h"
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

FMETA_RivalAttackMissionRowInfo::FMETA_RivalAttackMissionRowInfo() {
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Picture = nullptr;
    (*this).MapIconOverride = nullptr;
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
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).FPSMissionInfo.SupportedLoot, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).FPSMissionInfo.SupportedLoot, 0)).Empty();
    (*this).FPSMissionInfo.TotalLootbagCount = -1;
    (*this).FPSMissionInfo.ForcedDetectivesCount = 0;
    (*this).FPSMissionInfo.StealthMode = EMETA_StealthMode::NotAvailable;
    (*this).FPSMissionInfo.bDownedCharctersSurvive = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockTag, 0)) = NAME_None;
}

