#include "IGS_DialogueLineTableRow.h"

FIGS_DialogueLineTableRow::FIGS_DialogueLineTableRow() {
    (*this).ID = NAME_None;
    (*this).IsDisabled = false;
    (*this).Variations.Empty();
}

