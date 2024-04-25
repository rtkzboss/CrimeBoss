#include "IGS_CarryableItemPickup.h"

AIGS_CarryableItemPickup::AIGS_CarryableItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsPickableByAI = true;
    this->bTakeMeshFromDatabase = false;
}


