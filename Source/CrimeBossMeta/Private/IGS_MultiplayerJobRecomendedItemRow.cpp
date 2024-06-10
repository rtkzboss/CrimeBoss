#include "IGS_MultiplayerJobRecomendedItemRow.h"

FIGS_MultiplayerJobRecomendedItemRow::FIGS_MultiplayerJobRecomendedItemRow() {
    (*this).LevelRange.Min = 0;
    (*this).LevelRange.Max = 0;
    auto& gen3457 = (*this).JobCategoryItemPools;
    gen3457.Empty();
}

