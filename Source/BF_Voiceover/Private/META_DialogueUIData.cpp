#include "META_DialogueUIData.h"

FMETA_DialogueUIData::FMETA_DialogueUIData() {
    (*this).ID = FText::FromString(TEXT(""));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ScreenTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TypeTag, 0)) = NAME_None;
}

