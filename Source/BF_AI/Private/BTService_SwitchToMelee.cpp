#include "BTService_SwitchToMelee.h"

UBTService_SwitchToMelee::UBTService_SwitchToMelee() {
    this->NodeName = TEXT("Switch To Melee");
    this->ExtraDistanceFromRangeToStopMelee = 400.00f;
    this->ExtraDistanceFromRangeToStopBash = 100.00f;
}


