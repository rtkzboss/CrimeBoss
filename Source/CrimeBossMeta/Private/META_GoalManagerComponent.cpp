#include "META_GoalManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_GoalManagerComponent::UMETA_GoalManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMETA_GoalManagerComponent::TryToAddFinishedTasksToGoalByGraph_Implementation(const TSoftObjectPtr<UStoryGraphManager>& Graph) {
}

void UMETA_GoalManagerComponent::ResetGoalByGraph_Implementation(UStoryGraphManager* Graph, EMETA_GoalStatus Result) {
}

void UMETA_GoalManagerComponent::RemoveRepeatGoal(TSubclassOf<UMETA_BaseGoal> inGoalID) {
}

void UMETA_GoalManagerComponent::RemoveJobFromGoal(TSubclassOf<UMETA_MissionID> JobID) {
}

void UMETA_GoalManagerComponent::RemoveGoalTaskByGraph(TSoftObjectPtr<UStoryGraphManager> Graph, UMETA_TaskCondition* Task, bool bForceReset, bool& bSuccess) {
}

void UMETA_GoalManagerComponent::RemoveGoalFromPool(TSubclassOf<UMETA_BaseGoal> inGoalID) {
}

void UMETA_GoalManagerComponent::RemoveGoalFromCurrentPool(TSubclassOf<UMETA_BaseGoal> inGoalID) {
}

void UMETA_GoalManagerComponent::RemoveGoalFromBacklogPool(TSubclassOf<UMETA_BaseGoal> inGoalID) {
}

void UMETA_GoalManagerComponent::LoadTasksForMoneyMakingGoal_Implementation(UMETA_MoneyMakingGoal* inGoal, FMETA_MoneyMakingGoalSave& inGoalSave) {
}

void UMETA_GoalManagerComponent::IsThereSuccessComplitedGoal(bool& bSuccess) {
}

void UMETA_GoalManagerComponent::GetFinishedGoalsFromPool(TArray<FMETA_FinishedGoal>& outGoals) {
}

TArray<UMETA_BaseGoal*> UMETA_GoalManagerComponent::GetCurrentGoals() const {
    return TArray<UMETA_BaseGoal*>();
}

UMETA_BaseGoal* UMETA_GoalManagerComponent::GetCurrentGoalByID(TSubclassOf<UMETA_BaseGoal> inGoalID) {
    return NULL;
}

void UMETA_GoalManagerComponent::GetCurrentGoalByGraph(TSoftObjectPtr<UStoryGraphManager> inGraph, UMETA_BaseGoal*& outGoal) {
}

void UMETA_GoalManagerComponent::GenerateTasksForMoneyMakingGoal_Implementation(UMETA_MoneyMakingGoal* inGoal, bool bFromSave) {
}

FMETA_GoalSave UMETA_GoalManagerComponent::ConvertGoalToSave(UMETA_StoryGoal* inGoal) {
    return FMETA_GoalSave{};
}

FMETA_FinishedGoal UMETA_GoalManagerComponent::ConvertGoalObjectToFinishedGoal(UMETA_BaseGoal* inGoal) {
    return FMETA_FinishedGoal{};
}

UMETA_BaseGoal* UMETA_GoalManagerComponent::ConvertGoalFromSave(const UObject* inWCO, FMETA_GoalSave& inGoal) {
    return NULL;
}

void UMETA_GoalManagerComponent::ConvertCurrentGoalsToSave(TArray<FMETA_GoalSave>& outStoryGoalsSave, TArray<FMETA_MoneyMakingGoalSave>& outMoneyMakingGoalsSave) {
}

TArray<UMETA_BaseGoal*> UMETA_GoalManagerComponent::ConvertCurrentGoalsFromSave(const UObject* inWCO, TArray<FMETA_GoalSave> inCurrentGoals, TArray<FMETA_MoneyMakingGoalSave> inMoneyMakingGoals) {
    return TArray<UMETA_BaseGoal*>();
}

void UMETA_GoalManagerComponent::ChangeRepeatGoalCounterByValue(TSubclassOf<UMETA_BaseGoal> inGoalID, int32 Value) {
}

void UMETA_GoalManagerComponent::AddRepeatGoal(FMETA_GoalsObjectIDCounter GoalCounterInfo) {
}

void UMETA_GoalManagerComponent::AddJobToGoal(TSubclassOf<UMETA_BaseGoal> inGoalID, TSubclassOf<UMETA_MissionID> inJobID) {
}

void UMETA_GoalManagerComponent::AddGoalToPool(TSubclassOf<UMETA_BaseGoal> inGoalID) {
}

void UMETA_GoalManagerComponent::AddGoalToCurrentPool(UMETA_BaseGoal* inGoal) {
}

void UMETA_GoalManagerComponent::AddGoalToBacklogPool(TSubclassOf<UMETA_BaseGoal> inGoalID) {
}

void UMETA_GoalManagerComponent::AddGoalTaskByGraph(TSoftObjectPtr<UStoryGraphManager> Graph, UMETA_TaskCondition* Task, bool& bSuccess) {
}

void UMETA_GoalManagerComponent::AddFinishedGoalToPool(UMETA_BaseGoal* inGoal) {
}


