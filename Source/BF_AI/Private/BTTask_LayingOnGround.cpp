#include "BTTask_LayingOnGround.h"

UBTTask_LayingOnGround::UBTTask_LayingOnGround() {
    auto& gen450 = (*this).OffenceDataKey.AllowedTypes;
    gen450.Empty();
    gen450.AddDefaulted(1);
    (*this).NodeName = TEXT("Laying On Ground");
}


