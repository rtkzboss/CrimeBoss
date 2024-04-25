#include "META_EventManagerComponent.h"

UMETA_EventManagerComponent::UMETA_EventManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventTime = EMETA_EventTime::DayStart;
    this->bPoolFrozen = false;
    this->bDataLoaded = false;
    this->bShouldCallEndDay = false;
    this->bEndDayIsRunning = false;
    this->AreGraphsInProcessing = false;
    this->RequestForGraphsReprocess = false;
}

bool UMETA_EventManagerComponent::WasGraphStarted(const FMETA_GraphStruct& inGraphData) {
    return false;
}

void UMETA_EventManagerComponent::TrySetSubGraphResult_Implementation(const TSoftObjectPtr<UStoryGraphManager>& ParentGraph, const TSoftObjectPtr<UStoryGraphManager>& SubGraph, EMETA_GoalStatus inResult) {
}

EMETA_GraphStatus UMETA_EventManagerComponent::ToggleGraph_Implementation(const TSoftObjectPtr<UStoryGraphManager>& GraphManager, EMETA_GraphStatus NewStatus, bool bNeedExecute) {
    return EMETA_GraphStatus::Active;
}

bool UMETA_EventManagerComponent::SwapCurrentNodeIds(FMETA_GraphStruct& inGraphData, int32 inOriginNodeId, int32 inTargetNodeId) {
    return false;
}

void UMETA_EventManagerComponent::SetParentGraphByStoryGraph_Implementation(const TSoftObjectPtr<UStoryGraphManager>& inGraph, const TSoftObjectPtr<UStoryGraphManager>& inParentGraph) {
}

void UMETA_EventManagerComponent::SetGraphVarValue_Implementation(FGameplayTag inVarTag, int32 inNewValue) {
}

void UMETA_EventManagerComponent::SaveGraphResult_Implementation(const TSoftObjectPtr<UStoryGraphManager>& Graph, EMETA_GoalStatus inResult) {
}

void UMETA_EventManagerComponent::RemoveParentGraphByStoryGraph_Implementation(const TSoftObjectPtr<UStoryGraphManager>& inGraph) {
}

void UMETA_EventManagerComponent::RemoveNodeFromCurrentNodes(FMETA_GraphStruct& inGraphData, int32 inNodeID) {
}

void UMETA_EventManagerComponent::RemoveHeisterFromEvent_Implementation(FGameplayTag inEventTag, FMETA_CharacterID inHeisterID, EMETA_CharacterState inNewState, bool& outSuccess) {
}

void UMETA_EventManagerComponent::RemoveAllHeistersFromEvent_Implementation(FGameplayTag inEventTag, EMETA_CharacterState inNewState, bool& outSuccess) {
}

void UMETA_EventManagerComponent::MoveGraphToNode(FMETA_GraphStruct& inGraphData, int32 inOriginNodeId, int32 inTargetNodeId) {
}

void UMETA_EventManagerComponent::LoadTasksByGoalSave_Implementation(FMETA_GoalSave& inGoalSave, TArray<UMETA_TaskCondition*>& Tasks, TArray<UMETA_TaskCondition*>& FinishedInnerTasks) {
}

void UMETA_EventManagerComponent::GetUnfinishedInnerGraphsByGraph(const TSoftObjectPtr<UStoryGraphManager>& inGraph, TArray<TSoftObjectPtr<UStoryGraphManager>>& outGraphs) {
}


int32 UMETA_EventManagerComponent::GetPersistentVarValue_Implementation(FGameplayTag inVarTag) {
    return 0;
}

TSoftObjectPtr<UStoryGraphManager> UMETA_EventManagerComponent::GetParentGraphByStoryGraph_Implementation(const TSoftObjectPtr<UStoryGraphManager>& inGraph) {
    return NULL;
}

UMETA_Graph* UMETA_EventManagerComponent::GetMasterGraphNodeByStoryGraph_Implementation(UStoryGraphManager* Graph) {
    return NULL;
}

UMETA_Graph* UMETA_EventManagerComponent::GetMasterGraphNodeByGenericGraph_Implementation(UStoryGraphManager* inGraph) {
    return NULL;
}


FMETA_CharacterID UMETA_EventManagerComponent::GetHeisterFromEvent_Implementation(FGameplayTag inEventTag, int32 inHeisterIndex, bool& outSuccess) {
    return FMETA_CharacterID{};
}

int32 UMETA_EventManagerComponent::GetGraphVarValue_Implementation(FGameplayTag inVarTag) {
    return 0;
}

TSoftObjectPtr<UStoryGraphManager> UMETA_EventManagerComponent::GetGoalGraphByNode_Implementation(const UGenericGraphNode* inNode) {
    return NULL;
}

TSoftObjectPtr<UStoryGraphManager> UMETA_EventManagerComponent::GetGoalGraphByGraph_Implementation(const TSoftObjectPtr<UStoryGraphManager>& inGraph) {
    return NULL;
}

EMETA_EventTime UMETA_EventManagerComponent::GetEventTime_Implementation() {
    return EMETA_EventTime::DayStart;
}

int32 UMETA_EventManagerComponent::GetCurrentDay_Implementation() {
    return 0;
}

TArray<FMETA_CharacterID> UMETA_EventManagerComponent::GetAllHeistersFromEvent_Implementation(FGameplayTag inEventTag, bool& outSuccess) {
    return TArray<FMETA_CharacterID>();
}

bool UMETA_EventManagerComponent::EvaluateManyHeisterConditions(const FMETA_CharacterID inCharacter, TArray<UMETA_BaseHeisterCondition*> inConditions, const EMETA_ConditionExprOperator inConditionOperator) {
    return false;
}

bool UMETA_EventManagerComponent::EvaluateManyGraphConditions(TArray<UMETA_BaseCondition*> inConditions, const EMETA_ConditionExprOperator inConditionOperator) {
    return false;
}

void UMETA_EventManagerComponent::ClearCurrentNodes(FMETA_GraphStruct& inGraphData) {
}

void UMETA_EventManagerComponent::ChangeGraphVarValue_Implementation(FGameplayTag inVarTag, int32 inChangeByValue) {
}

bool UMETA_EventManagerComponent::CanGraphBeExecutedFromBeginning(const FMETA_GraphStruct& inGraphData) {
    return false;
}

bool UMETA_EventManagerComponent::AddHeisterToEvent_Implementation(FGameplayTag inEventTag, const FMETA_CharacterID inCharacterID, bool inUseInternalCheckForState) {
    return false;
}


