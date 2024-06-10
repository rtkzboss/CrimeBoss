#include "BTTask_RotateToSpecificRotation.h"

UBTTask_RotateToSpecificRotation::UBTTask_RotateToSpecificRotation() {
    (*this).AcceptedAngle = 5.000000000e+00f;
    auto& gen522 = (*this).BlackboardKey.AllowedTypes;
    gen522.Empty();
    gen522.AddDefaulted(1);
    (*this).NodeName = TEXT("Rotate To Specific Rotation");
}


