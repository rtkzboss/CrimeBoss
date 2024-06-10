#include "IGS_SuspicionEventActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SuspicionEventActor::AIGS_SuspicionEventActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
}


