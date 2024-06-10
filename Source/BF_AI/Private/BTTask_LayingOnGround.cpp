#include "BTTask_LayingOnGround.h"

UBTTask_LayingOnGround::UBTTask_LayingOnGround() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Laying On Ground");
}


