#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "IGS_AnalyticsCommonMetaAttributes.h"
#include "IGS_Analytics.generated.h"

UCLASS(Blueprintable)
class BF_ANALYTICS_API UIGS_Analytics : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UIGS_Analytics();

    UFUNCTION(BlueprintCallable)
    static void WeaponBought_v3(const FString& inScreenTag, const FString& inWeaponId, const FString& inQuality, int32 inPrice, bool inBuyBack, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void WeaponBought_v2(const FString& inScreenTag, const FString& inWeaponId, const FString& inQuality, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void WeaponBought(const FString& inScreenTag, const FString& inWeaponId, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void SoldiersHired(int32 inAmount, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshWeaponsForSale(const FString& inScreenTag, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshCharactersForHire(const FString& inScreenTag, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void QuickjoinUsed(const FString& resultText, float waitingTime);
    
    UFUNCTION(BlueprintCallable)
    static void PlotlineStarted(const FString& plotlineName, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void PlotlineFinished(const FString& plotlineName, const FString& resultText, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes, int32 plotlineOutcomeID, const FString& plotlineOutcomeSummary);
    
    UFUNCTION(BlueprintCallable)
    static void PlotlineCheckpointReached(int32 campaignID, const FString& checkpointID);
    
    UFUNCTION(BlueprintCallable)
    static void PlatformShopOpened(const FString& inScreenTag, const FString& inAssetID);
    
    UFUNCTION(BlueprintCallable)
    static void MoneyEarned(float Money, float totalMoney, const FString& Source, const FString& inScreenTag, bool isMultiplayer);
    
private:
    UFUNCTION(BlueprintCallable)
    static void MissionStarted(const FString& MissionName, const FString& missionVariant, bool isMultiplayer, bool isQuickJoin, bool isJIP, int32 numBots, int32 Day, int32 ArmySize, int32 armyAvailable, bool isChain, int32 Investigation, int32 attempt);
    
    UFUNCTION(BlueprintCallable)
    static void MissionFinished(const FString& MissionName, const FString& missionVariant, int32 Status, float GameplayTime, const FString& weaponUsed);
    
public:
    UFUNCTION(BlueprintCallable)
    static void LootSold(const FString& inLootCategory, int32 inAmount, float inTrend, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void LoanTaken(int32 inAmount, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void InviteSent(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static void InviteAccepted(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static void HeisterHired_v2(const FString& inScreenTag, const FString& inCharacterID, const FString& inQuality, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void HeisterHired(const FString& inScreenTag, const FString& inCharacterID, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void GoalStarted(const FString& goalName, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void GoalFinished(const FString& goalName, const FString& resultText, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes, TArray<int32> visitedNodes);
    
    UFUNCTION(BlueprintCallable)
    static void EquipmentBought_v2(const FString& inScreenTag, const FString& inEquipmentId, const FString& inQuality, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void EquipmentBought(const FString& inScreenTag, const FString& inEquipmentId, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void DismissCharacter(const FString& inScreenTag, const FString& inCharacterID, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void DayStarted2(int32 upkeep, FIGS_AnalyticsCommonMetaAttributes inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void DayStarted(int32 campaignID, int32 Day, int32 Heat, int32 Respect, int32 Investigation, int32 Cash, int32 upkeep, int32 OwnedTurfs, int32 AvailableHeisters, int32 AvailableArmy);
    
    UFUNCTION(BlueprintCallable)
    static void CampaignStarted(const FString& CampaignMode, int32 CampaignNum);
    
    UFUNCTION(BlueprintCallable)
    static void CampaignFinished(const FString& CampaignMode, const FString& campaignResult, FIGS_AnalyticsCommonMetaAttributes inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void BossCardPicked(const FString& inCardID, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void AssetBought(const FString& inAssetID, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes);
    
};

