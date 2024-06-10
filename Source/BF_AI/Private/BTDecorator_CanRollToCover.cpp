#include "BTDecorator_CanRollToCover.h"

UBTDecorator_CanRollToCover::UBTDecorator_CanRollToCover() {
    auto& gen0 = (*this).DodgeDistanceKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Roll To Cover");
}


