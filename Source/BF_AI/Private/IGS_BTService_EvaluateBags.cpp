#include "IGS_BTService_EvaluateBags.h"

UIGS_BTService_EvaluateBags::UIGS_BTService_EvaluateBags() {
    auto& gen0 = (*this).BestBagKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestBagKey, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Pickup Bag");
}


