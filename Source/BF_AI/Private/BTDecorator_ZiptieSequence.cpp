#include "BTDecorator_ZiptieSequence.h"

UBTDecorator_ZiptieSequence::UBTDecorator_ZiptieSequence() {
    auto& gen0 = (*this).CivToZiptieKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CivToZiptieKey, 0)) = 255;
    (*this).NodeName = TEXT("Ziptie Sequence");
}


