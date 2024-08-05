#include "META_ArmyTierConfiguration.h"

FMETA_ArmyTierConfiguration::FMETA_ArmyTierConfiguration() {
    (*this).SoldierCostMultiplierForAttack = 0.000000000e+00f;
    (*this).SoldierCostMultiplierForAttackNeutral = 0.000000000e+00f;
    (*this).SoldierCostMultiplierForDefense = 0.000000000e+00f;
    (*this).SoldierUpkeepCost = 0;
    (*this).SoldierHireCost = 0;
    (*this).SoldierHireCostMultiplierInPercent = 0.000000000e+00f;
    (*this).HireArmyEventConfig.SoldierHireAmountPerHireEvent.Min = 0;
    (*this).HireArmyEventConfig.SoldierHireAmountPerHireEvent.Max = 0;
    (*this).HireArmyEventConfig.ShouldBeClampedByArmyCapacity = false;
    (*this).HireArmyEventConfig.ClampedMinimumArmy = 0;
    (*this).HireEventDelay.Min = 0;
    (*this).HireEventDelay.Max = 0;
    (*this).HireEventDurationTime = 0;
}

