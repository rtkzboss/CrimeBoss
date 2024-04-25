#include "META_CharacterPerksHandling.h"

UMETA_CharacterPerksHandling::UMETA_CharacterPerksHandling() {
}

bool UMETA_CharacterPerksHandling::IsAlwaysRecruitedWithEpicWeapon(UMETA_Character* inCharacter) {
    return false;
}

bool UMETA_CharacterPerksHandling::HasNegotiationOption(UMETA_Character* inCharacter) {
    return false;
}

bool UMETA_CharacterPerksHandling::HasIntimidationOption(UMETA_Character* inCharacter) {
    return false;
}

bool UMETA_CharacterPerksHandling::HasAlwaysLoyalTrait(UMETA_Character* inCharacter) {
    return false;
}

float UMETA_CharacterPerksHandling::GetPriceCoefficientOfHealingAction(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetPercentageOfMissionPlaningCost(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetPercentageOfExtraCashAfterSellingLootFromStashAndTrades(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetPercentageOfBonusExtraLootFromMission(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetMultiplierForUpkeepCost(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetMultiplierForRecruitmentCost(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetMultiplierForChanceOfAmbush(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetMultiplierCostUpgrade(UMETA_Character* inCharacter) {
    return 0.0f;
}

int32 UMETA_CharacterPerksHandling::GetMinAmountOfPowerfulPerksAndNoNegative(UMETA_Character* inCharacter) {
    return 0;
}

int32 UMETA_CharacterPerksHandling::GetMinAmountOfNegativePerks(UMETA_Character* inCharacter) {
    return 0;
}

int32 UMETA_CharacterPerksHandling::GetHeisterAdditionallyCanBeUsedTimesInDay(UMETA_Character* inCharacter) {
    return 0;
}

float UMETA_CharacterPerksHandling::GetHeatAfterMissionMultiplier(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetHealsExtraChunksPerDay(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetHealingMultiplier(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetExtraMoneyInPercentsAfterMission(UMETA_Character* inCharacter) {
    return 0.0f;
}

int32 UMETA_CharacterPerksHandling::GetConvertsAmountFromDeathToRestingAfterFps(UMETA_Character* inCharacter) {
    return 0;
}

float UMETA_CharacterPerksHandling::GetChanceToStartMissionWith1LessWantedStart(UMETA_Character* inCharacter) {
    return 0.0f;
}

void UMETA_CharacterPerksHandling::GetChancesForEventsAfterUsedConvertsFromDeathToResting(UMETA_Character* inCharacter, int32& outSurvivalEventChance, int32& outSelfReturnEventChance) {
}

float UMETA_CharacterPerksHandling::GetChanceIgnoreChuckOfInjureAfterFPS(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetAdditionalPercentangeTWDefensesCost(UMETA_Character* inCharacter) {
    return 0.0f;
}

float UMETA_CharacterPerksHandling::GetAdditionalPercentangeTWAttacksCost(UMETA_Character* inCharacter) {
    return 0.0f;
}

int32 UMETA_CharacterPerksHandling::GetAdditionalPercentageOfMissionCut(UMETA_Character* inCharacter) {
    return 0;
}

float UMETA_CharacterPerksHandling::GetAdditionalPercentageBossLevelUP(UMETA_Character* inCharacter) {
    return 0.0f;
}

int32 UMETA_CharacterPerksHandling::GetAdditionalAmountOfMissionToUpgrade(UMETA_Character* inCharacter) {
    return 0;
}

int32 UMETA_CharacterPerksHandling::GeAdditionalPercentangeWeaponCost(UMETA_Character* inCharacter) {
    return 0;
}

bool UMETA_CharacterPerksHandling::DoestItStartWithDisloyalTrait(UMETA_Character* inCharacter) {
    return false;
}

bool UMETA_CharacterPerksHandling::DoesMultiplierForRecruitmentCostInfluenceOnWeapons(UMETA_Character* inCharacter) {
    return false;
}

bool UMETA_CharacterPerksHandling::CannotGetLoyalyTrait(UMETA_Character* inCharacter) {
    return false;
}


