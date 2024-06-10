#include "BTTask_HeavyUseShock.h"

UBTTask_HeavyUseShock::UBTTask_HeavyUseShock() {
    auto& gen437 = (*this).BlackboardKey.AllowedTypes;
    gen437.Empty();
    gen437.AddDefaulted(1);
    (*this).NodeName = TEXT("Heavy Use Shock");
}


