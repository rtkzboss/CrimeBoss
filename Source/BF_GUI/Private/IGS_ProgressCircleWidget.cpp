#include "IGS_ProgressCircleWidget.h"

UIGS_ProgressCircleWidget::UIGS_ProgressCircleWidget() {
    this->PlayerPawn = NULL;
    this->PlayerController = NULL;
    this->m_ReloadDuration = 0.00f;
    this->m_ActiveWeapon = NULL;
    this->m_ActiveWeaponReloader = NULL;
}


void UIGS_ProgressCircleWidget::OnReviveStateChanged(bool bState, float inTotalTime) {
}

void UIGS_ProgressCircleWidget::OnInteractionFinished(bool inResult, UIGS_InteractiveComponent* inInteractiveComponent) {
}

void UIGS_ProgressCircleWidget::OnActiveWieldableChangedOnPlayer(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}


void UIGS_ProgressCircleWidget::HandleProgressCircle(bool inEnabled, float inDuration) {
}


