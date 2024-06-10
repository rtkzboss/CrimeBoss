#include "IGS_DialogueTranscript.h"

FIGS_DialogueTranscript::FIGS_DialogueTranscript() {
    (*this).Speaker = EIGS_DialogueSpeaker::None;
    (*this).LineID = NAME_None;
    (*this).IsDisabled = false;
}

