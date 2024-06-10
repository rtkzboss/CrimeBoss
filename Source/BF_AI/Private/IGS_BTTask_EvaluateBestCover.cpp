#include "IGS_BTTask_EvaluateBestCover.h"

UIGS_BTTask_EvaluateBestCover::UIGS_BTTask_EvaluateBestCover() {
    auto& gen419 = (*this).BestCoverKey.AllowedTypes;
    gen419.Empty();
    gen419.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Find Best Cover Point");
}


