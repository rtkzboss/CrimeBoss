#include "IGS_BTService_ShoutAtSequence.h"

UIGS_BTService_ShoutAtSequence::UIGS_BTService_ShoutAtSequence() {
    auto& gen0 = (*this).CharacterToShoutKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutKey, 0)) = 255;
    (*this).NodeName = TEXT("Shout At Sequence");
}


