#include "IGS_MetaVoiceoverDialogueDataRow.h"
#include "GameplayTagContainer.h"

FIGS_MetaVoiceoverDialogueDataRow::FIGS_MetaVoiceoverDialogueDataRow() {
    (*this).DialogueData.ID = FText::FromString(TEXT(""));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DialogueData.ScreenTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DialogueData.TypeTag, 0)) = NAME_None;
}

