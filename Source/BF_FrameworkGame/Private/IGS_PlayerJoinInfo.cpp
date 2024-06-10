#include "IGS_PlayerJoinInfo.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"

FIGS_PlayerJoinInfo::FIGS_PlayerJoinInfo() {
    (*this).PlayerName = TEXT("");
    (*this).CurrentPlayerPawn = nullptr;
    (*this).PlayerState = nullptr;
    (*this).HeisterNumber = -1;
    (*this).InitialJoiningHeisterNumber = -1;
    (*this).IsBot = false;
    (*this).IsDisconnected = false;
    (*this).IsDead = false;
    (*this).IsOccupied = false;
    (*this).PreviouslyUsed = false;
    (*this).BotSwitchedAfterDeath = false;
    (*this).HeisterDataID = -1;
    (*this).bCachedMaxLevel = false;
    (*this).CachedCharID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqueId = -1;
    (*this).CachedGenericID = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CachedHeisterData.TagID, 0)) = NAME_None;
    (*this).CachedHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).CachedHeisterData.UniqGenericId = -1;
    (*this).CachedHeisterData.GenericVariantID = -1;
    (*this).CachedHeisterData.CharacterName = FText::FromString(TEXT(""));
    (*this).CachedHeisterData.bIsMaxLeveled = false;
    (*this).CachedHeisterData.HeisterNumber = -1;
    (*this).CachedHeisterData.PlayerId = -1;
    (*this).CachedHeisterData.ProgressionLevel = 1;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).CachedHeisterData.UniquePlayerId, 0)).Empty();
    (*this).CachedHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CachedHeisterData.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).CachedHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CachedHeisterData.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).CachedHeisterData.Loadout.Equipment.Empty();
    (*this).CachedHeisterData.Loadout.Perks.Empty();
    (*this).CachedHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CachedHeisterData.Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).CachedHeisterData.Experience = 0;
    (*this).CachedHeisterData.Injuries = 0;
    (*this).CachedHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).CachedHeisterData.IsBot = false;
    (*this).CachedHeisterData.bUseCustomLoadout = false;
    (*this).CachedHeisterData.bComesFromMeta = false;
    (*this).CachedHeisterData.MissionStats.Kills = -1;
    (*this).CachedHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).CachedHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).CachedHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).CachedHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).CachedHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).CachedHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).CachedHeisterData.MutableVariationIndex = -1;
    (*this).CachedHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).CachedHeisterData.CachedPlayerName = FText::FromString(TEXT(""));
}

