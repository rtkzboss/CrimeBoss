#include "IGS_TaskWidgetHolder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_TaskWidgetHolder::UIGS_TaskWidgetHolder() {
    (*this).ID = -1;
    (*this).bShouldPlayWidgetAnimations = true;
    (*this).FontSize = 12;
}


void UIGS_TaskWidgetHolder::OnTaskValuesChanged(int32 inID) {
}


void UIGS_TaskWidgetHolder::OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState) {
}


