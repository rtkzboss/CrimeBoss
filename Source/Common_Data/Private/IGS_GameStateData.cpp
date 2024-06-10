#include "IGS_GameStateData.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_ObjectiveRevivesCalculation.h"
#include "EMETA_ObjectiveType.h"

FIGS_GameStateData::FIGS_GameStateData() {
    (*this).Heisters.Empty();
    (*this).StartupSource = EIGS_MissionStartupSource::Editor;
    (*this).MissionSubtype = TEXT("");
    (*this).QPModeSource = EIGS_QPModeSource::INVALID;
    (*this).MPLobbyType = EIGS_MPLobbyType::Normal;
    (*this).LobbyVisibility = EMETA_LobbyVisibilityType::Private;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionScenario, 0)) = NAME_None;
    (*this).MissionType = EIGS_HubScenarioType::Empty;
    (*this).TileEnvironment = EIGS_TileEnviroment::None;
    (*this).HubDistrict = EIGS_HubDistrict::Downtown;
    (*this).HubVariant = EIGS_HubBackdropTypes::AllRandom;
    (*this).LightingScenario = EIGS_LightingScenarioType::Midday;
    (*this).Heat = EMETA_Heat::Medium;
    (*this).WantedBadges = 0;
    (*this).UserDifficulty = EIGS_UserDifficulty::UD_Medium;
    (*this).ScenarioDifficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).FPSDifficulty = EIGS_FPSDifficulty::FD_Normal;
    (*this).StartMusic = EIGS_MusicMissionState::None;
    (*this).PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).PrimaryEnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).SecondaryEnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).SWATVariation = EIGS_SWATVariationType::US_SWAT;
    (*this).SWATTier = EIGS_AITiers::AT_Tier1;
    (*this).AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).AllyTier = EIGS_AITiers::AT_Tier1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BonusObjectiveData.ID, 0)) = NAME_None;
    (*this).BonusObjectiveData.Config.ShorDescription = FText::FromString(TEXT(""));
    (*this).BonusObjectiveData.Config.Description = FText::FromString(TEXT(""));
    (*this).BonusObjectiveData.Config.ObjectiveType = EMETA_ObjectiveType::None;
    (*this).BonusObjectiveData.Config.Amount = -1;
    (*this).BonusObjectiveData.Config.RevivesAmount = 0;
    (*this).BonusObjectiveData.Config.RevivesCalculation = EMETA_ObjectiveRevivesCalculation::AccumulateForAll;
    (*this).BonusObjectiveData.Config.RetrieveLootInPercents = 0;
    (*this).BonusObjectiveData.Config.MaximumAmountOfStrikes = 0;
    (*this).BonusObjectiveData.Config.ZiptieXCivilians = 0;
    (*this).BonusObjectiveData.Config.DontReachXPoliceStars = 0;
    (*this).BonusObjectiveData.Config.MaxAmountOfUsedHeisters = 0;
    (*this).BonusObjectiveData.Config.HeistersShouldSurvive = false;
    (*this).BonusObjectiveData.Config.UniqueHeisterID = EIGS_CharacterID::Char_Unknown;
    (*this).BonusObjectiveData.Config.UniqueHeisterShouldSurvive = false;
    (*this).BonusObjectiveData.Config.Seconds = 0;
    (*this).BonusObjectiveData.Config.EnemiesAmount = 0;
    (*this).BonusObjectiveData.Config.GangstersAmount = 0;
    (*this).BonusObjectiveData.Config.PoliceKills = 0;
    (*this).BonusObjectiveData.Config.SWATKills = 0;
    (*this).BonusObjectiveData.Config.GeneralAmountOfKills = 0;
    (*this).BonusObjectiveData.Config.KillsAmountOperator = EMETA_ConditionOperator::GreaterOrEqual;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BonusObjectiveData.Config.OutputParamTag, 0)) = NAME_None;
    (*this).BonusObjectiveData.Config.OutputParamValue = 0;
    (*this).BonusObjectiveData.Config.OutputParamOperator = EMETA_ConditionOperator::GreaterOrEqual;
    (*this).BonusObjectiveData.Config.DaysToComplete = 1;
    (*this).BonusObjectiveData.Config.ShowInFPS = true;
    (*this).MetaBonuses.ArmyPerkData.Empty();
    (*this).IntelLevel = -1;
    (*this).ExpectedPlayerCount = -1;
    (*this).MissionName = FText::FromString(TEXT(""));
    (*this).TotalMissionValue = 0;
    (*this).ObjectiveValue = 0;
    (*this).TotalLootbagCount = -1;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).SpecificLootTypes, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).SpecificLootTypes, 0)).Empty();
    (*this).SpecialLoot.Loot.Empty();
    (*this).SpecialLoot.Money = 0;
    (*this).SpecialLoot.bIsFilled = false;
    (*this).Respect = EMETA_RespectLvl::Low;
    (*this).ProgressionLevel = 1;
    (*this).IsChainMission = false;
    (*this).bIsInited = false;
    (*this).bDataMarkedFinal = false;
    (*this).NeedObjectiveCompletion = false;
    (*this).bDownedCharctersSurvive = false;
    (*this).bIsDebug = false;
    (*this).DebugTile = TEXT("");
    (*this).DebugPreset = TEXT("");
    (*this).CiviliansAmountOverride = -1;
}

