#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_EventTime.h"
#include "EMETA_GoalStatus.h"
#include "META_HeistersOnEvent.h"
#include "META_GraphNodeSave.h"
#include "META_GraphStructSave.h"
#include "META_LoopBranchNodeSaveData.h"
#include "META_TimerNodeSaveData.h"
#include "META_EventManagerSaveData.generated.h"

class UMETA_BaseStoryGraphManager;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_EventManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GraphStructSave> DefaultGraphValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_HeistersOnEvent> HeistersOnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMETA_EventTime EventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SavedGraphVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bPoolFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_GraphNodeSave, FMETA_TimerNodeSaveData> SavedTimerNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_GraphNodeSave, FMETA_LoopBranchNodeSaveData> SavedLoopBranchNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GoalStatus> FinishedGraphsResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32> PreparedPlotlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SavedEconomyGraphVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, TSoftObjectPtr<UMETA_BaseStoryGraphManager>> SavedParentGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShouldCallEndDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bEndDayWasCalled;
    
    FMETA_EventManagerSaveData();
};

