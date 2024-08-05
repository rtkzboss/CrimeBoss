#include "IGS_SaveData_Account.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"

FIGS_SaveData_Account::FIGS_SaveData_Account() {
    (*this).AccountName = FText::FromString(TEXT("Default Account Name"));
    (*this).bDebug = false;
    (*this).bReadEULA = false;
    (*this).bReadSaveWarning = false;
    (*this).bFirstCrimeTime = true;
    (*this).bCheckedVeteranPlayer = false;
    (*this).bIsVeteranPlayer = false;
    (*this).bSeenProgressionReset = false;
    (*this).bWantedProgressionResetCompensation = false;
    (*this).UnlockedCharactersAccWide.Empty();
    (*this).TimePlayed = 0.000000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).QuickPlayPreferences.PlayerHeisterData.TagID, 0)) = NAME_None;
    (*this).QuickPlayPreferences.PlayerHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).QuickPlayPreferences.PlayerHeisterData.UniqGenericId = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.GenericVariantID = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.CharacterName = FText::FromString(TEXT(""));
    (*this).QuickPlayPreferences.PlayerHeisterData.bIsMaxLeveled = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.HeisterNumber = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.PlayerId = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.ProgressionLevel = 1;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).QuickPlayPreferences.PlayerHeisterData.UniquePlayerId, 0)).Empty();
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).QuickPlayPreferences.PlayerHeisterData.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).QuickPlayPreferences.PlayerHeisterData.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.Equipment.Empty();
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.Perks.Empty();
    (*this).QuickPlayPreferences.PlayerHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).QuickPlayPreferences.PlayerHeisterData.Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).QuickPlayPreferences.PlayerHeisterData.Experience = 0;
    (*this).QuickPlayPreferences.PlayerHeisterData.Injuries = 0;
    (*this).QuickPlayPreferences.PlayerHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).QuickPlayPreferences.PlayerHeisterData.IsBot = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.bUseCustomLoadout = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.bComesFromMeta = false;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.Kills = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).QuickPlayPreferences.PlayerHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).QuickPlayPreferences.PlayerHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).QuickPlayPreferences.PlayerHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).QuickPlayPreferences.PlayerHeisterData.MutableVariationIndex = -1;
    (*this).QuickPlayPreferences.PlayerHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).QuickPlayPreferences.PlayerHeisterData.CachedPlayerName = FText::FromString(TEXT(""));
    (*this).QuickPlayPreferences.bKeepCustomizedLoadout = false;
    (*this).PendingUnlockRewards.Empty();
    (*this).BossLevelData.CurrentBossLevel = 0;
    (*this).BossLevelData.MaxBossPointsToNextLevel = 0;
    (*this).BossLevelData.AccumulatedBossPointsToNextLevel = 0.000000000e+00f;
    (*this).BossLevelData.PreparedBonuses.Empty();
    (*this).BossLevelData.RemainingLvlUps = 0;
    (*this).BossLevelData.LastSeenLvlUpScreen = 1;
    (*this).CityMapData.LastPlayerTileGroupIndex = 0;
    (*this).CityMapData.LastPlayerInitialTileGroup.Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MetaPersistentAssetData, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MetaPersistentAssetData, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MetaMenuActiveTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MetaMenuActiveTags, 0)).Empty();
    (*this).CurrentChainMissionID = nullptr;
    (*this).Achievements.Empty();
    (*this).PreviousSession.SessionId = TEXT("");
    (*this).PreviousSession.MissionID.A = 0;
    (*this).PreviousSession.MissionID.B = 0;
    (*this).PreviousSession.MissionID.C = 0;
    (*this).PreviousSession.MissionID.D = 0;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).CompletedTutorialTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).CompletedTutorialTags, 0)).Empty();
    (*this).UserAnalyticsID = TEXT("");
    (*this).UserCountry = TEXT("");
    (*this).UserRegion = TEXT("");
    (*this).UserCity = TEXT("");
    (*this).SaveDataVersion.JsonVersion = 0;
    (*this).SaveDataVersion.RevisionCreated = TEXT("");
    (*this).SaveDataVersion.RevisionSaved = TEXT("");
    (*this).SaveDataVersion.SnapshotRevision = TEXT("");
    (*this).bUserShouldAdvertise = true;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ActiveCampaign.CampaignMode, 0)) = NAME_None;
    (*this).ActiveCampaign.Difficulty = EIGS_UserDifficulty::UD_Unknown;
    (*this).Progression.ProgressLevel = 0;
    (*this).Progression.ProgressToNextLevel = 0.000000000e+00f;
    (*this).Progression.PendingUnlockedLevelUps = 0;
    (*this).Progression.PendingUnlockedItems.Empty();
    (*this).Progression.UnlockedRewardsHistory.Empty();
}

