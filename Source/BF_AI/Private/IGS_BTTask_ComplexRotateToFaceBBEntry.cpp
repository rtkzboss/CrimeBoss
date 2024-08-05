#include "IGS_BTTask_ComplexRotateToFaceBBEntry.h"

UIGS_BTTask_ComplexRotateToFaceBBEntry::UIGS_BTTask_ComplexRotateToFaceBBEntry() {
    (*this).PredictionTimePerMeter = 1.500000060e-01f;
    (*this).Precision = 1.000000000e+00f;
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(3);
    (*this).NodeName = TEXT("Complex Rotate to face BB entry");
}


