#include "IGS_EconomyData_Base.h"
#include "Templates/SubclassOf.h"

UIGS_EconomyData_Base::UIGS_EconomyData_Base() {
    this->ChanceRegenerateAllPerksIfTheyAreNegative = 0;
    this->DefaultMoneyMakingScenariosProbabilities = 0;
    this->StoryMissionRewardMultiplier = 1.50f;
    this->FailNassaraExpenses = 0;
    this->NassaraExpensesFor1stStar = 0;
    this->NassaraExpensesFor2stStar = 0;
    this->NassaraExpensesFor3stStar = 0;
    this->WeaponCoefficientPriceForHeister = 1.00f;
    this->EquipmentCoefficientPriceForHeister = 1.00f;
    this->HeisterMarketAvailableInDays = 1;
    this->HeisterMarketCooldownInDays = 0;
    this->PriceMultiplierForFirstGeneration = 1.00f;
    this->HeistersAmountOverrideInFirstGeneration = 0;
    this->HeistersPoolRefreshCostMultiplier = 0.00f;
    this->HeistersPoolRefreshStartPriceMultiplier = 1.00f;
    this->WeaponMarketAvailableInDays = 1;
    this->WeaponMarketCooldownInDays = 0;
    this->WeaponsPoolRefreshStartPriceMultiplier = 1.00f;
    this->WeaponsPoolRefreshCostMultiplier = 0.00f;
    this->NumberOfHPSegmentsForAutomaticRecovery = 0.40f;
    this->MultiplierForHealing = 1.00f;
    this->HealCostMultiplierForUniqueCharacter = 0.00f;
    this->CostModifierForInstantHealing = 0.00f;
    this->DurationOfHealing = 0;
    this->CommonData = NULL;
}

void UIGS_EconomyData_Base::UpdateWeaponsCachedData(const UObject* inWCO) {
}

void UIGS_EconomyData_Base::UpdateEquipmentCachedData(const UObject* inWCO) {
}

bool UIGS_EconomyData_Base::TryToGenerateSecondaryWeaponForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, const TArray<FGameplayTag>& inUnlockedWeapons, FMETA_RandomizedWeaponData& outRandomizedWeaponData) {
    return false;
}

bool UIGS_EconomyData_Base::TryToGenerateRandomEquipmentForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, FGameplayTag inEquippedEquipment, const TArray<FGameplayTag>& inUnlockedEquipment, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment) {
    return false;
}

bool UIGS_EconomyData_Base::TryToGeneratePrimaryWeaponForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, const TArray<FGameplayTag>& inUnlockedWeapons, FMETA_RandomizedWeaponData& outRandomizedWeaponData) {
    return false;
}

bool UIGS_EconomyData_Base::TryGetCommonPerkLimitForCharacter(UObject* inWCO, const FGameplayTag inCharacterTag, const EMETA_ItemQuality inQuality, const int32 inLevel, int32& outLimit) {
    return false;
}

void UIGS_EconomyData_Base::SetCharacterPoolNames(const UObject* inWCO, TArray<FMETA_CharacterInfo>& inGeneratedPool) {
}

void UIGS_EconomyData_Base::RefreshCommonData(const UObject* inWCO) {
}

bool UIGS_EconomyData_Base::IsMoneyMakingScenariosAdditionalWealthAndProbabilitiesContainData(FGameplayTag inFGameplayTag) const {
    return false;
}

bool UIGS_EconomyData_Base::IsItemUnlocked(TArray<FGameplayTag> inUnlockedPool, FGameplayTag inItemTag) {
    return false;
}

TArray<FGameplayTag> UIGS_EconomyData_Base::GetWeaponTagsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality) {
    return TArray<FGameplayTag>();
}

TArray<UMETA_Weapon*> UIGS_EconomyData_Base::GetWeaponsPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const TArray<FGameplayTag>& inUnlockedWeapons, TArray<FGameplayTag>& inUnseenUnlockedWeapons, TArray<UMETA_Weapon*>& inOldWeaponsPool, int32 inTargetAmountOfUnseenItemsForPurchase) {
    return TArray<UMETA_Weapon*>();
}

TArray<TSubclassOf<UMETA_WeaponInventoryObject>> UIGS_EconomyData_Base::GetWeaponsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality, const TArray<FGameplayTag>& inUnlockedWeapons, bool inIgnoreUnlock) {
    return TArray<TSubclassOf<UMETA_WeaponInventoryObject>>();
}

int32 UIGS_EconomyData_Base::GetWeaponPrice(FGameplayTag inWeaponClassTag, EMETA_ItemQuality inWeaponQuality) const {
    return 0;
}

void UIGS_EconomyData_Base::GetWeaponEconomyDataByQuality(EMETA_ItemQuality inWeaponQuality, FMETA_WeaponEconomyData& outEconomyData, bool& bSuccess) const {
}

