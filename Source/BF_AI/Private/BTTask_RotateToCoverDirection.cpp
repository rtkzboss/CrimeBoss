#include "BTTask_RotateToCoverDirection.h"

UBTTask_RotateToCoverDirection::UBTTask_RotateToCoverDirection() {
    (*this).AccaptedAngle = 2.500000000e+01f;
    auto& gen520 = (*this).BlackboardKey.AllowedTypes;
    gen520.Empty();
    gen520.AddDefaulted(1);
    (*this).NodeName = TEXT("Rotate To Cover Direction");
}


