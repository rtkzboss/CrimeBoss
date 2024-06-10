#include "BTDecorator_ZiptieSequence.h"

UBTDecorator_ZiptieSequence::UBTDecorator_ZiptieSequence() {
    auto& gen316 = (*this).CivToZiptieKey.AllowedTypes;
    gen316.Empty();
    gen316.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CivToZiptieKey, 0)) = 255;
    (*this).NodeName = TEXT("Ziptie Sequence");
}


