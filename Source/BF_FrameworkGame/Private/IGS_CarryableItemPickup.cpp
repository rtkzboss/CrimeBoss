#include "IGS_CarryableItemPickup.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_CarryableItemPickup::AIGS_CarryableItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bTakeMeshFromDatabase = false;
    (*this).IsPickableByAI = true;
}


