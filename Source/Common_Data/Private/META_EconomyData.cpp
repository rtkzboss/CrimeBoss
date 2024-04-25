#include "META_EconomyData.h"
#include "Templates/SubclassOf.h"

UMETA_EconomyData::UMETA_EconomyData() {
    this->ChanceForTileIncomeToBeLoot = 0;
    this->FrequencyOfIncomeValueRecompute = 0;
    this->RewardValueReductionMultiplierForRepeatedCapture = 1.00f;
    this->PlanningCostMultiplierForLastTurfWeakening = 1.00f;
    this->DaysForRehabilitationAfterBankruptValue = 5;
    this->BankruptValue = -100000;
    this->NumberOfBuyableAssets = 0;
    this->BM_LootEventCooldown = 0;
    this->BM_LootProposalsAmount = 0;
    this->BM_LootEventSelectionExpiration = 0;
    this->WarehouseAttackCooldown = 0;
    this->StartingChance = 0;
    this->DailyChanceIncrease = 0;
    this->MinAmountOfEachLootCanBeStolen = 0;
}

void UMETA_EconomyData::RandomizePerksByIDAndLevel(const UObject* inWCO, EIGS_CharacterID inID, int32 inHeisterLevel, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<FMETA_PerkData>& inCurrentPerks, TArray<FMETA_PerkData>& outRandomizedPerks, bool bIsPromotion) {
}

FMETA_WeaponTurfReward UMETA_EconomyData::GetWeaponTurfRewardForRepeatedCapture() const {
    return FMETA_WeaponTurfReward{};
}

FMETA_WeaponTurfReward UMETA_EconomyData::GetWeaponTurfReward() const {
    return FMETA_WeaponTurfReward{};
}

int32 UMETA_EconomyData::GetWeaponsPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl) {
    return 0;
}

float UMETA_EconomyData::GetWeaponsPoolRefreshMultiplier() {
    return 0.0f;
}

FMETA_WeaponEliminationReward UMETA_EconomyData::GetWeaponRewardForElimination() const {
    return FMETA_WeaponEliminationReward{};
}

int32 UMETA_EconomyData::GetWeaponMarketCooldownInDays() const {
    return 0;
}

int32 UMETA_EconomyData::GetWeaponMarketAvailableInDays() const {
    return 0;
}

FGameplayTag UMETA_EconomyData::GetWeaponEventUnlockTag() const {
    return FGameplayTag{};
}

float UMETA_EconomyData::GetWeaponCoefficientPriceForHeister() const {
    return 0.0f;
}

float UMETA_EconomyData::GetWeakenMissionPlanningCostMultiplier(EMETA_TurfActionAfterSuccess inTurfAction, EMETA_RespectLvl inRespect, EMETA_AIBossStrengthChangeIntensity inIntensity, bool inIsLastTurf) const {
    return 0.0f;
}

TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> UMETA_EconomyData::GetWarehouseWealthPerRespect() const {
    return TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData>();
}

int32 UMETA_EconomyData::GetWarehouseAttackCooldown() const {
    return 0;
}

FMETA_TurfRewardsDistribution UMETA_EconomyData::GetTurfRewardsDistributionConfig(EMETA_TileWealth inWealth) {
    return FMETA_TurfRewardsDistribution{};
}

TMap<EMETA_TileReward, int32> UMETA_EconomyData::GetTurfRewardChances() {
    return TMap<EMETA_TileReward, int32>();
}

FMETA_FloatInterval UMETA_EconomyData::GetTurfIncomeMultiplier(EMETA_TileWealth inTileWealth) const {
    return FMETA_FloatInterval{};
}

bool UMETA_EconomyData::GetTradeSettingsByRespectLvl(EMETA_RespectLvl inRespectLvl, FMETA_TradeSettings& outTradeSettings) {
    return false;
}

TMap<EMETA_RespectLvl, float> UMETA_EconomyData::GetTileRespectMultiplier() const {
    return TMap<EMETA_RespectLvl, float>();
}

float UMETA_EconomyData::GetStoryMissionRewardMultiplier() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetStartingChance() const {
    return 0;
}

FMETA_Interval UMETA_EconomyData::GetSoldiersPercentageForTurfReward() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_EconomyData::GetSoldiersPercentageForElimination() const {
    return FMETA_Interval{};
}

float UMETA_EconomyData::GetRewardValueReductionMultiplierForRepeatedCapture() const {
    return 0.0f;
}

