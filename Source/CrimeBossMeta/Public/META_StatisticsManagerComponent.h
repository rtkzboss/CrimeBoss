#pragma once
#include "CoreMinimal.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "META_StatisticNoteSaveData.h"
#include "GameplayTagContainer.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_Gang.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "EMETA_StatisticsHeisterState.h"
#include "META_CharacterID.h"
#include "META_HeisterStatisticData.h"
#include "IGS_StatisticsManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_StatisticsManagerComponent.generated.h"

class UMETA_BaseGoal;
class UMETA_BaseMission;
class UMETA_BaseStoryGraphManager;
class UMETA_Character;
class UMETA_Weapon;
class UMapTile;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_StatisticsManagerComponent : public UIGS_StatisticsManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_StatisticNoteSaveData> Statistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CareerScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartDayForStatistics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_civilians_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_gangsters_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_police_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_swat_tag;
    
public:
    UMETA_StatisticsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStatisticFromLoad(TMap<int32, FMETA_StatisticNoteSaveData> inStatistic, int32 inCurrentDay);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDayForStatistics(int32 inStartDay);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAssetFromStatistic(FGameplayTag InAsset);
    
    UFUNCTION(BlueprintCallable)
    void InitStatisticCurrentDay(int32 inDay);
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, FMETA_StatisticNoteSaveData> GetStatisticForSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_StatisticNoteSaveData GetStatisticForInteraval(int32 inStartDay, int32 inEndDay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_StatisticNoteSaveData GetStatisticByDay(int32 inDay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_StatisticNoteSaveData GetFullStatistic() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWeaponBoughtToStatistic(UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    void AddTurfMissionToStatistic(UMETA_BaseMission* inMission, FIGS_FPS2Meta_Data inFPSData, FIGS_SharedMetaTransfer_Data inShareData, EMETA_Gang inTargetGang);
    
    UFUNCTION(BlueprintCallable)
    void AddTurfMissionSoldersCasualtiesToStatistic(int32 inSoldersCasualties);
    
    UFUNCTION(BlueprintCallable)
    void AddTradeMissionToStatistic(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable)
    void AddStateToHeister(FMETA_CharacterID inID, EMETA_StatisticsHeisterState inState);
    
    UFUNCTION(BlueprintCallable)
    void AddRecruitedTurfWarSoldiersToStatistic(int32 inAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddMoneyChangesToStatistic(int32 inCurrentMoney, int32 inChangedBy);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionDataToStatistic(UMETA_BaseMission* inMission, TMap<FGameplayTag, int32> inFPSData, FIGS_FPS2Meta_Data inFPSEconomyData, FIGS_SharedMetaTransfer_Data inShareData, int32 inCountOfStars);
    
    UFUNCTION(BlueprintCallable)
    void AddLostMoneyAndLootAfterWarehouseToStatistic(int32 inLostMoney, TMap<FGameplayTag, int32> inLostLoot);
    
    UFUNCTION(BlueprintCallable)
    void AddLootChangesToStatistic(FGameplayTag inLoot, int32 inAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddIsolatedTurfdToStatistic(UMapTile* inTile);
    
    UFUNCTION(BlueprintCallable)
    void AddHiredArmyForTurfToStatistic(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeisterStatisticData AddHeisterToStatistic(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalToStatistic(TSubclassOf<UMETA_BaseGoal> inGoal, EMETA_GoalStatus inGoalStatus);
    
    UFUNCTION(BlueprintCallable)
    void AddFinishedPlotlineToStatistic(TSoftObjectPtr<UMETA_BaseStoryGraphManager> inGraphs);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyBossEliminatedToStatistic(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    void AddDay(int32 inDay);
    
    UFUNCTION(BlueprintCallable)
    void AddCampaignCompleteDataToStatistic(EMETA_CareerCompletionReason inReason, int32 inScore);
    
    UFUNCTION(BlueprintCallable)
    void AddBossPointsToStatistic(float inBossPoints);
    
    UFUNCTION(BlueprintCallable)
    void AddBossLevelToStatistics(int32 inBossLevel);
    
    UFUNCTION(BlueprintCallable)
    void AddBankruptcyDataToStatistic(bool inBankruptcy);
    
    UFUNCTION(BlueprintCallable)
    void AddAssetToStatistic(FGameplayTag InAsset, EMETA_PlotlineAssetAvailability inAvailability);
    
};

