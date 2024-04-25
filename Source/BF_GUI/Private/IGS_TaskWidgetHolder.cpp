#include "IGS_TaskWidgetHolder.h"

UIGS_TaskWidgetHolder::UIGS_TaskWidgetHolder() {
    this->ID = -1;
    this->TaskState = EIGS_ObjectiveState::Active;
    this->CountLeft = 0;
    this->CountTotal = 0;
    this->TaskWidgetClass = NULL;
    this->HolderBox = NULL;
    this->bShouldPlayWidgetAnimations = true;
    this->FontSize = 12;
    this->m_ObjectiveManager = NULL;
}


void UIGS_TaskWidgetHolder::OnTaskValuesChanged(int32 inID) {
}


void UIGS_TaskWidgetHolder::OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState) {
}


