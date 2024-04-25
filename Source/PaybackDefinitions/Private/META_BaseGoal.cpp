#include "META_BaseGoal.h"
#include "Templates/SubclassOf.h"

UMETA_BaseGoal::UMETA_BaseGoal() {
    this->Type = EMETA_GoalType::INVALID;
    this->Priority = EMETA_GoalPriority::Medium;
}

void UMETA_BaseGoal::SetVisitedNodeIDs(TSet<int32> inNodeIDs) {
}

void UMETA_BaseGoal::SetMissions(TArray<TSubclassOf<UMETA_MissionID>> inMissionIDs) {
}

void UMETA_BaseGoal::SetGoalResult(EMETA_GoalStatus inResult) {
}

void UMETA_BaseGoal::RemoveMission(TSubclassOf<UMETA_MissionID> inMissionID) {
}

bool UMETA_BaseGoal::IsGoalRepeatable(int32& outDaysBeetwenAttempts) const {
    return false;
}

TSet<int32> UMETA_BaseGoal::GetVisitedNodeIDs() const {
    return TSet<int32>();
}

EMETA_GoalType UMETA_BaseGoal::GetType() const {
    return EMETA_GoalType::INVALID;
}

FText UMETA_BaseGoal::GetTitle() const {
    return FText::GetEmpty();
}

EMETA_GoalPurpose UMETA_BaseGoal::GetPurpose() const {
    return EMETA_GoalPurpose::INVALID;
}

EMETA_GoalPriority UMETA_BaseGoal::GetPriority() const {
    return EMETA_GoalPriority::Low;
}

TSoftObjectPtr<UTexture2D> UMETA_BaseGoal::GetPicture() const {
    return NULL;
}

TArray<TSubclassOf<UMETA_MissionID>> UMETA_BaseGoal::GetMissions() {
    return TArray<TSubclassOf<UMETA_MissionID>>();
}

EMETA_Partner UMETA_BaseGoal::GetInstigatorPartner() const {
    return EMETA_Partner::None;
}

TSubclassOf<UMETA_BaseGoal> UMETA_BaseGoal::GetId() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UMETA_BaseGoal::GetIcon() const {
    return NULL;
}

EMETA_GoalStatus UMETA_BaseGoal::GetGoalResult() const {
    return EMETA_GoalStatus::None;
}

FGameplayTag UMETA_BaseGoal::GetEntitlementTag() const {
    return FGameplayTag{};
}

FText UMETA_BaseGoal::GetDescription() const {
    return FText::GetEmpty();
}

void UMETA_BaseGoal::AddVisitedNode(const int32 inNodeID) {
}

void UMETA_BaseGoal::AddMission(TSubclassOf<UMETA_MissionID> inMissionID) {
}


