#include "IGS_SquadEmployee.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadEmployee::AIGS_SquadEmployee(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 215;
    (*this).DebugColor.G = 0;
    (*this).DebugColor.R = 255;
}


