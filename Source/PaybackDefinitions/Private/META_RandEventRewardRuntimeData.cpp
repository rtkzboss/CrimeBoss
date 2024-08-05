#include "META_RandEventRewardRuntimeData.h"

FMETA_RandEventRewardRuntimeData::FMETA_RandEventRewardRuntimeData() {
    (*this).RewardType = EMETA_RandEventReward::None;
    (*this).CashValue = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootItem, 0)) = NAME_None;
    (*this).LootMonetaryValuer = 0;
    (*this).Soldiers = 0;
    (*this).NewHeisterID = EIGS_CharacterID::Char_Unknown;
    (*this).Quality = EMETA_ItemQuality::None;
    (*this).HeatChangeForAmountOfLvls = 0;
    (*this).InvestigationProgressValueChangeForPercents = 0.000000000e+00f;
    (*this).TargetGang = EMETA_Gang::None;
    (*this).AmountOfTiles = 0;
    (*this).Duration = 1;
    (*this).AttitudeChangeForAmountOfLvls = 0;
}

