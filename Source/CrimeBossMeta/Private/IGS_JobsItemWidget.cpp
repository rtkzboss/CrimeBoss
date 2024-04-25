#include "IGS_JobsItemWidget.h"

UIGS_JobsItemWidget::UIGS_JobsItemWidget() {
    this->IsOwned = false;
}

void UIGS_JobsItemWidget::SetUIData(const FIGS_JobCategoryItemUIData& inUIData) {
}



EJobUITileType UIGS_JobsItemWidget::GetDisplayType() {
    return EJobUITileType::Big;
}


