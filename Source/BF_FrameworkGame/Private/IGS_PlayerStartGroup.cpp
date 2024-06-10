#include "IGS_PlayerStartGroup.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_PlayerStartGroup::AIGS_PlayerStartGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IsActive = true;
    (*this).IsRandom = true;
}


