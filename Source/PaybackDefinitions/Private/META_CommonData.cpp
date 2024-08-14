#include "META_CommonData.h"

UMETA_CommonData::UMETA_CommonData() {
    (*this).PlayersCharacter = EIGS_CharacterID::Char_Boss_Start;
    (*this).AmountOfMissionsCanBeCompletedByBossPerDay = 1;
    (*this).DayOfBunkruptcyWhenHeistersStartLeavePlayer = 3;
    (*this).TimeForCharactersMoodSwitchToNeutral = 5;
    (*this).ChanceForNoTraits = 6.000000238e-01f;
    (*this).ChanceForOneTrait = 3.000000119e-01f;
    (*this).ChanceForTwoTraits = 1.000000015e-01f;
    (*this).PoliceInvestigationValueForMissionWithAllStars = 1;
    (*this).PoliceInvestigationValueForMissionWithTwoStars = 2;
    (*this).PoliceInvestigationValueForMissionWithOneStar = 3;
    (*this).PoliceInvestigationValueForMissionWithoutStars = 4;
    (*this).MaxPoliceInvestigationValue = 1000;
    (*this).HeatLevelWhenPoliceInvestigation100Percent = EMETA_Heat::Low;
    (*this).InitialHeatState = EMETA_Heat::Low;
    (*this).InternalHeatRange.Max = 100;
    (*this).GangTileThresholdForDetectiveSpawning = 2;
    (*this).HowManyDaysGenericHeistersStayingInPoolForFuneral = 1;
    (*this).CooldownForFuneralOfGenericHeisters = 1;
    (*this).ChanceForSurvivalMissionForUniqueCharacters = 25;
    (*this).ChanceForSurvivalMissionForGenericCharacters = 25;
    (*this).ChanceForSelfReturnForUniqueCharacters = 40;
    (*this).ChanceForSelfReturnForGenericCharacters = 40;
    (*this).ChanceToLosePrimaryWeaponAfterReturn = 30;
    (*this).ChanceToLoseSecondaryWeaponAfterReturn = 30;
    (*this).ChanceOfArrestForUniqueCharacters = 20;
    (*this).ChanceOfArrestForGenericCharacters = 20;
    (*this).ChanceForDeathOfUniqueCharacter = 40;
    (*this).ChanceForDeathOfGenericCharacter = 40;
    (*this).DurationMoneyMakingOpportunities = 4;
    (*this).CooldownMoneyMakingOpportunities = 3;
    (*this).MaxAmountOfActiveGoals = 4;
    (*this).MaxAmountOfAvailableGoals = 3;
    (*this).MaxPriceCoefficient = 1.000000000e+00f;
    (*this).IncreasePriceCoefficient = 5.000000000e-01f;
    (*this).TradeVendorCooldownAfterFailure = 2;
    (*this).LootAmountPercentForAmbush.Min = 30;
    (*this).LootAmountPercentForAmbush.Max = 50;
    (*this).PositiveTrendChangeChance = 5.000000000e+01f;
}

bool UMETA_CommonData::NeedRemoveUnfinishedMissions() const {
    return false;
}

bool UMETA_CommonData::IsMissionGangMission(const FGameplayTag inScenario) const {
    return false;
}

TArray<EMETA_TradeVendor> UMETA_CommonData::GetVendorsForTrade(FGameplayTag inLootTag) const {
    return TArray<EMETA_TradeVendor>();
}

void UMETA_CommonData::GetTrendDataByLootTag(FGameplayTag inMainLootTag, FMETA_PawnShopTrendData& outTrendData, bool& outSuccess) const {
}

int32 UMETA_CommonData::GetTradeVendorCooldownAfterFailure() const {
    return 0;
}

FMETA_TradeRelationshipInfo UMETA_CommonData::GetTradeRelationshipInfo(EMETA_TradeRelationship inTradeRelationship, bool& bSuccess) const {
    return FMETA_TradeRelationshipInfo{};
}

