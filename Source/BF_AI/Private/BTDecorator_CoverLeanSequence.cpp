#include "BTDecorator_CoverLeanSequence.h"

UBTDecorator_CoverLeanSequence::UBTDecorator_CoverLeanSequence() {
    auto& gen0 = (*this).UpdateCoverKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Cover Lean Sequence");
}


