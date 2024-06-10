#include "BTTask_RotateToSpecificRotation.h"

UBTTask_RotateToSpecificRotation::UBTTask_RotateToSpecificRotation() {
    (*this).AcceptedAngle = 5.000000000e+00f;
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Rotate To Specific Rotation");
}


