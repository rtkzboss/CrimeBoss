#include "IGS_SquadSwat.h"
#include "IGS_RoomPathfindingComponent.h"
#include "IGS_SquadAggroComponent.h"
#include "IGS_SquadSpeedSynchronizationComponent.h"

AIGS_SquadSwat::AIGS_SquadSwat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomPathfindingComponent = CreateDefaultSubobject<UIGS_RoomPathfindingComponent>(TEXT("RoomPathfindingComponent"));
    this->SpeedSynchronizationComponent = CreateDefaultSubobject<UIGS_SquadSpeedSynchronizationComponent>(TEXT("SpeedSynchronizationComponent"));
    this->SquadAggroComponent = CreateDefaultSubobject<UIGS_SquadAggroComponent>(TEXT("SquadAggroComponent"));
    this->defendPoint = NULL;
}


