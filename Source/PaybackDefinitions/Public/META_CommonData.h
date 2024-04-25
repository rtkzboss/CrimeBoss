#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_AITiers.h"
#include "EIGS_CharacterID.h"
#include "EMETA_AmbushType.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_Heat.h"
#include "EMETA_IntelUnlockLevel.h"
#include "EMETA_PoliceInvestigationChangeForGraph.h"
#include "EMETA_RandEventCategory.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TradeRelationship.h"
#include "EMETA_TradeVendor.h"
#include "IGS_MenuCommonData_Base.h"
#include "META_AmbushConfig.h"
#include "META_DetectiveChancesToAppear.h"
#include "META_DetectivesInvestigationConfig.h"
#include "META_FloatInterval.h"
#include "META_GangTradeInfo.h"
#include "META_HealLevelData.h"
#include "META_HeatHeistsData.h"
#include "META_HeatTurfWarData.h"
#include "META_IntelDataSetup.h"
#include "META_Interval.h"
#include "META_PawnShopTrendData.h"
#include "META_PerkInfo.h"
#include "META_RandEventCategoryConfig.h"
#include "META_TradeRelationshipInfo.h"
#include "META_CommonData.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_CommonData : public UIGS_MenuCommonData_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> RelationOfTurfsToRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID PlayersCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfMissionsCanBeCompletedByBossPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPickSecondaryGangFromNearestGangs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> CrewCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayOfBunkruptcyWhenHeistersStartLeavePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeForCharactersMoodSwitchToNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GoodTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BadTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceForNoTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceForOneTrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceForTwoTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationValueForMissionWithAllStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationValueForMissionWithTwoStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationValueForMissionWithOneStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationValueForMissionWithoutStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EMETA_FPSMissionSubtype> FPSSubtypesNotAffectingInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPoliceInvestigationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationPerKilledDetective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationPerKilledCivilian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationPerStartedBancruptcy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_Heat HeatLevelWhenPoliceInvestigation100Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> PoliceInvestigationIncreaseForElapsedDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceInvestigationChangeForTurfCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_PoliceInvestigationChangeForGraph, int32> PoliceInvestigationChangeForGraphAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_AITiers, int32> SWATTierDependingOnInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_Heat InitialHeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialHeatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval InternalHeatRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Heat, FMETA_HealLevelData> HeatLevelsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_HeatTurfWarData HeatBasedOnTurfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_HeatHeistsData HeatBasedOnHeists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DetectiveObjectivePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfDetectivesPerCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GangTileThresholdForDetectiveSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_DetectivesInvestigationConfig> DetectivesConfigurationPerPoliceInvestigationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval PercentageOfSoldiersArrestedByDetectiveOnPlayersTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfDaysDetectivesStaysOnTileAfterNeutralization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_DetectiveChancesToAppear DetectiveChancesToAppear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_AmbushConfig AmbushConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EMETA_AmbushType> AmbushTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_IntelDataSetup IntelDataSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRandEventsCategoriesPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMETA_RandEventCategory> RandEventsCategoriesPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RandEventCategory, FMETA_RandEventCategoryConfig> RandEventsCategoryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HowManyDaysGenericHeistersStayingInPoolForFuneral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownForFuneralOfGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SurvivalEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForSurvivalMissionForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForSurvivalMissionForGenericCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval DaysIntervalForSurvivalEventAfterLoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelfReturnEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForSelfReturnForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForSelfReturnForGenericCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval DaysIntervalForSelfReturnAfterLoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToLosePrimaryWeaponAfterReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToLoseSecondaryWeaponAfterReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceOfArrestForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceOfArrestForGenericCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MissingHeisterDeathEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForDeathOfUniqueCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForDeathOfGenericCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval DaysIntervalForDeathEventAfterLoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationMoneyMakingOpportunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownMoneyMakingOpportunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MissionGeneratedEveryDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveUnfinishedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmountOfActiveGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmountOfAvailableGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TradeRelationship, FMETA_TradeRelationshipInfo> TradeRelationshipInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TradeVendor, FMETA_GangTradeInfo> GangTradeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_PerkInfo> PerkInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TradeVendor, EMETA_TradeRelationship> InitialTradeRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockedLootTagsForTrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPriceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreasePriceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TradeVendorCooldownAfterFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval LootAmountPercentForAmbush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_PawnShopTrendData> TrendsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceOfUsingPriorityPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceOfCharacterCanBeSelectedForRevengePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfSuccessfulMissionsForFirstUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfSuccessfulMissionsForNextUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RevengePoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfUnseenItemsToBeAddedForPurchase;
    
