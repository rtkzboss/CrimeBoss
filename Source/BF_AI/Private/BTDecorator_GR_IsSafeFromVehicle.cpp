#include "BTDecorator_GR_IsSafeFromVehicle.h"

UBTDecorator_GR_IsSafeFromVehicle::UBTDecorator_GR_IsSafeFromVehicle() {
    auto& gen0 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).CheckInterval.Min = 4.000000060e-01f;
    (*this).CheckInterval.Max = 6.000000238e-01f;
    (*this).SafeDistanceFromLine = 4.000000000e+02f;
    (*this).SafeDistanceFromVehicle = 2.000000000e+02f;
    (*this).NodeName = TEXT("Is Safe from Vehicle");
}


