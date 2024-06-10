#include "IGS_JobCategoryItemUIData.h"

FIGS_JobCategoryItemUIData::FIGS_JobCategoryItemUIData() {
    (*this).Image = nullptr;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).TileDisplayType = EJobUITileType::Big;
}

