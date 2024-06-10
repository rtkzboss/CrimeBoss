#include "IGS_SquadHeisters.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SquadHeistersEventWatchComponent.h"

AIGS_SquadHeisters::AIGS_SquadHeisters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SquadHeistersEventWatchComponent = CreateDefaultSubobject<UIGS_SquadHeistersEventWatchComponent>(TEXT("SquadHeistersEventWatchComponent"));
    (*this).DebugColor.B = 255;
    (*this).DebugColor.G = 233;
    (*this).DebugColor.R = 0;
    (*this).PrimaryActorTick.bCanEverTick = true;
}


