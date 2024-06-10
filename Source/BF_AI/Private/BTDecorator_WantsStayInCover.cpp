#include "BTDecorator_WantsStayInCover.h"

UBTDecorator_WantsStayInCover::UBTDecorator_WantsStayInCover() {
    (*this).RefreshTime = 1.000000015e-01f;
    auto& gen314 = (*this).CoverKey.AllowedTypes;
    gen314.Empty();
    gen314.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverKey, 0)) = 255;
    auto& gen315 = (*this).BestCoverKey.AllowedTypes;
    gen315.Empty();
    gen315.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Want to stay in cover");
}


