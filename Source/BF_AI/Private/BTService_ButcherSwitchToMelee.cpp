#include "BTService_ButcherSwitchToMelee.h"

UBTService_ButcherSwitchToMelee::UBTService_ButcherSwitchToMelee() {
    (*this).CheckTargetreachableTime = 2.000000000e+00f;
    auto& gen325 = (*this).UseMeleeKey.AllowedTypes;
    gen325.Empty();
    gen325.AddDefaulted(1);
}


