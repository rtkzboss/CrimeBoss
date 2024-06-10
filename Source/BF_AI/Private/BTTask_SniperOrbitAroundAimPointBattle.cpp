#include "BTTask_SniperOrbitAroundAimPointBattle.h"
#include "EIGS_AimType.h"

UBTTask_SniperOrbitAroundAimPointBattle::UBTTask_SniperOrbitAroundAimPointBattle() {
    auto& gen529 = (*this).SnipePointKey.AllowedTypes;
    gen529.Empty();
    gen529.AddDefaulted(1);
    (*this).NodeName = TEXT("Sniper orbit around aim point Battle");
}


