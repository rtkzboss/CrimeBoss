#include "BTTask_RotateToCoverDirection.h"

UBTTask_RotateToCoverDirection::UBTTask_RotateToCoverDirection() {
    (*this).AccaptedAngle = 2.500000000e+01f;
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Rotate To Cover Direction");
}


