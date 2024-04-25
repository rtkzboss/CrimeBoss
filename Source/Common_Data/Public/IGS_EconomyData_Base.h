#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "META_FloatInterval.h"
#include "META_Interval.h"
#include "CommonHeisterLoadout.h"
#include "EIGS_ModType.h"
#include "IGS_CharacterClasses.h"
#include "IGS_CharacterTableRow.h"
#include "META_AllowedEquipmentInfo.h"
#include "META_AllowedHeistersInBM_Config.h"
#include "META_AllowedWeaponsInfo.h"
#include "META_CharacterInfo.h"
#include "META_EquipmentArrayCached.h"
#include "META_EquipmentEconomyData.h"
#include "META_EquipmentPriceIntervalsPerQuality.h"
#include "META_EquipmentScopeKey.h"
#include "META_HeisterDataByTier.h"
#include "META_HeisterEconomyData.h"
#include "META_HeisterPerksDataByLevel.h"
#include "META_HeisterRandomizedData.h"
#include "META_LootBagConfiguration.h"
#include "META_MissionAdditionalMonetaryValue.h"
#include "META_MissionMonetaryValue.h"
#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"
#include "META_PerkData.h"
#include "META_RandomizedWeaponData.h"
#include "META_RewardsAndProbabilitiesForMoneyMakingScenarios.h"
#include "META_UniqueCharacterCostsData.h"
#include "META_WeaponEconomyData.h"
#include "META_WeaponScopeKey.h"
#include "META_WeaponsArrayCached.h"
#include "Templates/SubclassOf.h"
#include "IGS_EconomyData_Base.generated.h"

class UIGS_EquipmentInventoryObject;
class UIGS_GameplayEffect_PerkBase;
class UIGS_MenuCommonData_Base;
class UMETA_Equipment;
class UMETA_MissionID;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_EconomyData_Base : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_HeisterDataByTier> SetupHeisterDataPerGenericCharacterAndQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_HeisterPerksDataByLevel> SetupHeisterPerksPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_UniqueCharacterCostsData BasicUniqueCharacterCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterCostsData> UniqueCharacterCostsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MissionsCutForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_Interval> MissionsCutOverrideForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForFirstHeristerGeneraion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval ReduceHirePriceByPercentForEachBadPerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceRegenerateAllPerksIfTheyAreNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_WeaponEconomyData> SetupWeaponDataPerWeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> BuyCostModifierByWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ModType, int32> BuyCostModifierByWeaponAttachmens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_EquipmentPriceIntervalsPerQuality> SetupEquipmentDataPerEquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> BuyCostModifierByEquipmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ModType, int32> BuyCostModifierByEquipmentAttachmens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, float> HeisterUpkeepMultiplierPerEquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_MissionMonetaryValue> MissionsCommonWealthConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> MissionsAdditionalWealthConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMoneyMakingScenariosProbabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, float> RewardMultipliersForDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoryMissionRewardMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailNassaraExpenses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor1stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor2stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor3stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponCoefficientPriceForHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentCoefficientPriceForHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeisterMarketAvailableInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeisterMarketCooldownInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriceMultiplierForFirstGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeistersAmountOverrideInFirstGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedHeistersInBM_Config> AllowedHeistersPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeistersPoolRefreshCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeistersPoolRefreshStartPriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMarketAvailableInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMarketCooldownInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponsPoolRefreshStartPriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedWeaponsInfo> AllowedWeaponsPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedEquipmentInfo> AllowedEquipmentPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponsPoolRefreshCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumberOfHPSegmentsForAutomaticRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierForHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> HealCostPerRespectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> HealCostMultiplierPerHeisterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealCostMultiplierForUniqueCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostModifierForInstantHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationOfHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, float> TotalLootBagsMultiplierPerDificulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> TotalLootBagsMultiplierPerNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_Interval> RangeBagsPerNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval RandomBagSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_LootBagConfiguration> LootBagConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMETA_EquipmentEconomyData EquipmentEconomyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMETA_WeaponScopeKey, FMETA_WeaponsArrayCached> WeaponsCachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMETA_EquipmentScopeKey, FMETA_EquipmentArrayCached> EquipmentCachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_MenuCommonData_Base* CommonData;
    
