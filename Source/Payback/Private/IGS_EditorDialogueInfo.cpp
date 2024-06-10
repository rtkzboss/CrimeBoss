#include "IGS_EditorDialogueInfo.h"

FIGS_EditorDialogueInfo::FIGS_EditorDialogueInfo() {
    (*this).DialogueID = FText::FromString(TEXT(""));
    (*this).Lines.Empty();
}

