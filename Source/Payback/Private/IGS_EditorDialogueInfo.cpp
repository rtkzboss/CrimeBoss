#include "IGS_EditorDialogueInfo.h"

FIGS_EditorDialogueInfo::FIGS_EditorDialogueInfo() {
    (*this).DialogueID = FText::FromString(TEXT(""));
    auto& gen3488 = (*this).Lines;
    gen3488.Empty();
}

