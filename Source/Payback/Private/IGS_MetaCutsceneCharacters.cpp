#include "IGS_MetaCutsceneCharacters.h"
#include "EIGS_MetaDialogueCharacter.h"

FIGS_MetaCutsceneCharacters::FIGS_MetaCutsceneCharacters() {
    (*this).Heister1Character.DialogueCharacter = EIGS_MetaDialogueCharacter::None;
    (*this).Heister2Character.DialogueCharacter = EIGS_MetaDialogueCharacter::None;
    (*this).Heister3Character.DialogueCharacter = EIGS_MetaDialogueCharacter::None;
    (*this).Heister4Character.DialogueCharacter = EIGS_MetaDialogueCharacter::None;
    (*this).VendorCharacter.DialogueCharacter = EIGS_MetaDialogueCharacter::None;
}

