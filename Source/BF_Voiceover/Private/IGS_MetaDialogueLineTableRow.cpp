#include "IGS_MetaDialogueLineTableRow.h"

FIGS_MetaDialogueLineTableRow::FIGS_MetaDialogueLineTableRow() {
    (*this).ID = NAME_None;
    auto& gen3399 = (*this).Variations;
    gen3399.Empty();
}

