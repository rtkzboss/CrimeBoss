#include "META_TurfWarData.h"

UMETA_TurfWarData::UMETA_TurfWarData() {
    this->MaxArmyTierForInnerUpgrades = EMETA_ArmyTier::Elite;
    this->CanTilesAroundDetectiveBeAttacked = true;
    this->AttemptsToCaptureTerritory = 1;
    this->PlayerLoseAllSentSoldiersAfterFailedDefence = true;
    this->InitialSoldiersAmount = 10;
    this->CountdownForAttackAfterLostTile = 0;
    this->InitialArmyTier = EMETA_ArmyTier::Low;
    this->NumberOfEnemySoldiersMultiplier = 2.00f;
    this->ArmyTierMultiplier_IfEnemyTierHigherThanPlayers = 1.00f;
    this->ArmyTierMultiplier_IfEnemyTierLowerThanPlayers = 1.00f;
    this->HowManyDaysGangRememberLostTerritory = 3;
    this->HowManyDaysGangExistsInEnemiesList = 1;
    this->HowManyDaysGangCanAttackMore = 2;
    this->HowManyAttacksCanDoGangsForDaysWithHighNumberAttacks = 2;
    this->DaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce = 3;
    this->GangCooldownForChangeArmyTier = 0;
    this->MinTileStrength = 0;
    this->MaxTileStrength = 85;
    this->TileCurrentStrengthChangeWhenPlayerLosesAttack = -10;
    this->TileCurrentStrengthChangeWhenPlayerWinsDefense = 10;
    this->StrengthChangeIfTileIsolated = -20;
    this->AmountOfFriendlyNeighbourTilesToConsiderTileAsConnected = 2;
    this->StrengthChangeIfTileConnected = 10;
    this->StrengthChangeIfTileWillCreateIsolatedTile = 10;
    this->LastTileStrengthChangePerWeakenMissionCompletedOnLastTile = 0;
    this->MinTileWeakness = 0;
    this->MaxTileWeakness = 20;
    this->StrengthTweakWhenAIBossHasOnly2Tiles = 30;
    this->StrengthTweakWhenAIBossHasOnly3Tiles = 15;
    this->StrengthTweakWhenAIBossHasDifferentAmountOfTiles = 0;
    this->StrengthTweakForAIBossAfterTileLosingToAI = 5;
    this->StrengthTweakForAIBossAfterTileLosingToPlayer = 15;
    this->StrengthTweakForAIBossAfterTileCapturingFromAI = -5;
    this->StrengthTweakForAIBossAfterTileCapturingFromPlayer = -10;
    this->ChanceToAttackNeutralTurf = 75;
    this->ChanceToAttackInRetaliatorTactic = 75;
    this->BaseChanceToAttackAnyAdjacentTerritoryByAI = 25;
    this->ChanceIncreaseToAttackAnyAdjacentTerritoryByAI = 5;
    this->ChanceToAttackTerritoryBelongingToTheGangFromEnemyList = 50;
}

float UMETA_TurfWarData::RandomizeSoldiersCasualtiesInPercentsAfterNeutralAttack() const {
    return 0.0f;
}

int32 UMETA_TurfWarData::GetWeaknessChangeIntensity(EMETA_AIBossStrengthChangeIntensity inIntensity) const {
    return 0;
}

FMETA_WeakenMissionTurfActionGenData UMETA_TurfWarData::GetWeakenMissionTurfActionGenData(EMETA_RespectLvl inRespect) {
    return FMETA_WeakenMissionTurfActionGenData{};
}

FMETA_UIArmySizeConfig UMETA_TurfWarData::GetUIArmySizeConfigDefense() const {
    return FMETA_UIArmySizeConfig{};
}

FMETA_UIArmySizeConfig UMETA_TurfWarData::GetUIArmySizeConfig() const {
    return FMETA_UIArmySizeConfig{};
}

EMETA_TurfMissionDifficulty UMETA_TurfWarData::GetTurfMissionDifficulty(int32 inAiArmySize) const {
    return EMETA_TurfMissionDifficulty::None;
}

FMETA_TurfActionWeaknessStrengthData UMETA_TurfWarData::GetTurfActionWeaknessStrengthData(EMETA_RespectLvl inRespect) {
    return FMETA_TurfActionWeaknessStrengthData{};
}

FMETA_Interval UMETA_TurfWarData::GetTileWeaknessInterval() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_TurfWarData::GetTileStrengthInterval() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_TurfWarData::GetTileStartingBaseStrength() const {
    return FMETA_Interval{};
}

int32 UMETA_TurfWarData::GetTileCurrentStrengthChangeWhenPlayerWinsDefense() const {
    return 0;
}

int32 UMETA_TurfWarData::GetTileCurrentStrengthChangeWhenPlayerLosesAttack() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakWhenAIBossHasOnly3Tiles() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakWhenAIBossHasOnly2Tiles() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakWhenAIBossHasDifferentAmountOfTiles() const {
    return 0;
}

