#include "BTTask_RotatePerpendicularToBBEntry.h"

UBTTask_RotatePerpendicularToBBEntry::UBTTask_RotatePerpendicularToBBEntry() {
    (*this).Precision = 1.000000000e+01f;
    auto& gen519 = (*this).BlackboardKey.AllowedTypes;
    gen519.Empty();
    gen519.AddDefaulted(1);
    (*this).NodeName = TEXT("Rotate perpendicular to BB entry");
}


