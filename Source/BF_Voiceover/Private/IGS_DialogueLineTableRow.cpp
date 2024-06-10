#include "IGS_DialogueLineTableRow.h"

FIGS_DialogueLineTableRow::FIGS_DialogueLineTableRow() {
    (*this).ID = NAME_None;
    (*this).IsDisabled = false;
    auto& gen3400 = (*this).Variations;
    gen3400.Empty();
}

