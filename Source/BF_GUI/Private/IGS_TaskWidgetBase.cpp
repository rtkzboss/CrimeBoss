#include "IGS_TaskWidgetBase.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_TaskWidgetBase::UIGS_TaskWidgetBase() {
    (*this).ID = -1;
    (*this).FontSize = 12;
}


void UIGS_TaskWidgetBase::OnTaskValuesChanged(int32 inID) {
}


void UIGS_TaskWidgetBase::OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState) {
}


