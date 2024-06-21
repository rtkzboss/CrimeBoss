#include "IGS_SquadSwat.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_RoomPathfindingComponent.h"
#include "IGS_SquadAggroComponent.h"
#include "IGS_SquadSpeedSynchronizationComponent.h"

AIGS_SquadSwat::AIGS_SquadSwat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RoomPathfindingComponent = CreateDefaultSubobject<UIGS_RoomPathfindingComponent>(TEXT("RoomPathfindingComponent"));
    (*this).SpeedSynchronizationComponent = CreateDefaultSubobject<UIGS_SquadSpeedSynchronizationComponent>(TEXT("SpeedSynchronizationComponent"));
    (*this).SquadAggroComponent = CreateDefaultSubobject<UIGS_SquadAggroComponent>(TEXT("SquadAggroComponent"));
    (*this).DebugColor.B = 225;
    (*this).DebugColor.G = 0;
    (*this).DebugColor.R = 255;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).PrimaryActorTick.TickInterval = 2.000000030e-01f;
}