void UMETA_CommonData::GetTradeRelationshipData(TMap<EMETA_TradeRelationship, int32>& outBetterPriceChancesData, TMap<EMETA_TradeRelationship, int32>& outNoDealChancesData, TMap<EMETA_TradeRelationship, int32>& outVendorAttackChancesData) {
}

int32 UMETA_CommonData::GetTimeForCharactersMoodSwitchToNeutral() const {
    return 0;
}

int32 UMETA_CommonData::GetTileCapacityBySize(const EMETA_TileSize inTileSize) {
    return 0;
}

FMETA_StatisticsRootTags UMETA_CommonData::GetStatisticsRootTags() const {
    return FMETA_StatisticsRootTags{};
}

FGameplayTagContainer UMETA_CommonData::GetStatisticsRootTagContainer() const {
    return FGameplayTagContainer{};
}

EMETA_RespectLvl UMETA_CommonData::GetRespectLvlRelatedToTurfsAmount(int32 inTurfsUnderControl) const {
    return EMETA_RespectLvl::Low;
}

int32 UMETA_CommonData::GetRandomPoolSize() const {
    return 0;
}

float UMETA_CommonData::GetRandomizedPercentOfSoldiersArrestedByDetectiveOnPlayersTile() {
    return 0.0f;
}

int32 UMETA_CommonData::GetRandomizedAmountOfDaysDetectivesStaysOnTileAfterNeutralization() {
    return 0;
}

TArray<EMETA_RandEventCategory> UMETA_CommonData::GetRandEventsCategoriesPriority() const {
    return TArray<EMETA_RandEventCategory>();
}

FMETA_RandEventCategoryConfig UMETA_CommonData::GetRandEventCategoryConfig(EMETA_RandEventCategory inRandEventCategory) {
    return FMETA_RandEventCategoryConfig{};
}

void UMETA_CommonData::GetPricesForLootByVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag, int32 inAmountOfLoot, int32& outOriginPrice, int32& outIncreasePrice, int32& outMaxPrice) {
}

float UMETA_CommonData::GetPriceBonus(EMETA_TradeVendor inTradeVendor, FGameplayTag inLootTag) const {
    return 0.0f;
}

