#include "BTTask_Panic.h"

UBTTask_Panic::UBTTask_Panic() {
    (*this).Duration.Min = 5.000000000e+00f;
    (*this).Duration.Max = 8.000000000e+00f;
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Panicking");
}


