#include "IGS_SquadCop.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadCop::AIGS_SquadCop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.G = 255;
}


