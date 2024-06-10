#include "META_RandEventReward.h"

FMETA_RandEventReward::FMETA_RandEventReward() {
    (*this).RewardType = EMETA_RandEventReward::None;
    (*this).MissionRewardMultiplier.Min = 0.000000000e+00f;
    (*this).MissionRewardMultiplier.Max = 0.000000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootItem, 0)) = NAME_None;
    (*this).LootCostMultiplier.Min = 0.000000000e+00f;
    (*this).LootCostMultiplier.Max = 0.000000000e+00f;
    (*this).Soldiers.Min = 0;
    (*this).Soldiers.Max = 0;
    (*this).NewHeisterID = EIGS_CharacterID::Char_Unknown;
    (*this).Quality = EMETA_ItemQuality::None;
    (*this).HeatChangeForAmountOfLvls = 0;
    (*this).InvestigationProgressValueChangeForPercents = 0.000000000e+00f;
    (*this).TargetGang = EMETA_Gang::None;
    (*this).AmountOfTiles.Min = 0;
    (*this).AmountOfTiles.Max = 0;
    (*this).AmountOfTiles.IncreasingChanceInsideRange = 5.000000000e-01f;
    (*this).Duration = 1;
    (*this).AttitudeChangeForAmountOfLvls = 0;
}

