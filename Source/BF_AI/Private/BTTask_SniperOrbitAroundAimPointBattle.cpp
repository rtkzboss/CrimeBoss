#include "BTTask_SniperOrbitAroundAimPointBattle.h"
#include "EIGS_AimType.h"

UBTTask_SniperOrbitAroundAimPointBattle::UBTTask_SniperOrbitAroundAimPointBattle() {
    auto& gen0 = (*this).SnipePointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Sniper orbit around aim point Battle");
}


