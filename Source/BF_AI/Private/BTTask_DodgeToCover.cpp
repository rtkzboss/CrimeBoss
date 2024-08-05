#include "BTTask_DodgeToCover.h"

UBTTask_DodgeToCover::UBTTask_DodgeToCover() {
    auto& gen0 = (*this).IsDodgingKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(2);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    auto& gen1 = (*this).MoveToPositionKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    (*this).NodeName = TEXT("Dodge To Cover");
}


