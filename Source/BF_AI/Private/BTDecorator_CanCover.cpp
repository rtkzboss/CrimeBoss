#include "BTDecorator_CanCover.h"

UBTDecorator_CanCover::UBTDecorator_CanCover() {
    auto& gen0 = (*this).BestCoverKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Can cover");
}


