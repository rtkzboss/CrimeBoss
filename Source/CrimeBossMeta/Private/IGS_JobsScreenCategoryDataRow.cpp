#include "IGS_JobsScreenCategoryDataRow.h"

FIGS_JobsScreenCategoryDataRow::FIGS_JobsScreenCategoryDataRow() {
    (*this).CategoryName = FText::FromString(TEXT(""));
    auto& gen3426 = (*this).Columns;
    gen3426.Empty();
}

