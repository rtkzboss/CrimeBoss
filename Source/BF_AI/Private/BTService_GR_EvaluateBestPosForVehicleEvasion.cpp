#include "BTService_GR_EvaluateBestPosForVehicleEvasion.h"

UBTService_GR_EvaluateBestPosForVehicleEvasion::UBTService_GR_EvaluateBestPosForVehicleEvasion() {
    auto& gen0 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen1 = (*this).BestEvadePosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestEvadePosKey, 0)) = 255;
    (*this).EvadePulse = 3.500000000e+02f;
    (*this).MinEvadeDistance = 1.000000000e+02f;
    (*this).RayCastDegreesStep = 3.000000000e+01f;
    (*this).MaxRayCasts = 10;
    (*this).NodeName = TEXT("Best Evade Pos to BB for GR-Danger-Vehicle");
}


