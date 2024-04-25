#include "IGS_GoalManagerBaseComponent.h"
#include "Templates/SubclassOf.h"

UIGS_GoalManagerBaseComponent::UIGS_GoalManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_GoalManagerBaseComponent::SelectNewGoal_Implementation(TSubclassOf<UMETA_BaseGoal> inGoalID, bool& bSuccess) {
}

TArray<UMETA_BaseGoal*> UIGS_GoalManagerBaseComponent::GetGoalsPoolByPartner_Implementation(EMETA_Partner inPartner) {
    return TArray<UMETA_BaseGoal*>();
}

TArray<UMETA_BaseGoal*> UIGS_GoalManagerBaseComponent::GetGoalsPool_Implementation() {
    return TArray<UMETA_BaseGoal*>();
}

TArray<UMETA_BaseGoal*> UIGS_GoalManagerBaseComponent::GetActiveGoalsByPartner_Implementation(EMETA_Partner inPartner) {
    return TArray<UMETA_BaseGoal*>();
}

TArray<UMETA_BaseGoal*> UIGS_GoalManagerBaseComponent::GetActiveGoals_Implementation() {
    return TArray<UMETA_BaseGoal*>();
}


