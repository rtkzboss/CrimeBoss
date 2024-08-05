#include "BTService_ScoutSwitchToMelee.h"

UBTService_ScoutSwitchToMelee::UBTService_ScoutSwitchToMelee() {
    auto& gen0 = (*this).UseMeleeKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
}