int32 UIGS_EconomyData_Base::GetUniqueCharacterMissionCut(EIGS_CharacterID inCharacterID) const {
    return 0;
}

bool UIGS_EconomyData_Base::GetSuitableWeaponsAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, int32 inHeisterLevel, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, FCommonHeisterLoadout& outLoadout) {
    return false;
}

bool UIGS_EconomyData_Base::GetSuitableEquipmentAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_ItemQuality inHeisterQuality, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, TSubclassOf<UIGS_EquipmentInventoryObject> inCurrentEquipments, const TArray<FGameplayTag>& inUnlockedEquipment, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment) {
    return false;
}

int32 UIGS_EconomyData_Base::GetStartingLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality) {
    return 0;
}

float UIGS_EconomyData_Base::GetRewardMultiplierForDifficulty(EIGS_ScenarioDifficulty inDifficulty) const {
    return 0.0f;
}

void UIGS_EconomyData_Base::GetRandomizedUniqueCharacterCostsData(const UObject* inWCO, EIGS_CharacterID inCharacterID, int32& outUpkeepCost, int32& outHireCost) {
}

FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios UIGS_EconomyData_Base::GetMoneyMakingScenariosAdditionalWealthAndProbabilitiesData(EMETA_RespectLvl RespectLevel, FGameplayTag inFGameplayTag) const {
    return FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios{};
}

float UIGS_EconomyData_Base::GetMissionObjectiveMonetaryValue(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

int32 UIGS_EconomyData_Base::GetMissionMaxMonetaryValue(EMETA_RespectLvl inRespectLvl) const {
    return 0;
}

int32 UIGS_EconomyData_Base::GetMissionAverageMonetaryValue(EMETA_RespectLvl inRespectLvl) const {
    return 0;
}

TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> UIGS_EconomyData_Base::GetMissionAdditionalWealthMissions() {
    return TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue>();
}

int32 UIGS_EconomyData_Base::GetMaxLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality) {
    return 0;
}

TArray<FMETA_CharacterInfo> UIGS_EconomyData_Base::GetGenericHeistersPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TSet<int32> inUniqueGenericIDs, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, TArray<FIGS_CharacterClasses>& inActiveGenericVariants) {
    return TArray<FMETA_CharacterInfo>();
}

FMETA_HeisterRandomizedData UIGS_EconomyData_Base::GetGenericHeisterRandomizedData(UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_ItemQuality inHeisterQuality, int32 inHeisterLevel, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FMETA_PerkData>& inCurrentPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, bool bIsPromotion, bool& bOutSuccess) {
    return FMETA_HeisterRandomizedData{};
}

void UIGS_EconomyData_Base::GetGenericHeisterEconomyData(EIGS_CharacterID inGenericCharacterID, EMETA_ItemQuality inCharacterQuality, FMETA_HeisterEconomyData& outEconomyData, bool& bSuccess) const {
}

TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> UIGS_EconomyData_Base::GetForbiddenPerksForGenericHeisters() const {
    return TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>();
}

TArray<UMETA_Equipment*> UIGS_EconomyData_Base::GetEquipmentPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const TArray<FGameplayTag>& inUnlockedEquipment, TArray<FGameplayTag>& inUnseenUnlockedEquipment, TArray<UMETA_Equipment*>& inOldEquipmentPool, int32 inTargetAmountOfUnseenItemsForPurchase) {
    return TArray<UMETA_Equipment*>();
}

void UIGS_EconomyData_Base::GetEquipmentEconomyDataByQuality(EMETA_ItemQuality inEquipmentQuality, FMETA_EquipmentPriceIntervalsPerQuality& outEconomyData, bool& bSuccess) const {
}

int32 UIGS_EconomyData_Base::GetDefaultProbabilitiesDataForCommonMissions() const {
    return 0;
}

FMETA_MissionMonetaryValue UIGS_EconomyData_Base::GetCommonWealthOfMission(EMETA_RespectLvl inRespectLevel) const {
    return FMETA_MissionMonetaryValue{};
}

float UIGS_EconomyData_Base::GetBuyCostModifierByWeaponClass(FGameplayTag inWeaponClassTag) const {
    return 0.0f;
}

TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> UIGS_EconomyData_Base::GetAllMoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() const {
    return TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration>();
}

FMETA_CharacterInfo UIGS_EconomyData_Base::GenerateGenericHeisterByPlayerRespect(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const int32 inUniqueGenericID, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool& outSuccess) {
    return FMETA_CharacterInfo{};
}

FMETA_CharacterInfo UIGS_EconomyData_Base::GenerateGenericHeisterByIdAndTier(UObject* inWCO, EIGS_CharacterID inGenericHeisterID, EMETA_ItemQuality inGenericHeisterTier, const int32 inUniqueGenericID, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool& outSuccess) {
    return FMETA_CharacterInfo{};
}


