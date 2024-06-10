#include "BTTask_SniperOrbitAroundAimPoint.h"

UBTTask_SniperOrbitAroundAimPoint::UBTTask_SniperOrbitAroundAimPoint() {
    auto& gen0 = (*this).SnipePointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SnipePointKey, 0)) = 255;
    (*this).AimType = EIGS_AimType::Combat;
    (*this).NodeName = TEXT("Sniper orbit around aim point");
}


