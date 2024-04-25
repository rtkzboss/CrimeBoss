#include "IGS_TaskWidgetBase.h"

UIGS_TaskWidgetBase::UIGS_TaskWidgetBase() {
    this->ID = -1;
    this->TaskState = EIGS_ObjectiveState::Active;
    this->CountLeft = 0;
    this->CountTotal = 0;
    this->bTimerTask = false;
    this->bPaused = false;
    this->bValueTask = false;
    this->StartTimestamp = 0.00f;
    this->Duration = 0.00f;
    this->FontSize = 12;
    this->m_ObjectiveManager = NULL;
}


void UIGS_TaskWidgetBase::OnTaskValuesChanged(int32 inID) {
}


void UIGS_TaskWidgetBase::OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState) {
}


