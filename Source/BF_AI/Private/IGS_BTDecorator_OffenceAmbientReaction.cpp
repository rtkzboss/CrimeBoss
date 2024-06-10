#include "IGS_BTDecorator_OffenceAmbientReaction.h"

UIGS_BTDecorator_OffenceAmbientReaction::UIGS_BTDecorator_OffenceAmbientReaction() {
    auto& gen306 = (*this).OffenceDataKey.AllowedTypes;
    gen306.Empty();
    gen306.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Offence Ambient Reaction");
}


