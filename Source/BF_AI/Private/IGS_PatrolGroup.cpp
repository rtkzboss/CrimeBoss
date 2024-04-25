#include "IGS_PatrolGroup.h"

AIGS_PatrolGroup::AIGS_PatrolGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_PatrolGroup::OnWaitFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed) {
}

AIGS_WaypointBase* AIGS_PatrolGroup::GetPatrolPoint_Implementation(AIGS_GameCharacterFramework* inCharacter) {
    return NULL;
}

TArray<AIGS_WaypointBase*> AIGS_PatrolGroup::GetAllVisitablePoints(AIGS_GameCharacterFramework* inCharacter) const {
    return TArray<AIGS_WaypointBase*>();
}


