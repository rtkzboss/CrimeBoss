#include "BTTask_DodgeToCover.h"

UBTTask_DodgeToCover::UBTTask_DodgeToCover() {
    auto& gen415 = (*this).IsDodgingKey.AllowedTypes;
    gen415.Empty();
    gen415.AddDefaulted(2);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    auto& gen416 = (*this).MoveToPositionKey.AllowedTypes;
    gen416.Empty();
    gen416.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    (*this).NodeName = TEXT("Dodge To Cover");
}


