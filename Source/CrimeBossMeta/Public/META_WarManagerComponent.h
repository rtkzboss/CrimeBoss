#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_BossGangRelationship.h"
#include "EMETA_Gang.h"
#include "EMETA_GangAttitudeList.h"
#include "EMETA_GangStrategy.h"
#include "EMETA_TradeRelationship.h"
#include "EMETA_TradeVendor.h"
#include "META_ConditionForArmyTierChanging.h"
#include "META_EffectOnAIBossStrength.h"
#include "META_GangArmyTierChangeQueueData.h"
#include "META_GangInfo.h"
#include "META_TurfHistory.h"
#include "IGS_WarManagerBaseComponent.h"
#include "META_GangArmyTierChangedDelegate.h"
#include "META_GangWasAddedToAttitudeListDelegate.h"
#include "META_WarManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_WarManagerComponent : public UIGS_WarManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_GangArmyTierChanged OnGangArmyTierChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_GangWasAddedToAttitudeList OnGangWasAddedToAttitudeList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangInfo> GangsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TradeVendor, EMETA_TradeRelationship> TradeRelationshipWithGangs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, float> ChanceCounterToAttackAdjacentTerritory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TradeVendor, int32> TradeVendorsCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TodaysLockedTilesForAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_TurfHistory> TurfHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ConditionForArmyTierChanging> CompletedConditionsForArmyTierChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeutralDaysThresholdFromAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnfriendlyDaysThresholdFromAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TodayAttemptsToAttackTurf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, int32> GangAttacksCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, int32> CounterForSpecialTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountOfDaysForMoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLastTileConfigIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangArmyTierChangeQueueData> GangsArmyTierChangeQueue;
    
public:
    UMETA_WarManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncArmyTierChangingConditionsWithInitial(UPARAM(Ref) TArray<FMETA_ConditionForArmyTierChanging>& inInitialConditions);
    
    UFUNCTION(BlueprintCallable)
    void SetTradeRelationship(EMETA_TradeVendor inTradeVendor, EMETA_TradeRelationship inTradeRelationship);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialArmyTierDurationForGang(EMETA_Gang inGang, int32 inNewDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetGangStrategy(EMETA_Gang inGang, EMETA_GangStrategy inStrategy);
    
    UFUNCTION(BlueprintCallable)
    void SetGangModifierDuration(EMETA_Gang inGang, FGameplayTag inModifier, int32 inDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetGangInfo(EMETA_Gang inGang, const FMETA_GangInfo& inGangInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetGangArmyTier(EMETA_Gang inGang, EMETA_ArmyTier inArmyTier, int32 inSpecialTierDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetChanceToAttackAnyAdjacentTerritory(EMETA_Gang inGang, float inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCashForGang(EMETA_Gang inGang, int32 inCash);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseAIBossStrength(EMETA_Gang inGang, int32 inNewValue, bool bIsClamped);
    
    UFUNCTION(BlueprintCallable)
    void SetAIBossStrengthChangeFromTerritory(EMETA_Gang inGang, int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResolveConflictingGangAttitudes(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGangFromAttitudeList(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromLostTiles(EMETA_Gang inGang, FGameplayTag inTileID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAIBossStrengthEffectByIndex(EMETA_Gang inGang, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void RecomputeAIBossStrengthOnPlayerAttackOrDefense(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    void RecomputeAIBossStrengthOnNewDay(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTradeVendorHasCooldown(EMETA_TradeVendor inTradeVendor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereGangInAttitudeList(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCampaignWon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArmyTierChangingConditionAlreadyCompleted(EMETA_Gang inGang, const FMETA_ConditionForArmyTierChanging& inCompletedCondition) const;
    
    UFUNCTION(BlueprintCallable)
    void InitTradeRelationship();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_TurfHistory GetTurfHistoryOfDay(int32 inDay) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfHistory GetTurfHistoryOfAmountOfPreviousDays(int32 inCurrentDay, int32 inConsideringDaysAmount, bool inIncludeCurrentDay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_TradeVendor, EMETA_TradeRelationship> GetTradeRelationshipInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_TradeRelationship GetTradeRelationshipForGang(EMETA_TradeVendor inTradeVendor) const;
    
    UFUNCTION(BlueprintCallable)
    EMETA_BossGangRelationship GetRelationshipToBossInDays(EMETA_Gang BossGang, EMETA_Gang Gang, int32 CurrentDay);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetLostTiles(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_GangStrategy GetGangStrategy(EMETA_Gang inGang) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGangModifierDuration(EMETA_Gang inGang, FGameplayTag inModifier, bool& outSuccess) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_GangInfo GetGangInfo(EMETA_Gang inGang, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool GetGangAttitudeList(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, TMap<EMETA_Gang, int32>& outAttitudeList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EMETA_ArmyTier GetGangArmyTier(EMETA_Gang inGang) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChanceToAttackAnyAdjacentTerritory(EMETA_Gang inGang) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseAIBossStrength(EMETA_Gang inGang) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_EffectOnAIBossStrength> GetAIBossStrengthEffects(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAIBossStrengthChangeFromTerritory(EMETA_Gang inGang) const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementLostTilesDurationForLostTiles();
    
    UFUNCTION(BlueprintCallable)
    void DecrementDurationInsideEachGangAttitudeList();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseTradeVendorCooldowns();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTradeRelationshipByLevel(EMETA_TradeVendor inTradeVendor, int32 inLevel);
    
    UFUNCTION(BlueprintCallable)
    void ChangeGangExistingDurationInAttitudeList(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang, int32 inByValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeChanceToAttackAnyAdjacentTerritory(EMETA_Gang inGang, float inChangeValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCashForGang(EMETA_Gang inGang, int32 inByValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBaseAIBossStrength(EMETA_Gang inGang, int32 inChangeValue, bool bIsClamped);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAIBossStrengthChangeFromTerritory(EMETA_Gang inGang, int32 inChangeValue);
    
    UFUNCTION(BlueprintCallable)
    void AddTurfChangeToHistory(int32 inDay, EMETA_Gang inPreviousTurfOwner, EMETA_Gang inNewOwner);
    
    UFUNCTION(BlueprintCallable)
    void AddTradeVendorCooldown(EMETA_TradeVendor inTradeVendor, int32 inDaysCooldown);
    
    UFUNCTION(BlueprintCallable)
    void AddToLostTiles(EMETA_Gang inGang, FGameplayTag inTileID, int32 inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddGangToAttitudeList(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang, int32 inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddArmyTierChangingConditionAsCompleted(EMETA_Gang inGang, UPARAM(Ref) FMETA_ConditionForArmyTierChanging& inCompletedCondition);
    
    UFUNCTION(BlueprintCallable)
    void AddAIBossStrengthEffect(EMETA_Gang inGang, FMETA_EffectOnAIBossStrength inNewEffect);
    
};

