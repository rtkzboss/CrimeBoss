#include "BTService_ButcherSwitchToMelee.h"

UBTService_ButcherSwitchToMelee::UBTService_ButcherSwitchToMelee() {
    (*this).CheckTargetreachableTime = 2.000000000e+00f;
    auto& gen0 = (*this).UseMeleeKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
}


