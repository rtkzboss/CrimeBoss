#include "META_Sequence.h"

FMETA_Sequence::FMETA_Sequence() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).Items.Empty();
    (*this).Priority = EMETA_SequencePriority::Normal;
}

