#include "IGS_JobsItemWidget.h"
#include "Input/CommonInputMode.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_JobsItemWidget::UIGS_JobsItemWidget() {
}

void UIGS_JobsItemWidget::SetUIData(const FIGS_JobCategoryItemUIData& inUIData) {
}



EJobUITileType UIGS_JobsItemWidget::GetDisplayType() {
    return EJobUITileType::Big;
}


