#include "BTTask_SniperOrbitAroundAimPoint.h"

UBTTask_SniperOrbitAroundAimPoint::UBTTask_SniperOrbitAroundAimPoint() {
    auto& gen528 = (*this).SnipePointKey.AllowedTypes;
    gen528.Empty();
    gen528.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SnipePointKey, 0)) = 255;
    (*this).AimType = EIGS_AimType::Combat;
    (*this).NodeName = TEXT("Sniper orbit around aim point");
}


