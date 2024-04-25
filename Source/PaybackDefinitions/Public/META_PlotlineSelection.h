#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_BonusType.h"
#include "EMETA_CampaignVictoryCondition.h"
#include "EMETA_Gang.h"
#include "EMETA_GraphStatus.h"
#include "META_CareerStartStuff.h"
#include "META_EnemyTierLimitOnCampaignStart.h"
#include "META_GangInitialConfiguration.h"
#include "META_Interval.h"
#include "META_PlotlineGraphStartTime.h"
#include "META_UniqueCharacterGraphInfo.h"
#include "Templates/SubclassOf.h"
#include "META_PlotlineSelection.generated.h"

class UMETA_BaseGoal;
class UMETA_BaseStoryGraphManager;

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_PlotlineSelection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CampaignModeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_BaseGoal> PrimaryGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_CampaignVictoryCondition CampaignVictoryCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_CareerStartStuff CareerStartConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartingUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigationGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_Interval> PlotlineDaysArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AnyNextPlotlineDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> StartedGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMETA_BaseStoryGraphManager>> GraphsCanBeExecutedWhenGameFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterGraphInfo> CharacterStoryGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime> PlotlineGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> CrewRandEventsGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> SpecialCrewEventsGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> EntitlementGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval InitialTerritoryAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSoldiersAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ArmyTier InitialArmyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> PlayerTileGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EMETA_BonusType> IgnoredBossBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_EnemyTierLimitOnCampaignStart EnemyTierLimitOnCampaignStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangInitialConfiguration> GangsInitialConfiguration;
    
public:
    UMETA_PlotlineSelection();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossBonusIgnored(EMETA_BonusType inBonusType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetStartingUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> GetStartedGraphs(const TArray<EIGS_CharacterID>& inAvailableUniqueCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetSpecialCrewEventsGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomizedValidTileGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomizedPlayersInitialTerritory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_BaseGoal> GetPrimaryGoalID() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime> GetPlotlineGraphs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_Interval> GetPlotlineDaysArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTagContainer> GetPlayerTileGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInvestigationGrowthMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialSoldiersAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ArmyTier GetInitialArmyTier() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_GangInitialConfiguration GetGangInitialConfig(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalScoreMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> GetEntitlementsGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_EnemyTierLimitOnCampaignStart GetEnemyTierLimitOnCampaignStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetCrewRandEventsGraph() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CareerStartStuff GetCareerStartStuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_CampaignVictoryCondition GetCampaignVictoryCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCampaignModeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAnyNextPlotlineDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGraphBeExecutedWhenGameFinished(const TSoftObjectPtr<UMETA_BaseStoryGraphManager>& inGraph) const;
    
};