FMETA_Interval UMETA_TurfWarData::GetStrengthTweaksIntervalForAIBossAfterTerritoryChanges() const {
    return FMETA_Interval{};
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileLosingToPlayer() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileLosingToAI() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileCapturingFromPlayer() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileCapturingFromAI() const {
    return 0;
}

FMETA_EffectOnAIBossStrength UMETA_TurfWarData::GetStrengthChangeIntensity(EMETA_AIBossStrengthChangeIntensity inIntensity) const {
    return FMETA_EffectOnAIBossStrength{};
}

int32 UMETA_TurfWarData::GetStrengthChangeIfWillCreateIsolatedTile() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthChangeIfTileIsolated() const {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthChangeIfTileConnected() const {
    return 0;
}

TArray<FGameplayTagContainer> UMETA_TurfWarData::GetPlayersInitialTileGroups() const {
    return TArray<FGameplayTagContainer>();
}

int32 UMETA_TurfWarData::GetPlayersInitialSoldiersAmount() const {
    return 0;
}

EMETA_ArmyTier UMETA_TurfWarData::GetPlayersInitialArmyTier() const {
    return EMETA_ArmyTier::Low;
}

int32 UMETA_TurfWarData::GetPlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile(int32 inIndex) const {
    return 0;
}

int32 UMETA_TurfWarData::GetPlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile(int32 inIndex) const {
    return 0;
}

int32 UMETA_TurfWarData::GetPlayersArmyLimit(EMETA_RespectLvl inPlayerRespect) const {
    return 0;
}

FMETA_PlayerEndAgonyConfig UMETA_TurfWarData::GetPlayerEndAgonyConfig() const {
    return FMETA_PlayerEndAgonyConfig{};
}

float UMETA_TurfWarData::GetNumberOfEnemySoldiersMultiplier() const {
    return 0.0f;
}

void UMETA_TurfWarData::GetMinAmountOfSoldiersForAttackAndDefence(EMETA_RespectLvl inRespectLvl, int32& outMinForAttack, int32& outMinForDefence) const {
}

EMETA_ArmyTier UMETA_TurfWarData::GetMaxArmyTierForInnerUpgrades() const {
    return EMETA_ArmyTier::Low;
}

int32 UMETA_TurfWarData::GetLastTileStrengthChangePerWeakenMissionCompletedOnLastTile() const {
    return 0;
}

FMETA_GangStrategyPropertiesConfig UMETA_TurfWarData::GetGangStrategyProperties(EMETA_Gang inGang, EMETA_GangStrategy inStrategy) const {
    return FMETA_GangStrategyPropertiesConfig{};
}

FMETA_GangSpawnWeakenMission UMETA_TurfWarData::GetGangSpawnWeakenMissionInfo(int32 inGangPriority) {
    return FMETA_GangSpawnWeakenMission{};
}

FMETA_GangPriorityChangeInfo UMETA_TurfWarData::GetGangPriorityChangeInfo() {
    return FMETA_GangPriorityChangeInfo{};
}

int32 UMETA_TurfWarData::GetGangCooldownForChangeArmyTier() const {
    return 0;
}

int32 UMETA_TurfWarData::GetDurationOfLostTerritoryRemembering() const {
    return 0;
}

int32 UMETA_TurfWarData::GetDurationInsideEnemiesList() const {
    return 0;
}

FMETA_DefenceResultCalculatingConfigForAI UMETA_TurfWarData::GetDefenceResultCalculationConfigForAI() {
    return FMETA_DefenceResultCalculatingConfigForAI{};
}

int32 UMETA_TurfWarData::GetDaysAmountForMoreAttacksk() const {
    return 0;
}

int32 UMETA_TurfWarData::GetDaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce() const {
    return 0;
}

void UMETA_TurfWarData::GetDataSetup_IfEnemyTierLowerThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) const {
}

void UMETA_TurfWarData::GetDataSetup_IfEnemyTierHigherThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) const {
}

int32 UMETA_TurfWarData::GetCountdownForAttackAfterLostTile() const {
    return 0;
}

TArray<FMETA_ConditionForArmyTierChanging> UMETA_TurfWarData::GetConditionsForArmyTierChanging() {
    return TArray<FMETA_ConditionForArmyTierChanging>();
}

float UMETA_TurfWarData::GetChanceToAttackNeutralTerritoryByAI() const {
    return 0.0f;
}

float UMETA_TurfWarData::GetChanceToAttackInRetaliatorTactic() const {
    return 0.0f;
}

float UMETA_TurfWarData::GetChanceToAttackAdjacentTerritoryToTheGangFromEnemiesList() const {
    return 0.0f;
}

float UMETA_TurfWarData::GetChanceIncreaseToAttackAnyAdjacentTerritoryByAI() const {
    return 0.0f;
}

float UMETA_TurfWarData::GetBaseChanceToAttackAnyAdjacentTerritoryByAI() const {
    return 0.0f;
}

int32 UMETA_TurfWarData::GetAttemptsToCaptureTerritory() const {
    return 0;
}

TArray<EMETA_Gang> UMETA_TurfWarData::GetArrayOfGangsWhichCanAttackAnyTile() {
    return TArray<EMETA_Gang>();
}

FMETA_ArmySizeConfigForAI UMETA_TurfWarData::GetArmySizeLimitsByPlayerRespect(EMETA_RespectLvl inRespectLvl) const {
    return FMETA_ArmySizeConfigForAI{};
}

int32 UMETA_TurfWarData::GetAmountOfFriendlyNeighbourTilesToConsiderTileAsConnected() const {
    return 0;
}

int32 UMETA_TurfWarData::GetAmountOfAttackskForMoreAttacksDays() const {
    return 0;
}

TArray<EMETA_GangStrategy> UMETA_TurfWarData::GetAIStrategiesThatAttackMore() {
    return TArray<EMETA_GangStrategy>();
}

FMETA_Interval UMETA_TurfWarData::GetAIArmySizeForPlayersAttackOnLastTile(int32 inIndex) const {
    return FMETA_Interval{};
}

bool UMETA_TurfWarData::CheckPossibilityToAttackTilesAroundDetective() const {
    return false;
}

bool UMETA_TurfWarData::CanPlayerLoseAllSentSoldiersAfterFailedDefence() const {
    return false;
}


