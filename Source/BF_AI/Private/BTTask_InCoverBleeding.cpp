#include "BTTask_InCoverBleeding.h"

UBTTask_InCoverBleeding::UBTTask_InCoverBleeding() {
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("In Cover Bleeding");
}


