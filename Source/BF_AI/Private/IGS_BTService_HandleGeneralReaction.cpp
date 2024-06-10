#include "IGS_BTService_HandleGeneralReaction.h"

UIGS_BTService_HandleGeneralReaction::UIGS_BTService_HandleGeneralReaction() {
    auto& gen0 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Handle Global Reaction(s)");
}