public:
    UMETA_CommonData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedRemoveUnfinishedMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_TradeVendor> GetVendorsForTrade(FGameplayTag inLootTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTrendDataByLootTag(FGameplayTag inMainLootTag, FMETA_PawnShopTrendData& outTrendData, bool& outSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTradeVendorCooldownAfterFailure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_TradeRelationshipInfo GetTradeRelationshipInfo(EMETA_TradeRelationship inTradeRelationship, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTradeRelationshipData(TMap<EMETA_TradeRelationship, int32>& outBetterPriceChancesData, TMap<EMETA_TradeRelationship, int32>& outNoDealChancesData, TMap<EMETA_TradeRelationship, int32>& outVendorAttackChancesData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeForCharactersMoodSwitchToNeutral() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_RespectLvl GetRespectLvlRelatedToTurfsAmount(int32 inTurfsUnderControl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomPoolSize() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRandomizedPercentOfSoldiersArrestedByDetectiveOnPlayersTile();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomizedAmountOfDaysDetectivesStaysOnTileAfterNeutralization();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_RandEventCategory> GetRandEventsCategoriesPriority() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_RandEventCategoryConfig GetRandEventCategoryConfig(EMETA_RandEventCategory inRandEventCategory);
    
    UFUNCTION(BlueprintCallable)
    void GetPricesForLootByVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag, int32 inAmountOfLoot, int32& outOriginPrice, int32& outIncreasePrice, int32& outMaxPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriceBonus(EMETA_TradeVendor inTradeVendor, FGameplayTag inLootTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoliceInvestigationPerStartedBancruptcy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoliceInvestigationPerKilledDetective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoliceInvestigationPerKilledCivilian() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoliceInvestigationIncreaseForElapsedDay(EMETA_RespectLvl inCurrentRespect) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPoliceInvestigationGradeByMissionObjectivesResults(bool inMissionSuccess, bool inClenExecObjectiveRes, bool inExtraObjectiveRes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoliceInvestigationChangeForTurfCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_PoliceInvestigationChangeForGraph, int32> GetPoliceInvestigationChangeForGraphAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_CharacterID GetPlayersCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, FMETA_PerkInfo> GetPerkInfoData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_PerkInfo GetPerkInfo(FGameplayTag inPerk, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxRevengePoolSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPoliceInvestigationValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmountOfAvailableGoals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmountOfActiveGoals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetMainLootTagsForTrends() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetLootAmountPercentForAmbush() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_Interval GetInternalHeatRange();
    
    UFUNCTION(BlueprintCallable)
    EMETA_IntelUnlockLevel GetIntelUnlockedLevelByIntelValue(int32 inIntelLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_IntelDataSetup GetIntelDataSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_TradeVendor, EMETA_TradeRelationship> GetInitialTradeRelationship() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialHeatValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_Heat GetInitialHeatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetID_SurvivalEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetID_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetID_DeathEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHowManyDaysGenericHeistersStayingInPoolForFuneral() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeatTurfWarData GetHeatTurfWarData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_Heat GetHeatLevelWhenPoliceInvestigation100Percent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_Heat, FMETA_HealLevelData> GetHeatLevelsData() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeatHeistsData GetHeatHeistsData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetGoodTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_GangTradeInfo GetGangTradeInfo(EMETA_TradeVendor inTradeVendor, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDurationMoneyMakingOpportunities() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_DetectivesInvestigationConfig GetDetectivesInvestigationConfigForPoliceInvestigationPercent(int32 inPoliceInvestigationPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDetectiveObjectivePreset() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_DetectiveChancesToAppear GetDetectiveChancesToAppear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetDaysIntervalAfterLoss_SurvivalEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetDaysIntervalAfterLoss_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetDaysIntervalAfterLoss_DeathEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDayOfBankruptcyWhenHeistersStartLeavePlayer() const;
    
    UFUNCTION(BlueprintCallable)
    EIGS_AITiers GetCurrentSWATTier(int32 inInvestigation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCrewCapacity(EMETA_RespectLvl inBossStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCooldownMoneyMakingOpportunities() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCooldownForFuneralOfGenericHeisters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChanceToPickSecondaryGangFromNearestGangs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChancesForWeaponsLoss_SelfReturnEvent(float& outChanceToLosePrimaryWeaponAfterReturn, float& outChanceToLoseSecondaryWeaponAfterReturn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceOfUsingPriorityPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceOfCharacterCanBeSelectedForRevengePool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForUnique_SurvivalEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForUnique_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForUnique_DeathEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForUnique_ArrestEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForGeneric_SurvivalEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForGeneric_SelfReturnEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForGeneric_DeathEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForGeneric_ArrestEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBossLoadout(UClass*& outPrimaryWeapon, UClass*& outSecondaryWeapon, UClass*& outEquipment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetBadTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAmountOfUnseenItemsToBeAddedForPurchase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAmountOfSuccessfulMissionsForNextUnlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAmountOfSuccessfulMissionsForFirstUnlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfMissionsCanBeCompletedByBossPerDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfInitialTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAmountMissionGeneratedEveryDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_AmbushType GetAmbushTypeByFPSMissionTag(FGameplayTag inMissionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAmbushTagByType(EMETA_AmbushType inType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_AmbushConfig GetAmbushConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseRandEventsCategoriesPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLootItemBeTradedWithVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFPSMissionAffectPoliceInvestigation(EMETA_FPSMissionSubtype inSubtype) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFPSMissionAffectHeat(EMETA_FPSMissionSubtype inSubtype) const;
    
};

