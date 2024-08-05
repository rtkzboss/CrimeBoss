#include "IGS_MetaCutsceneNodeOption.h"

FIGS_MetaCutsceneNodeOption::FIGS_MetaCutsceneNodeOption() {
    (*this).Text = FText::FromString(TEXT(""));
    (*this).Action = EIGS_MetaCutsceneNodeAction::ResultA;
    (*this).NodeName = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ResultTag, 0)) = NAME_None;
    (*this).HasFullSequence = false;
    (*this).FullSequence = NAME_None;
    (*this).EndDialogueID = FText::FromString(TEXT(""));
    (*this).ChoiceSelectionSound = nullptr;
    (*this).ChoiceVisibility = EIGS_CutsceneChoiceVisibility::Visible;
    (*this).ChoiceVisibilityConditionFail = EIGS_CutsceneChoiceVisibility::Disabled;
    (*this).ChoiceVisibilityConditions.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ValueTag, 0)) = NAME_None;
    (*this).PriceValue = 0.000000000e+00f;
    (*this).VisibilityValue = EIGS_CutsceneChoiceVisibility::Visible;
}

