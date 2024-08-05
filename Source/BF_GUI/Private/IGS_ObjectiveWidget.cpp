#include "IGS_ObjectiveWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_ObjectiveWidget::UIGS_ObjectiveWidget() {
    (*this).bShouldPlayWidgetAnimations = true;
    (*this).ID = -1;
}

void UIGS_ObjectiveWidget::OnTaskAdded(int32 inID, int32 inObjectiveID) {
}



void UIGS_ObjectiveWidget::OnObjectiveStateChanged(int32 inID) {
}




