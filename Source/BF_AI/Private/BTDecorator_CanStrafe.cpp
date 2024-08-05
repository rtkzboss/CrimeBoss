#include "BTDecorator_CanStrafe.h"

UBTDecorator_CanStrafe::UBTDecorator_CanStrafe() {
    auto& gen0 = (*this).DodgeDistanceKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).UseLongStrafe = true;
    (*this).UseMediumStrafe = true;
    (*this).NodeName = TEXT("Can Strafe");
}


