#include "BTDecorator_CanDodgeToCover.h"

UBTDecorator_CanDodgeToCover::UBTDecorator_CanDodgeToCover() {
    auto& gen0 = (*this).MoveToPositionKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    auto& gen1 = (*this).ReactToThreathKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Dodge To Cover");
}