EMETA_ItemQuality UMETA_EconomyData::GetRandomizedQualityAccordingToPlayerRespect(const UObject* inWCO) {
    return EMETA_ItemQuality::None;
}

float UMETA_EconomyData::GetPriceMultiplierForFirstHeistersGeneration() const {
    return 0.0f;
}

TMap<EMETA_RespectLvl, FMETA_Interval> UMETA_EconomyData::GetPercentageBeStolenFromStash() const {
    return TMap<EMETA_RespectLvl, FMETA_Interval>();
}

float UMETA_EconomyData::GetNumberOfHPSegmentsForAutomaticRecovery() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetNumberOfBuyableAssets() const {
    return 0;
}

int32 UMETA_EconomyData::GetNassaraConversionCost(int32 inCountOfStars, EMETA_RespectLvl inRespectLvl) {
    return 0;
}

float UMETA_EconomyData::GetMultiplierOfExpensesForMissionsWithoutIntel(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

float UMETA_EconomyData::GetMultiplierOfExpensesForMissionsWithIntel(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

float UMETA_EconomyData::GetMultiplierOfExpensesForBigHeist(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

float UMETA_EconomyData::GetMultiplierForHealing() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetMinAmountOfEachLootCanBeStolen() const {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetLootMultiplierForTurfReward() const {
    return FMETA_FloatInterval{};
}

FMETA_FloatInterval UMETA_EconomyData::GetLootMultiplierForElimination() const {
    return FMETA_FloatInterval{};
}

FMETA_LevelUpHeisterData UMETA_EconomyData::GetLevelUpUniqueHeisterData(int32 inCharacterLevel) {
    return FMETA_LevelUpHeisterData{};
}

FMETA_LevelUpHeisterData UMETA_EconomyData::GetLevelUpGenericHeisterData(int32 inCharacterLevel) {
    return FMETA_LevelUpHeisterData{};
}

FMETA_LevelUpHeisterData UMETA_EconomyData::GetLevelUpBossData(int32 inCharacterLevel) {
    return FMETA_LevelUpHeisterData{};
}

FGameplayTag UMETA_EconomyData::GetHireArmyEventUnlockTag() const {
    return FGameplayTag{};
}

float UMETA_EconomyData::GetHeisterUpkeepMultiplierByEquipmentQuality(EMETA_ItemQuality inEquipmentQuality) const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetHeistersPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl) {
    return 0;
}

float UMETA_EconomyData::GetHeistersPoolRefreshMultipier() {
    return 0.0f;
}

int32 UMETA_EconomyData::GetHeistersAmountOverrideInFirstGeneration() const {
    return 0;
}

FMETA_HeisterEliminationReward UMETA_EconomyData::GetHeisterRewardForElimination() const {
    return FMETA_HeisterEliminationReward{};
}

int32 UMETA_EconomyData::GetHeisterMarketCooldownInDays() const {
    return 0;
}

int32 UMETA_EconomyData::GetHeisterMarketAvailableInDays() const {
    return 0;
}

float UMETA_EconomyData::GetHealCostMultiplierForUniqueCharacter() const {
    return 0.0f;
}

float UMETA_EconomyData::GetHealCostMultiplierByHeisterTier(int32 inHeisterLevel) const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetHealCostByRespectLevel(EMETA_RespectLvl inRespectLvl) const {
    return 0;
}

void UMETA_EconomyData::GetGraphEconomyVariableByTag(FGameplayTag inVariableTag, FMETA_EconomyGraphVariableModeData& outData, bool& outSuccess) {
}

TArray<FMETA_CharacterInfo> UMETA_EconomyData::GetGenericHeistersPoolForBlackmarketWithOneFree(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, TArray<FIGS_CharacterClasses>& inActiveGenericVariants) {
    return TArray<FMETA_CharacterInfo>();
}

bool UMETA_EconomyData::GetGenericCharacterConfiguration(EMETA_ItemQuality inQuality, FMETA_GenericCharacterConfiguration& outConfig) const {
    return false;
}

int32 UMETA_EconomyData::GetFrequencyOfIncomeValueRecompute() const {
    return 0;
}

TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> UMETA_EconomyData::GetForbiddenPerksForUpgrade() const {
    return TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>();
}

TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> UMETA_EconomyData::GetForbiddenPerksForFirstHeristerGeneraion() const {
    return TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>();
}

float UMETA_EconomyData::GetEquipmentCoefficientPriceForHeister() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetDurationOfHealing() const {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetDefenceLostPenaltyInterval() const {
    return FMETA_FloatInterval{};
}

int32 UMETA_EconomyData::GetDaysForRehabilitationAfterBankruptValue() const {
    return 0;
}

int32 UMETA_EconomyData::GetDailyChanceIncrease() const {
    return 0;
}

float UMETA_EconomyData::GetCostModifierForInstantHealing() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetChanceForTileIncomeToBeLoot() const {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetCashMultiplierForTurfReward() const {
    return FMETA_FloatInterval{};
}

FMETA_FloatInterval UMETA_EconomyData::GetCashMultiplierForElimination() const {
    return FMETA_FloatInterval{};
}

int32 UMETA_EconomyData::GetBuyCostModifierByWeaponAttachmens(TArray<EIGS_ModType> inMods) const {
    return 0;
}

FMETA_BossEliminationRewardsDistribution UMETA_EconomyData::GetBossEliminationRewardsDistribution() const {
    return FMETA_BossEliminationRewardsDistribution{};
}

TMap<EMETA_BossEliminationReward, int32> UMETA_EconomyData::GetBossEliminationRewardChances() const {
    return TMap<EMETA_BossEliminationReward, int32>();
}

FMETA_BMEventWeaponData UMETA_EconomyData::GetBmEventWeaponInfoByBossRespect(UObject* inWCO, EMETA_RespectLvl inBossRespectLvl, bool& outSuccess) {
    return FMETA_BMEventWeaponData{};
}

int32 UMETA_EconomyData::GetBMEventLootSelectionExpiration() const {
    return 0;
}

int32 UMETA_EconomyData::GetBMEventLootProposalsAmount() const {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetBMEventLootMonetaryValueMultiplier() const {
    return FMETA_FloatInterval{};
}

int32 UMETA_EconomyData::GetBMEventLootCooldown() const {
    return 0;
}

FMETA_BMEventEquipmentData UMETA_EconomyData::GetBmEventEquipmentInfoByBossRespect(UObject* inWCO, EMETA_RespectLvl inBossRespectLvl, bool& outSuccess) {
    return FMETA_BMEventEquipmentData{};
}

int32 UMETA_EconomyData::GetBankruptValue() const {
    return 0;
}

TArray<FMETA_Loan> UMETA_EconomyData::GetAvailableLoansByRespect(EMETA_RespectLvl inRespectLvl) {
    return TArray<FMETA_Loan>();
}

void UMETA_EconomyData::GetArmyTierData(EMETA_ArmyTier inTier, FMETA_ArmyTierConfiguration& OutInfo) const {
}

int32 UMETA_EconomyData::GetAmountOfPromotionPerksForUniqueCharacters() const {
    return 0;
}

int32 UMETA_EconomyData::GetAmountOfPromotionEquipmentsForUniqueCharacters() const {
    return 0;
}

TArray<EIGS_CharacterID> UMETA_EconomyData::GetAllSuitableGenericCharacterIdsByCharacterQuality(EMETA_ItemQuality inCharacterQuality) const {
    return TArray<EIGS_CharacterID>();
}

TArray<EMETA_ItemQuality> UMETA_EconomyData::GetAllowedHeistersForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl) const {
    return TArray<EMETA_ItemQuality>();
}

int32 UMETA_EconomyData::GetAllowedHeistersAmountForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl) const {
    return 0;
}

FMETA_MissionAdditionalMonetaryValue UMETA_EconomyData::GetAdditionalWealthOfMission(const TSubclassOf<UMETA_MissionID>& inMission) const {
    return FMETA_MissionAdditionalMonetaryValue{};
}

FMETA_CharacterInfo UMETA_EconomyData::GenerateGenericHeisterByPlayerRespectWithHireValue(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool inIsFree, bool& outSuccess) {
    return FMETA_CharacterInfo{};
}

void UMETA_EconomyData::DoesHaveAdditionalWealthConfig(const TSubclassOf<UMETA_MissionID>& inMission, bool& bHasAdditionalWealthConfig) const {
}

void UMETA_EconomyData::CalculateArmyUpkeepCost(EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyUpkeepCost) const {
}

void UMETA_EconomyData::CalculateArmyCostForDefense(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost) {
}

void UMETA_EconomyData::CalculateArmyCostForAttack(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost) {
}


