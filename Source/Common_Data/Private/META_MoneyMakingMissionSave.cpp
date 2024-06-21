#include "META_MoneyMakingMissionSave.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_ObjectiveReward.h"
#include "EMETA_RespectLvl.h"

FMETA_MoneyMakingMissionSave::FMETA_MoneyMakingMissionSave() {
    (*this).PrimaryEnemyVariationOverride = EIGS_GangsterVariationType::US_None;
    (*this).PrimarySwatVariationOverride = EIGS_SWATVariationType::US_None;
    (*this).GangsterTier = EIGS_AITiers::AT_Unknown;
    (*this).SWATTier = EIGS_AITiers::AT_Unknown;
    (*this).IntelData.AmountOfSoldeirsWereSentToIntel = 0;
    (*this).IntelData.RequiredSoldiersForFullRevealIntel = 0;
    (*this).IntelData.RespectValueOnMissionSpawn = EMETA_RespectLvl::Low;
    (*this).OwnerGoal = nullptr;
    (*this).MissionExpenses = 0;
    (*this).HeistersCut = 0;
    (*this).FencingExpenses = 0;
    (*this).MissionOutcome = 0;
    (*this).BonusCash = 0;
    (*this).ObjectiveMonetaryValue = 0;
    (*this).MaxMonetaryValue = 0;
    (*this).MonetaryValueMultiplier = 1.000000000e+00f;
    (*this).Reward1stStar = 0;
    (*this).Reward2ndStar = 0;
    (*this).Reward3rdStar = 0;
    (*this).LootMonetaryValue = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ObjectiveID, 0)) = NAME_None;
    (*this).ObjectiveState = EMETA_ObjectiveState::InProgress;
    (*this).ObjectiveRewardData.RewardType = EMETA_ObjectiveReward::None;
    (*this).ObjectiveRewardData.Cash = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ObjectiveRewardData.LootItem, 0)) = NAME_None;
    (*this).ObjectiveRewardData.LootMonetaryValue = 0;
    (*this).ObjectiveRewardData.WeaponQuality = EMETA_ItemQuality::None;
    (*this).ObjectiveRewardData.WeaponID = nullptr;
    (*this).ObjectiveRewardData.SoldiersAmount = 0;
    (*this).Difficulty = EIGS_ScenarioDifficulty::SD_HeavyForce;
    (*this).UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedLoot, 0)) = NAME_None;
    (*this).WantedStars = 0;
}

