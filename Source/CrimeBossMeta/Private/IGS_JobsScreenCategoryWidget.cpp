#include "IGS_JobsScreenCategoryWidget.h"

UIGS_JobsScreenCategoryWidget::UIGS_JobsScreenCategoryWidget() {
    this->CategoryContentBox = NULL;
    this->CategoryNameText = NULL;
    this->JobsItemWidgetClass = NULL;
    this->isSelected = false;
}

void UIGS_JobsScreenCategoryWidget::TrySetFocusToFirstJobWidget() {
}

void UIGS_JobsScreenCategoryWidget::SetIsCategorySelected(bool inIsSelected) {
}

void UIGS_JobsScreenCategoryWidget::OnJobItemSelected_Internal(UIGS_JobsItemWidget* JobWidget) {
}

void UIGS_JobsScreenCategoryWidget::OnJobItemHovered_Internal() {
}




void UIGS_JobsScreenCategoryWidget::InitCategory(const FIGS_MultiplayerJobCategoryRow& categoryData) {
}

UIGS_JobsItemWidget* UIGS_JobsScreenCategoryWidget::GetFirstJobWidget() const {
    return NULL;
}


