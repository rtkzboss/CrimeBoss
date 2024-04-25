#include "META_PerkParameters.h"

FMETA_PerkParameters::FMETA_PerkParameters() {
    this->NegotiationOption = false;
    this->IntimidationOption = false;
    this->AlwaysLoayalTrait = false;
    this->CannotGetLoyalTrait = false;
    this->StartWithDisloyalTrait = false;
    this->MultiplierForRecruitmentCost = 0.00f;
    this->bMultiplierForRecruitmentCostInfluencesOnWeapons = false;
    this->MultiplierForUpkeepCost = 0.00f;
    this->AdditionalPercentageOfMissionCut = 0;
    this->ConvertsAmountFromDeathToRestingAfterFps = 0;
    this->ChanceForSelfReturnEventAfterUsedConvertsFromDeathToResting = 0;
    this->ChanceForSurvivalMissionEventAfterUsedConvertsFromDeathToResting = 0;
    this->MultiplierForChanceOfAmbush = 0.00f;
    this->HeatAfterMissionMultiplier = 0.00f;
    this->ExtraMoneyInPercentsAfterMission = 0;
    this->HeisterAdditionallyCanBeUsedTimesInDay = 0;
    this->HealsExtraChunksPerDay = 0.00f;
    this->HealingMultiplier = 0.00f;
    this->ChanceIgnoreChuckOfInjureAfterFPS = 0;
    this->PriceCoefficientOfHealingAction = 0.00f;
    this->PercentageExtraCashAfterSellingLootFromStashAndTrades = 0;
    this->MinAmountOfNegativePerks = 0;
    this->PercentageOfBonusExtraLootFromMission = 0;
    this->PercentageOfMissionPlaningCost = 0;
    this->IsAlwaysRecruitedWithEpicWeapon = false;
    this->WeaponAndEquipmentQualities = 0;
    this->ChanceToStartMissionWith1LessWantedStart = 0;
    this->AdditionalPercentangeTWAttacksCost = 0;
    this->AdditionalPercentangeTWDefensesCost = 0;
    this->AdditionalPercentangeWeaponCost = 0;
    this->AdditionalPercentageBossLevelUP = 0;
    this->MinAmountOfPowerfulPerksAndNoNegative = 0;
    this->MultiplierCostUpgrade = 0.00f;
    this->AdditionalAmountOfMissionToUpgrade = 0;
}

