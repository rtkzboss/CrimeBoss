#include "IGS_ObjectiveWidget.h"

UIGS_ObjectiveWidget::UIGS_ObjectiveWidget() {
    this->TaskBox = NULL;
    this->TaskWidgetHolderClass = NULL;
    this->TaskWidgetClass = NULL;
    this->OrTaskWidgetClass = NULL;
    this->bShouldPlayWidgetAnimations = true;
    this->ID = -1;
    this->ObjectiveState = EIGS_ObjectiveState::Active;
    this->m_ObjectiveManager = NULL;
}

void UIGS_ObjectiveWidget::OnTaskAdded(int32 inID, int32 inObjectiveID) {
}



void UIGS_ObjectiveWidget::OnObjectiveStateChanged(int32 inID) {
}




