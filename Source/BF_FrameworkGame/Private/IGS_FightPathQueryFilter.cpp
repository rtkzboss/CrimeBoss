#include "IGS_FightPathQueryFilter.h"

UIGS_FightPathQueryFilter::UIGS_FightPathQueryFilter() {
    this->CostMultiplier = 5.00f;
    this->EnemyIdealRange2 = 1000000.00f;
    this->ComputeDistanceCost = false;
    this->IsActive = true;
}


