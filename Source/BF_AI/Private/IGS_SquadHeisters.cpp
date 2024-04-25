#include "IGS_SquadHeisters.h"
#include "IGS_SquadHeistersEventWatchComponent.h"

AIGS_SquadHeisters::AIGS_SquadHeisters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastAreaOfOperationsRoom = NULL;
    this->NextSpreadUpdateTime = 0.00f;
    this->SquadHeistersEventWatchComponent = CreateDefaultSubobject<UIGS_SquadHeistersEventWatchComponent>(TEXT("SquadHeistersEventWatchComponent"));
}


