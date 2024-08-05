#include "IGS_PlayMetaDialogue.h"

UIGS_PlayMetaDialogue::UIGS_PlayMetaDialogue() {
}

void UIGS_PlayMetaDialogue::StartDialogueLine(FName inLineID, EIGS_MetaDialogueCharacterSlot inSlot, int32 inLineOrderID, int32 inLinesCount, float inLineLength) {
}

UIGS_PlayMetaDialogue* UIGS_PlayMetaDialogue::PlayMetaDialogue(UObject* inWCO, FText DialogueID, TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacter>& inCharacters) {
    return NULL;
}

void UIGS_PlayMetaDialogue::FinishDialogueLine(FName inLineID, EIGS_MetaDialogueCharacterSlot inSlot, int32 inLineOrderID, int32 inLinesCount, float inLineLength) {
}

void UIGS_PlayMetaDialogue::FinishDialogue() {
}


