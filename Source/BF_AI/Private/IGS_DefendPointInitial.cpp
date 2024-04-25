#include "IGS_DefendPointInitial.h"

AIGS_DefendPointInitial::AIGS_DefendPointInitial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssignCharShape = NULL;
}

bool AIGS_DefendPointInitial::IsInAssignCharArea(FVector Pos) const {
    return false;
}


