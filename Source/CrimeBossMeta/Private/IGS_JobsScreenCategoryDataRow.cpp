#include "IGS_JobsScreenCategoryDataRow.h"

FIGS_JobsScreenCategoryDataRow::FIGS_JobsScreenCategoryDataRow() {
    (*this).CategoryName = FText::FromString(TEXT(""));
    (*this).Columns.Empty();
}

