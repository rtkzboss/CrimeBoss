#include "IGS_SquadEmployee.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadEmployee::AIGS_SquadEmployee(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 255;
    (*this).DebugColor.G = 110;
    (*this).DebugColor.R = 0;
}


