#include "PropSpawnerBudgetStruct.h"

FPropSpawnerBudgetStruct::FPropSpawnerBudgetStruct() {
    (*this).CurrentBudget = 0;
    (*this).PropSpawnerBudgetSize = EIGS_PropSpawnerBudgetSize::Large;
    (*this).SmallBudget.Min = 1;
    (*this).SmallBudget.Max = 4;
    (*this).MediumBudget.Min = 5;
    (*this).MediumBudget.Max = 10;
    (*this).LargeBudget.Min = 11;
    (*this).LargeBudget.Max = 20;
    (*this).MaxSpawnsPerSameProp = 0;
    (*this).MaxRerollsIfRedundant = 3;
}

