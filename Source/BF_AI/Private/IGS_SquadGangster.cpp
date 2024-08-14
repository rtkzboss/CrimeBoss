#include "IGS_SquadGangster.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadGangster::AIGS_SquadGangster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.G = 0;
    (*this).DebugColor.R = 129;
}


