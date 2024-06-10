#include "BTTask_HeavyUseShock.h"

UBTTask_HeavyUseShock::UBTTask_HeavyUseShock() {
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Heavy Use Shock");
}


