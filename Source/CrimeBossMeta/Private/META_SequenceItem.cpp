#include "META_SequenceItem.h"

FMETA_SequenceItem::FMETA_SequenceItem() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).RequiredMenuState = EMETA_MenuState::MS_Default;
}

