#include "META_Sequence.h"

FMETA_Sequence::FMETA_Sequence() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    auto& gen3453 = (*this).Items;
    gen3453.Empty();
    (*this).Priority = EMETA_SequencePriority::Normal;
}

