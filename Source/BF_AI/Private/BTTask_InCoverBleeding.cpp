#include "BTTask_InCoverBleeding.h"

UBTTask_InCoverBleeding::UBTTask_InCoverBleeding() {
    auto& gen446 = (*this).BlackboardKey.AllowedTypes;
    gen446.Empty();
    gen446.AddDefaulted(1);
    (*this).NodeName = TEXT("In Cover Bleeding");
}


