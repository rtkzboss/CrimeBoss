#include "BTDecorator_WantsStayInCover.h"

UBTDecorator_WantsStayInCover::UBTDecorator_WantsStayInCover() {
    (*this).RefreshTime = 1.000000015e-01f;
    auto& gen0 = (*this).CoverKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverKey, 0)) = 255;
    auto& gen1 = (*this).BestCoverKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Want to stay in cover");
}


