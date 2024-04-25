#include "BTDecorator_CanCharge.h"

UBTDecorator_CanCharge::UBTDecorator_CanCharge() {
    this->NodeName = TEXT("Can Charge");
    this->CoolDownTime = 5.00f;
    this->MinDistanceToCharge = 250.00f;
    this->ExtraChargeDistanceBehindPlayer = 10.00f;
}


