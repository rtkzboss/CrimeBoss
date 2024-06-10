#include "IGS_BTService_EvaluateBestCover.h"

UIGS_BTService_EvaluateBestCover::UIGS_BTService_EvaluateBestCover() {
    auto& gen333 = (*this).BestCoverKey.AllowedTypes;
    gen333.Empty();
    gen333.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    auto& gen334 = (*this).IsDodgingKey.AllowedTypes;
    gen334.Empty();
    gen334.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Find Best Cover Point");
}


