#include "META_MissionMonetaryValue.h"

FMETA_MissionMonetaryValue::FMETA_MissionMonetaryValue() {
    (*this).ObjectiveMonetaryValueInPercents = 0;
    (*this).MaxMonetaryValue.Min = 0;
    (*this).MaxMonetaryValue.Max = 0;
    (*this).MultiplierOfExpensesForBigHeistInPercent.Min = 0;
    (*this).MultiplierOfExpensesForBigHeistInPercent.Max = 0;
    (*this).MultiplierOfExpensesForMissionsWithIntelInPercent.Min = 0;
    (*this).MultiplierOfExpensesForMissionsWithIntelInPercent.Max = 0;
    (*this).MultiplierOfExpensesForMissionsWithoutIntelInPercent.Min = 0;
    (*this).MultiplierOfExpensesForMissionsWithoutIntelInPercent.Max = 0;
    (*this).MultiplierOfMaxMonetaryValueForMissionWithIntel = 0.000000000e+00f;
}

