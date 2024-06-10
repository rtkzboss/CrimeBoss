#include "IGS_MetaDialogueDataRow.h"

FIGS_MetaDialogueDataRow::FIGS_MetaDialogueDataRow() {
    (*this).ID = NAME_None;
    auto& gen3398 = (*this).Transcript;
    gen3398.Empty();
}

