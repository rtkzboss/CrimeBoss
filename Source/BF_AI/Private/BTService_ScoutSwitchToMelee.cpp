#include "BTService_ScoutSwitchToMelee.h"

UBTService_ScoutSwitchToMelee::UBTService_ScoutSwitchToMelee() {
    auto& gen379 = (*this).UseMeleeKey.AllowedTypes;
    gen379.Empty();
    gen379.AddDefaulted(1);
}


