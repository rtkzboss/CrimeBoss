#include "BTTask_AmbientInspect.h"

UBTTask_AmbientInspect::UBTTask_AmbientInspect() {
    (*this).Duration.Min = 3.000000000e+00f;
    (*this).Duration.Max = 7.000000000e+00f;
    auto& gen406 = (*this).OffenceDataKey.AllowedTypes;
    gen406.Empty();
    gen406.AddDefaulted(1);
    (*this).NodeName = TEXT("Ambient Inspect");
}


