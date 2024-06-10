#include "IGS_DefendPointHeistersScriptable.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_DefendPointRotationType.h"

AIGS_DefendPointHeistersScriptable::AIGS_DefendPointHeistersScriptable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ValidTeamSides = 1;
}

void AIGS_DefendPointHeistersScriptable::Activate() {
}


