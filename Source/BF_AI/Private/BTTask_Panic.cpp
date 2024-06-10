#include "BTTask_Panic.h"

UBTTask_Panic::UBTTask_Panic() {
    (*this).Duration.Min = 5.000000000e+00f;
    (*this).Duration.Max = 8.000000000e+00f;
    auto& gen505 = (*this).OffenceDataKey.AllowedTypes;
    gen505.Empty();
    gen505.AddDefaulted(1);
    (*this).NodeName = TEXT("Panicking");
}