int32 UMETA_CommonData::GetPoliceInvestigationPerStartedBancruptcy() const {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationPerKilledDetective() const {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationPerKilledCivilian() const {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationIncreaseForElapsedDay(EMETA_RespectLvl inCurrentRespect) const {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationGradeByMissionObjectivesResults(bool inMissionSuccess, bool inClenExecObjectiveRes, bool inExtraObjectiveRes) {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationChangeForTurfCapture() const {
    return 0;
}

TMap<EMETA_PoliceInvestigationChangeForGraph, int32> UMETA_CommonData::GetPoliceInvestigationChangeForGraphAction() const {
    return TMap<EMETA_PoliceInvestigationChangeForGraph, int32>();
}

EIGS_CharacterID UMETA_CommonData::GetPlayersCharacterID() const {
    return EIGS_CharacterID::Char_Unknown;
}

TMap<FGameplayTag, FMETA_PerkInfo> UMETA_CommonData::GetPerkInfoData() const {
    return TMap<FGameplayTag, FMETA_PerkInfo>();
}

FMETA_PerkInfo UMETA_CommonData::GetPerkInfo(FGameplayTag inPerk, bool& bSuccess) const {
    return FMETA_PerkInfo{};
}

int32 UMETA_CommonData::GetMaxRevengePoolSize() const {
    return 0;
}

int32 UMETA_CommonData::GetMaxPoliceInvestigationValue() const {
    return 0;
}

int32 UMETA_CommonData::GetMaxAmountOfAvailableGoals() const {
    return 0;
}

int32 UMETA_CommonData::GetMaxAmountOfActiveGoals() const {
    return 0;
}

TArray<FGameplayTag> UMETA_CommonData::GetMainLootTagsForTrends() const {
    return TArray<FGameplayTag>();
}

FMETA_FloatInterval UMETA_CommonData::GetLootAmountPercentForAmbush() const {
    return FMETA_FloatInterval{};
}

FMETA_Interval UMETA_CommonData::GetInternalHeatRange() {
    return FMETA_Interval{};
}

EMETA_IntelUnlockLevel UMETA_CommonData::GetIntelUnlockedLevelByIntelValue(int32 inIntelLevel) {
    return EMETA_IntelUnlockLevel::LOCK;
}

FMETA_IntelDataSetup UMETA_CommonData::GetIntelDataSetup() const {
    return FMETA_IntelDataSetup{};
}

TMap<EMETA_TradeVendor, EMETA_TradeRelationship> UMETA_CommonData::GetInitialTradeRelationship() const {
    return TMap<EMETA_TradeVendor, EMETA_TradeRelationship>();
}

int32 UMETA_CommonData::GetInitialHeatValue() const {
    return 0;
}

EMETA_Heat UMETA_CommonData::GetInitialHeatState() const {
    return EMETA_Heat::INVALID;
}

FGameplayTag UMETA_CommonData::GetID_SurvivalEvent() const {
    return FGameplayTag{};
}

FGameplayTag UMETA_CommonData::GetID_SelfReturnEvent() const {
    return FGameplayTag{};
}

FGameplayTag UMETA_CommonData::GetID_DeathEvent() const {
    return FGameplayTag{};
}

int32 UMETA_CommonData::GetHowManyDaysGenericHeistersStayingInPoolForFuneral() const {
    return 0;
}

FMETA_HeatTurfWarData UMETA_CommonData::GetHeatTurfWarData() {
    return FMETA_HeatTurfWarData{};
}

EMETA_Heat UMETA_CommonData::GetHeatLevelWhenPoliceInvestigation100Percent() const {
    return EMETA_Heat::INVALID;
}

TMap<EMETA_Heat, FMETA_HealLevelData> UMETA_CommonData::GetHeatLevelsData() const {
    return TMap<EMETA_Heat, FMETA_HealLevelData>();
}

FMETA_HeatHeistsData UMETA_CommonData::GetHeatHeistsData() {
    return FMETA_HeatHeistsData{};
}

FGameplayTagContainer UMETA_CommonData::GetGoodTraits() const {
    return FGameplayTagContainer{};
}

FMETA_GangTradeInfo UMETA_CommonData::GetGangTradeInfo(EMETA_TradeVendor inTradeVendor, bool& bSuccess) const {
    return FMETA_GangTradeInfo{};
}

int32 UMETA_CommonData::GetDurationMoneyMakingOpportunities() const {
    return 0;
}

FMETA_DetectivesInvestigationConfig UMETA_CommonData::GetDetectivesInvestigationConfigForPoliceInvestigationPercent(const int32 inPoliceInvestigationPercent, TSet<int32> inForbiddenValues, int32& outSelectedValue) {
    return FMETA_DetectivesInvestigationConfig{};
}

FGameplayTag UMETA_CommonData::GetDetectiveObjectivePreset() const {
    return FGameplayTag{};
}

FMETA_DetectiveChancesToAppear UMETA_CommonData::GetDetectiveChancesToAppear() {
    return FMETA_DetectiveChancesToAppear{};
}

FMETA_Interval UMETA_CommonData::GetDaysIntervalAfterLoss_SurvivalEvent() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_CommonData::GetDaysIntervalAfterLoss_SelfReturnEvent() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_CommonData::GetDaysIntervalAfterLoss_DeathEvent() const {
    return FMETA_Interval{};
}

int32 UMETA_CommonData::GetDayOfBankruptcyWhenHeistersStartLeavePlayer() const {
    return 0;
}

EIGS_AITiers UMETA_CommonData::GetCurrentSWATTier(int32 inInvestigation) {
    return EIGS_AITiers::AT_Tier1;
}

int32 UMETA_CommonData::GetCrewCapacity(EMETA_RespectLvl inBossStatus) const {
    return 0;
}

int32 UMETA_CommonData::GetCooldownMoneyMakingOpportunities() const {
    return 0;
}

int32 UMETA_CommonData::GetCooldownForFuneralOfGenericHeisters() const {
    return 0;
}

float UMETA_CommonData::GetChanceToPickSecondaryGangFromNearestGangs() const {
    return 0.0f;
}

void UMETA_CommonData::GetChancesForWeaponsLoss_SelfReturnEvent(float& outChanceToLosePrimaryWeaponAfterReturn, float& outChanceToLoseSecondaryWeaponAfterReturn) const {
}

int32 UMETA_CommonData::GetChanceOfUsingPriorityPool() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceOfCharacterCanBeSelectedForRevengePool() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_SurvivalEvent() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_SelfReturnEvent() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_DeathEvent() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_ArrestEvent() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_SurvivalEvent() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_SelfReturnEvent() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_DeathEvent() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_ArrestEvent() const {
    return 0;
}

FMETA_CampaignUserDifficultyConfiguration UMETA_CommonData::GetCampaignDifficultyConfiguration(const EIGS_UserDifficulty inUserDifficulty) const {
    return FMETA_CampaignUserDifficultyConfiguration{};
}

void UMETA_CommonData::GetBossLoadout(UClass*& outPrimaryWeapon, UClass*& outSecondaryWeapon, UClass*& outEquipment) const {
}

FGameplayTagContainer UMETA_CommonData::GetBadTraits() const {
    return FGameplayTagContainer{};
}

FMETA_Interval UMETA_CommonData::GetAmountOfUnseenItemsToBeAddedForPurchase() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_CommonData::GetAmountOfSuccessfulMissionsForNextUnlocks() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_CommonData::GetAmountOfSuccessfulMissionsForFirstUnlock() const {
    return FMETA_Interval{};
}

int32 UMETA_CommonData::GetAmountOfMissionsCanBeCompletedByBossPerDay() const {
    return 0;
}

int32 UMETA_CommonData::GetAmountOfInitialTraits() const {
    return 0;
}

FMETA_Interval UMETA_CommonData::GetAmountMissionGeneratedEveryDay() const {
    return FMETA_Interval{};
}

EMETA_AmbushType UMETA_CommonData::GetAmbushTypeByFPSMissionTag(FGameplayTag inMissionTag) const {
    return EMETA_AmbushType::UNDEFINED;
}

FGameplayTag UMETA_CommonData::GetAmbushTagByType(EMETA_AmbushType inType) const {
    return FGameplayTag{};
}

FMETA_AmbushConfig UMETA_CommonData::GetAmbushConfig() {
    return FMETA_AmbushConfig{};
}

TSet<EMETA_Gang> UMETA_CommonData::FilterGangsWithGangMissions(const TArray<EMETA_Gang>& inAliveGangs) const {
    return TSet<EMETA_Gang>();
}

bool UMETA_CommonData::CanUseRandEventsCategoriesPriority() const {
    return false;
}

bool UMETA_CommonData::CanLootItemBeTradedWithVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag) const {
    return false;
}

bool UMETA_CommonData::CanFPSMissionAffectPoliceInvestigation(EMETA_FPSMissionSubtype inSubtype) const {
    return false;
}

bool UMETA_CommonData::CanFPSMissionAffectHeat(EMETA_FPSMissionSubtype inSubtype) const {
    return false;
}

void UMETA_CommonData::CalculateTrendDistribution(FGameplayTagContainer& outPositiveTrends, FGameplayTagContainer& outNegativeTrends) {
}

void UMETA_CommonData::CalculateNextTrendChangeDirection(bool& outPositive) const {
}


