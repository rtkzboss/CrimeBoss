#include "BTDecorator_CanStrafe.h"

UBTDecorator_CanStrafe::UBTDecorator_CanStrafe() {
    auto& gen277 = (*this).DodgeDistanceKey.AllowedTypes;
    gen277.Empty();
    gen277.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).UseLongStrafe = true;
    (*this).UseMediumStrafe = true;
    (*this).NodeName = TEXT("Can Strafe");
}


