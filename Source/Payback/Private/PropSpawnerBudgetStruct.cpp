#include "PropSpawnerBudgetStruct.h"

FPropSpawnerBudgetStruct::FPropSpawnerBudgetStruct() {
    this->CurrentBudget = 0;
    this->PropSpawnerBudgetSize = EIGS_PropSpawnerBudgetSize::Small;
    this->MaxSpawnsPerSameProp = 0;
    this->MaxRerollsIfRedundant = 0;
}

