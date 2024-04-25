#include "IGS_PlanningBoard.h"

AIGS_PlanningBoard::AIGS_PlanningBoard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_PlanningBoard::SetPlanningBoardData(FGameplayTag inPlanningBoardID) {
}

FGameplayTag AIGS_PlanningBoard::GetPlanningBoardID() const {
    return FGameplayTag{};
}

UMETA_BaseMission* AIGS_PlanningBoard::GetMissionFromMapByPriority(TArray<FMETA_PlanningBoardMission> planningBoardItemMissions, TArray<UMETA_BaseMission*>& missionsOnMap) const {
    return NULL;
}


