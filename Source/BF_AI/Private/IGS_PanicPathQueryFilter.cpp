#include "IGS_PanicPathQueryFilter.h"

UIGS_PanicPathQueryFilter::UIGS_PanicPathQueryFilter() {
    this->InnerRadiusMultiplier = 0.50f;
    this->OuterRadiusMultiplier = 1.00f;
    this->DangerAreaCost = 5.00f;
    this->HeuristicScale = 0.90f;
    this->IsActive = true;
}


