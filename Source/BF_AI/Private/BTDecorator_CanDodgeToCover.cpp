#include "BTDecorator_CanDodgeToCover.h"

UBTDecorator_CanDodgeToCover::UBTDecorator_CanDodgeToCover() {
    auto& gen274 = (*this).MoveToPositionKey.AllowedTypes;
    gen274.Empty();
    gen274.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    auto& gen275 = (*this).ReactToThreathKey.AllowedTypes;
    gen275.Empty();
    gen275.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Dodge To Cover");
}


