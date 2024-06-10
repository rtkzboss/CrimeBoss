#include "BTDecorator_CoverPeekSequence.h"

UBTDecorator_CoverPeekSequence::UBTDecorator_CoverPeekSequence() {
    auto& gen0 = (*this).UpdateCoverKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Cover Peek Sequence");
}


