#include "META_RandEventTableRow.h"

FMETA_RandEventTableRow::FMETA_RandEventTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).EvenCategory = EMETA_RandEventCategory::None;
    (*this).Partner = EMETA_Partner::None;
    (*this).UseLockRespectCondition = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).LockRespect = EMETA_RespectLvl::GodFather;
    (*this).MinHeat = EMETA_Heat::Low;
    (*this).MinInvestigation = 0.000000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockAssetID, 0)) = NAME_None;
    (*this).TargetGang.bAutomaticGangSelection = true;
    (*this).TargetGang.ConsideringTimeInDays = 7;
    (*this).TargetGang.OccupiedTerritoriesOfOtherGang = -1;
    (*this).TargetGang.OccupiedTerritoriesOfPlayer = -1;
    (*this).TargetGang.LostOwnTerritoriesByOtherGang = -1;
    (*this).TargetGang.LostOwnTerritoriesByPlayer = -1;
    (*this).Chance = 5.000000000e-01f;
    (*this).CooldownForEvent = 0;
    (*this).bUseCutsceneSpecificationPerGang = false;
    (*this).CutsceneID = FText::FromString(TEXT(""));
    (*this).DebugText = FText::FromString(TEXT(""));
    (*this).MissionID = nullptr;
    (*this).PriceMultiplier.Min = 0.000000000e+00f;
    (*this).PriceMultiplier.Max = 0.000000000e+00f;
    (*this).bCanBeSelectedEvenIfPlayerHasNotEnoughMoney = false;
    (*this).Rewards.Empty();
}

