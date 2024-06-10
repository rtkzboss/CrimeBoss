#include "IGS_PaperDollAnimInstance.h"

UIGS_PaperDollAnimInstance::UIGS_PaperDollAnimInstance() {
    (*this).CurrentCharacterPose = EIGS_MetaCutsceneCharacterPose::Idle;
}

AIGS_CharacterPaperDoll* UIGS_PaperDollAnimInstance::GetOwningPaperDoll() const {
    return NULL;
}


