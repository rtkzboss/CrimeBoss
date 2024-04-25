#include "IGS_IdlePoint.h"

AIGS_IdlePoint::AIGS_IdlePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinTimeUntilBreaker = 15.00f;
    this->MaxTimeUntilBreaker = 60.00f;
}


