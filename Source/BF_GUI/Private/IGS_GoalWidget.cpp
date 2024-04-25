#include "IGS_GoalWidget.h"

UIGS_GoalWidget::UIGS_GoalWidget() {
    this->ObjectiveOverlay = NULL;
    this->ActiveObjectiveWidget = NULL;
    this->ActiveSimpleObjectiveWidget = NULL;
    this->ActiveObjectiveID = -1;
    this->ObjectiveWidgetClass = NULL;
    this->SimpleObjectiveWidgetHolderClass = NULL;
    this->SimpleObjectiveWidgetClass = NULL;
    this->m_ObjectiveManager = NULL;
}

void UIGS_GoalWidget::SpawnObjectiveWidget(int32 inID) {
}


void UIGS_GoalWidget::InitializeObjective() {
}


