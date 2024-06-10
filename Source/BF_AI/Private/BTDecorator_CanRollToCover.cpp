#include "BTDecorator_CanRollToCover.h"

UBTDecorator_CanRollToCover::UBTDecorator_CanRollToCover() {
    auto& gen276 = (*this).DodgeDistanceKey.AllowedTypes;
    gen276.Empty();
    gen276.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Roll To Cover");
}


