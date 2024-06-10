#include "BTDecorator_CoverPeekSequence.h"

UBTDecorator_CoverPeekSequence::UBTDecorator_CoverPeekSequence() {
    auto& gen280 = (*this).UpdateCoverKey.AllowedTypes;
    gen280.Empty();
    gen280.AddDefaulted(1);
    (*this).NodeName = TEXT("Cover Peek Sequence");
}


