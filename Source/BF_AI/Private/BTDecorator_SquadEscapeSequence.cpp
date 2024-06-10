#include "BTDecorator_SquadEscapeSequence.h"

UBTDecorator_SquadEscapeSequence::UBTDecorator_SquadEscapeSequence() {
    auto& gen311 = (*this).EscapePointKey.AllowedTypes;
    gen311.Empty();
    gen311.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).EscapePointKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Escape Sequence");
}


