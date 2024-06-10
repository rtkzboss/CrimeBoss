#include "IGS_Cargo.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_Cargo::AIGS_Cargo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}


