#include "IGS_SquadSniper.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadSniper::AIGS_SquadSniper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 214;
    (*this).DebugColor.G = 255;
}


