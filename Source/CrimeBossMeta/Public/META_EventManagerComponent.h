#pragma once
#include "CoreMinimal.h"
#include "META_GoalSave.h"
#include "META_GraphNodeSave.h"
#include "META_LoopBranchNodeSaveData.h"
#include "META_TimerNodeSaveData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_CharacterState.h"
#include "EMETA_ConditionExprOperator.h"
#include "EMETA_EventTime.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_GraphStatus.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_CharacterID.h"
#include "META_HeistersOnEvent.h"
#include "IGS_EventManagerBaseComponent.h"
#include "META_GraphStruct.h"
#include "META_GraphVariableChangeDelegate.h"
#include "META_OwnedAssetsChangedDelegate.h"
#include "META_EventManagerComponent.generated.h"

class UGenericGraphNode;
class UMETA_BaseCondition;
class UMETA_BaseHeisterCondition;
class UMETA_BaseStoryGraphManager;
class UMETA_Graph;
class UMETA_TaskCondition;
class UStoryGraphManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_EventManagerComponent : public UIGS_EventManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_GraphVariableChange OnGraphVariableChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_OwnedAssetsChanged OnOwnedAssetsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_HeistersOnEvent> HeistersOnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivePlanningBoardsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EMETA_PlanningBoardItemStatus> PlanningBoardItemsStatuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_EventTime EventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPoolFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_GraphNodeSave, FMETA_TimerNodeSaveData> TimerNodesSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> GraphVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_GraphNodeSave, FMETA_LoopBranchNodeSaveData> LoopBranchNodesSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDataLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GoalStatus> FinishedGraphsResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStoryGraphManager>, int32> PreparedPlotlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStoryGraphManager>, TSoftObjectPtr<UStoryGraphManager>> ParentGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> EconomyGraphVaribales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCallEndDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndDayIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreGraphsInProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestForGraphsReprocess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> LocalRemovedGraph;
    
public:
    UMETA_EventManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasGraphStarted(const FMETA_GraphStruct& inGraphData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TrySetSubGraphResult(const TSoftObjectPtr<UStoryGraphManager>& ParentGraph, const TSoftObjectPtr<UStoryGraphManager>& SubGraph, EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_GraphStatus ToggleGraph(const TSoftObjectPtr<UStoryGraphManager>& GraphManager, EMETA_GraphStatus NewStatus, bool bNeedExecute);
    
    UFUNCTION(BlueprintCallable)
    bool SwapCurrentNodeIds(UPARAM(Ref) FMETA_GraphStruct& inGraphData, int32 inOriginNodeId, int32 inTargetNodeId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetParentGraphByStoryGraph(const TSoftObjectPtr<UStoryGraphManager>& inGraph, const TSoftObjectPtr<UStoryGraphManager>& inParentGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGraphVarValue(FGameplayTag inVarTag, int32 inNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGraphResult(const TSoftObjectPtr<UStoryGraphManager>& Graph, EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveParentGraphByStoryGraph(const TSoftObjectPtr<UStoryGraphManager>& inGraph);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNodeFromCurrentNodes(UPARAM(Ref) FMETA_GraphStruct& inGraphData, int32 inNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveHeisterFromEvent(FGameplayTag inEventTag, FMETA_CharacterID inHeisterID, EMETA_CharacterState inNewState, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAllHeistersFromEvent(FGameplayTag inEventTag, EMETA_CharacterState inNewState, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void MoveGraphToNode(UPARAM(Ref) FMETA_GraphStruct& inGraphData, int32 inOriginNodeId, int32 inTargetNodeId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadTasksByGoalSave(UPARAM(Ref) FMETA_GoalSave& inGoalSave, TArray<UMETA_TaskCondition*>& Tasks, TArray<UMETA_TaskCondition*>& FinishedInnerTasks);
    
    UFUNCTION(BlueprintCallable)
    void GetUnfinishedInnerGraphsByGraph(const TSoftObjectPtr<UStoryGraphManager>& inGraph, TArray<TSoftObjectPtr<UStoryGraphManager>>& outGraphs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetTimerNodesSaveData(const FMETA_GraphNodeSave& inNodeID, FMETA_TimerNodeSaveData& TimerData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetPersistentVarValue(FGameplayTag inVarTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UStoryGraphManager> GetParentGraphByStoryGraph(const TSoftObjectPtr<UStoryGraphManager>& inGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UMETA_Graph* GetMasterGraphNodeByStoryGraph(UStoryGraphManager* Graph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_Graph* GetMasterGraphNodeByGenericGraph(UStoryGraphManager* inGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetLoopBranchNodesSaveData(const FMETA_GraphNodeSave& inNodeID, FMETA_LoopBranchNodeSaveData& LoopBranchData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMETA_CharacterID GetHeisterFromEvent(FGameplayTag inEventTag, int32 inHeisterIndex, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetGraphVarValue(FGameplayTag inVarTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UStoryGraphManager> GetGoalGraphByNode(const UGenericGraphNode* inNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UStoryGraphManager> GetGoalGraphByGraph(const TSoftObjectPtr<UStoryGraphManager>& inGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_EventTime GetEventTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_CharacterID> GetAllHeistersFromEvent(FGameplayTag inEventTag, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateManyHeisterConditions(const FMETA_CharacterID inCharacter, TArray<UMETA_BaseHeisterCondition*> inConditions, const EMETA_ConditionExprOperator inConditionOperator);
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateManyGraphConditions(TArray<UMETA_BaseCondition*> inConditions, const EMETA_ConditionExprOperator inConditionOperator);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentNodes(UPARAM(Ref) FMETA_GraphStruct& inGraphData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeGraphVarValue(FGameplayTag inVarTag, int32 inChangeByValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGraphBeExecutedFromBeginning(const FMETA_GraphStruct& inGraphData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddHeisterToEvent(FGameplayTag inEventTag, const FMETA_CharacterID inCharacterID, bool inUseInternalCheckForState);
    
};

