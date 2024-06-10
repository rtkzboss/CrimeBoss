#include "BTDecorator_CancelOnReactionPending.h"

UBTDecorator_CancelOnReactionPending::UBTDecorator_CancelOnReactionPending() {
    auto& gen0 = (*this).ReactToThreathKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).CancelDelay = 3.000000119e-01f;
    (*this).NodeName = TEXT("Cancel On Reaction pending");
}


