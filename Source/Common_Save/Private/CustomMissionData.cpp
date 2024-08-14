#include "CustomMissionData.h"
#include "EIGS_MissionStartupSource.h"
#include "EIGS_QPModeSource.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_ChainType.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_TileEnviroment.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"

FCustomMissionData::FCustomMissionData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionData.MissionTag, 0)) = NAME_None;
    (*this).MissionData.MapName = TEXT("");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionData.MissionScenario, 0)) = NAME_None;
    (*this).MissionData.TileEnvironment = EIGS_TileEnviroment::None;
    (*this).MissionData.HubDistrict = EIGS_HubDistrict::Downtown;
    (*this).MissionData.HubVariant = EIGS_HubBackdropTypes::AllRandom;
    (*this).MissionData.LightingScenario = EIGS_LightingScenarioType::Sunset;
    (*this).MissionData.ScenarioDifficulty = EIGS_ScenarioDifficulty::SD_MediumForce;
    (*this).MissionData.FPSDifficulty = EIGS_FPSDifficulty::FD_Normal;
    (*this).MissionData.Heat = EMETA_Heat::Medium;
    (*this).MissionData.WantedBadges = 0;
    (*this).MissionData.IntelLevel = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionData.BonusObjectiveID, 0)) = NAME_None;
    (*this).MissionData.SupportsCleanExecution = false;
    (*this).MissionData.StartMusic = EIGS_MusicMissionState::None;
    (*this).MissionData.StartupSource = EIGS_MissionStartupSource::INVALID;
    (*this).MissionData.MissionSubtype = TEXT("");
    (*this).MissionData.QPModeSource = EIGS_QPModeSource::INVALID;
    (*this).MissionData.MissionName = FText::FromString(TEXT(""));
    (*this).MissionData.ObjectiveValue = 0;
    (*this).MissionData.TotalMissionValue = 0;
    (*this).MissionData.TotalLootbagCount = -1;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionData.SpecificLootTypes, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionData.SpecificLootTypes, 0)).Empty();
    (*this).MissionData.SpecialLoot.Loot.Empty();
    (*this).MissionData.SpecialLoot.Money = 0;
    (*this).MissionData.SpecialLoot.bIsFilled = false;
    (*this).MissionData.Respect = EMETA_RespectLvl::Connected;
    (*this).MissionData.IsChainMission = false;
    (*this).MissionData.ChainType = EIGS_ChainType::Unknown;
    (*this).MissionData.PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).MissionData.PrimaryEnemyTier = EIGS_AITiers::AT_Tier1;
    (*this).MissionData.SecondaryEnemyVariation = EIGS_GangsterVariationType::US_Sicarios;
    (*this).MissionData.SecondaryEnemyTier = EIGS_AITiers::AT_Tier2;
    (*this).MissionData.SWATVariation = EIGS_SWATVariationType::US_SWAT;
    (*this).MissionData.SWATTier = EIGS_AITiers::AT_Tier2;
    (*this).MissionData.AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    (*this).MissionData.AllyTier = EIGS_AITiers::AT_Tier2;
    (*this).MissionData.ExpectedPlayerCount = -1;
    (*this).MissionData.MetaBonuses.ArmyPerkData.Empty();
    (*this).MissionData.ObjectivePercentage = 50;
    (*this).MissionData.NeedObjectiveCompletion = false;
    (*this).MissionData.bDownedCharctersSurvive = false;
    (*this).MissionData.CiviliansAmountOverride = -1;
    (*this).MissionData.bIsDebug = false;
    (*this).MissionData.bIsFilled = false;
    (*this).CommonMissionData.ID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CommonMissionData.MissionTagID, 0)) = NAME_None;
    (*this).CommonMissionData.Map = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).CommonMissionData.Scenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).CommonMissionData.Scenarios, 0)).Empty();
    (*this).CommonMissionData.MenuCategory = EIGS_MenuCategory::UNKNOWN;
    (*this).CommonMissionData.Name = FText::FromString(TEXT(""));
    (*this).CommonMissionData.IsHubGeneratorMission = false;
    (*this).CommonMissionData.DistrictVariant = 0;
    (*this).CommonMissionData.ForceCharacter = EIGS_CharacterID::Char_Gen_Start;
    (*this).DistrictVariant = EIGS_HubBackdropTypes::AllRandom;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Scenario, 0)) = NAME_None;
    (*this).LightingScenario = EIGS_LightingScenarioType::Midday;
    (*this).Seed = TEXT("");
    (*this).DebugOptions = TEXT("");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedCharacter.TagID, 0)) = NAME_None;
    (*this).SelectedCharacter.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).SelectedCharacter.UniqGenericId = -1;
    (*this).SelectedCharacter.GenericVariantID = -1;
    (*this).SelectedCharacter.CharacterName = FText::FromString(TEXT(""));
    (*this).SelectedCharacter.bIsMaxLeveled = false;
    (*this).SelectedCharacter.HeisterNumber = -1;
    (*this).SelectedCharacter.PlayerId = -1;
    (*this).SelectedCharacter.ProgressionLevel = 1;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).SelectedCharacter.UniquePlayerId, 0)).Empty();
    (*this).SelectedCharacter.Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedCharacter.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).SelectedCharacter.Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedCharacter.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).SelectedCharacter.Loadout.Equipment.Empty();
    (*this).SelectedCharacter.Loadout.Perks.Empty();
    (*this).SelectedCharacter.Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedCharacter.Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).SelectedCharacter.Experience = 0;
    (*this).SelectedCharacter.Injuries = 0;
    (*this).SelectedCharacter.CharacterState = EMETA_CharacterState::None;
    (*this).SelectedCharacter.IsBot = false;
    (*this).SelectedCharacter.bUseCustomLoadout = false;
    (*this).SelectedCharacter.bComesFromMeta = false;
    (*this).SelectedCharacter.MissionStats.Kills = -1;
    (*this).SelectedCharacter.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).SelectedCharacter.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).SelectedCharacter.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).SelectedCharacter.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).SelectedCharacter.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).SelectedCharacter.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).SelectedCharacter.MutableVariationIndex = -1;
    (*this).SelectedCharacter.MissionCutPercentWithModifiers = 0;
    (*this).SelectedCharacter.CachedPlayerName = FText::FromString(TEXT(""));
    (*this).AmountOfBots = 0;
    (*this).SpecificBotIDs.Empty();
    (*this).Heat = EMETA_Heat::INVALID;
    (*this).MissionType = EIGS_MenuCategory::UNKNOWN;
    (*this).MissionDifficulty = EIGS_ScenarioDifficulty::SD_Unknown;
}