public:
    UIGS_EconomyData_Base();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponsCachedData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEquipmentCachedData(const UObject* inWCO);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryToGenerateSecondaryWeaponForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, const TArray<FGameplayTag>& inUnlockedWeapons, FMETA_RandomizedWeaponData& outRandomizedWeaponData);
    
    UFUNCTION(BlueprintCallable)
    bool TryToGenerateRandomEquipmentForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, FGameplayTag inEquippedEquipment, const TArray<FGameplayTag>& inUnlockedEquipment, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);
    
    UFUNCTION(BlueprintCallable)
    bool TryToGeneratePrimaryWeaponForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, const TArray<FGameplayTag>& inUnlockedWeapons, FMETA_RandomizedWeaponData& outRandomizedWeaponData);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetCommonPerkLimitForCharacter(UObject* inWCO, const FGameplayTag inCharacterTag, const EMETA_ItemQuality inQuality, const int32 inLevel, int32& outLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterPoolNames(const UObject* inWCO, UPARAM(Ref) TArray<FMETA_CharacterInfo>& inGeneratedPool);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshCommonData(const UObject* inWCO);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoneyMakingScenariosAdditionalWealthAndProbabilitiesContainData(FGameplayTag inFGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemUnlocked(TArray<FGameplayTag> inUnlockedPool, FGameplayTag inItemTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetWeaponTagsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Weapon*> GetWeaponsPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const TArray<FGameplayTag>& inUnlockedWeapons, UPARAM(Ref) TArray<FGameplayTag>& inUnseenUnlockedWeapons, UPARAM(Ref) TArray<UMETA_Weapon*>& inOldWeaponsPool, int32 inTargetAmountOfUnseenItemsForPurchase);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> GetWeaponsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality, const TArray<FGameplayTag>& inUnlockedWeapons, bool inIgnoreUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponPrice(FGameplayTag inWeaponClassTag, EMETA_ItemQuality inWeaponQuality) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponEconomyDataByQuality(EMETA_ItemQuality inWeaponQuality, FMETA_WeaponEconomyData& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniqueCharacterMissionCut(EIGS_CharacterID inCharacterID) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSuitableWeaponsAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, int32 inHeisterLevel, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, FCommonHeisterLoadout& outLoadout);
    
    UFUNCTION(BlueprintCallable)
    bool GetSuitableEquipmentAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_ItemQuality inHeisterQuality, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, TSubclassOf<UIGS_EquipmentInventoryObject> inCurrentEquipments, const TArray<FGameplayTag>& inUnlockedEquipment, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardMultiplierForDifficulty(EIGS_ScenarioDifficulty inDifficulty) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRandomizedUniqueCharacterCostsData(const UObject* inWCO, EIGS_CharacterID inCharacterID, int32& outUpkeepCost, int32& outHireCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios GetMoneyMakingScenariosAdditionalWealthAndProbabilitiesData(EMETA_RespectLvl RespectLevel, FGameplayTag inFGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionObjectiveMonetaryValue(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionMaxMonetaryValue(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionAverageMonetaryValue(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> GetMissionAdditionalWealthMissions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_CharacterInfo> GetGenericHeistersPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TSet<int32> inUniqueGenericIDs, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeisterRandomizedData GetGenericHeisterRandomizedData(UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_ItemQuality inHeisterQuality, int32 inHeisterLevel, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FMETA_PerkData>& inCurrentPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, bool bIsPromotion, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGenericHeisterEconomyData(EIGS_CharacterID inGenericCharacterID, EMETA_ItemQuality inCharacterQuality, FMETA_HeisterEconomyData& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForGenericHeisters() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Equipment*> GetEquipmentPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FGameplayTag>& inUnseenUnlockedEquipment, UPARAM(Ref) TArray<UMETA_Equipment*>& inOldEquipmentPool, int32 inTargetAmountOfUnseenItemsForPurchase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquipmentEconomyDataByQuality(EMETA_ItemQuality inEquipmentQuality, FMETA_EquipmentPriceIntervalsPerQuality& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultProbabilitiesDataForCommonMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_MissionMonetaryValue GetCommonWealthOfMission(EMETA_RespectLvl inRespectLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuyCostModifierByWeaponClass(FGameplayTag inWeaponClassTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> GetAllMoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_CharacterInfo GenerateGenericHeisterByPlayerRespect(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, const int32 inUniqueGenericID, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    FMETA_CharacterInfo GenerateGenericHeisterByIdAndTier(UObject* inWCO, EIGS_CharacterID inGenericHeisterID, EMETA_ItemQuality inGenericHeisterTier, const int32 inUniqueGenericID, bool inCanLevelUp, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<FGameplayTag>& inUnlockedEquipment, UPARAM(Ref) TArray<FIGS_CharacterClasses>& inActiveGenericVariants, bool& outSuccess);
    
};

