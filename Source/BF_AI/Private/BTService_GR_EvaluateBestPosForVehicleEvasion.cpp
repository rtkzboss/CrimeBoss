#include "BTService_GR_EvaluateBestPosForVehicleEvasion.h"

UBTService_GR_EvaluateBestPosForVehicleEvasion::UBTService_GR_EvaluateBestPosForVehicleEvasion() {
    this->NodeName = TEXT("Best Evade Pos to BB for GR-Danger-Vehicle");
    this->EvadePulse = 350.00f;
    this->MinEvadeDistance = 100.00f;
    this->RayCastDegreesStep = 30.00f;
    this->MaxRayCasts = 10;
}


