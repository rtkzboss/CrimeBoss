#include "IGS_UGCMenuActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_UGCMenuActor::AIGS_UGCMenuActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}


