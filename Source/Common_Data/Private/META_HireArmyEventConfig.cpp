#include "META_HireArmyEventConfig.h"

FMETA_HireArmyEventConfig::FMETA_HireArmyEventConfig() {
    (*this).SoldierHireAmountPerHireEvent.Min = 0;
    (*this).SoldierHireAmountPerHireEvent.Max = 0;
    (*this).ShouldBeClampedByArmyCapacity = false;
    (*this).ClampedMinimumArmy = 0;
}

