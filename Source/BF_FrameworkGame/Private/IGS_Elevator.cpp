#include "IGS_Elevator.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_Elevator::AIGS_Elevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}





