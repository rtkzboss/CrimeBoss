#include "IGS_GoalWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_GoalWidget::UIGS_GoalWidget() {
    (*this).ActiveObjectiveID = -1;
}

void UIGS_GoalWidget::SpawnObjectiveWidget(int32 inID) {
}


void UIGS_GoalWidget::InitializeObjective() {
}


