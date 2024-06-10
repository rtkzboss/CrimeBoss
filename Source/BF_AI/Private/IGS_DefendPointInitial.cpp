#include "IGS_DefendPointInitial.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_DefendPointRotationType.h"

AIGS_DefendPointInitial::AIGS_DefendPointInitial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AIGS_DefendPointInitial::IsInAssignCharArea(FVector Pos) const {
    return false;
}


