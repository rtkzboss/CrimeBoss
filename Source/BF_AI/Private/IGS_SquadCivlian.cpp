#include "IGS_SquadCivlian.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadCivlian::AIGS_SquadCivlian(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 0;
    (*this).DebugColor.G = 255;
    (*this).DebugColor.R = 21;
}


