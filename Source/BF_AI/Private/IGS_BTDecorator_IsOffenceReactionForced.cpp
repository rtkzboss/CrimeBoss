#include "IGS_BTDecorator_IsOffenceReactionForced.h"

UIGS_BTDecorator_IsOffenceReactionForced::UIGS_BTDecorator_IsOffenceReactionForced() {
    auto& gen293 = (*this).OffenceDataKey.AllowedTypes;
    gen293.Empty();
    gen293.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Offence Reaction Forced");
}


