#include "BTService_SwitchToMelee.h"

UBTService_SwitchToMelee::UBTService_SwitchToMelee() {
    auto& gen324 = (*this).UseMeleeKey.AllowedTypes;
    gen324.Empty();
    gen324.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).UseMeleeKey, 0)) = 255;
    (*this).ExtraDistanceFromRangeToStopMelee = 4.000000000e+02f;
    (*this).ExtraDistanceFromRangeToStopBash = 1.000000000e+02f;
    (*this).NodeName = TEXT("Switch To Melee");
}


