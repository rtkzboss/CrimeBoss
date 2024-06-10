#include "BTDecorator_CanCover.h"

UBTDecorator_CanCover::UBTDecorator_CanCover() {
    auto& gen273 = (*this).BestCoverKey.AllowedTypes;
    gen273.Empty();
    gen273.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Can cover");
}


