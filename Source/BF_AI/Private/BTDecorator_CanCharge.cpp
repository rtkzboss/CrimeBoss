#include "BTDecorator_CanCharge.h"

UBTDecorator_CanCharge::UBTDecorator_CanCharge() {
    (*this).CoolDownTime = 5.000000000e+00f;
    (*this).MinDistanceToCharge = 2.500000000e+02f;
    (*this).ExtraChargeDistanceBehindPlayer = 1.000000000e+01f;
    (*this).NodeName = TEXT("Can Charge");
}


