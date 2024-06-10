#include "BTTask_RollToCover.h"

UBTTask_RollToCover::UBTTask_RollToCover() {
    auto& gen517 = (*this).DodgeDistanceKey.AllowedTypes;
    gen517.Empty();
    gen517.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Roll To Cover");
}


