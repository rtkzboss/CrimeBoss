#include "IGS_BTService_ReactionToOffenceMelee.h"

UIGS_BTService_ReactionToOffenceMelee::UIGS_BTService_ReactionToOffenceMelee() {
    auto& gen376 = (*this).OffenceDataKey.AllowedTypes;
    gen376.Empty();
    gen376.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Reaction To Offence Melee");
}


