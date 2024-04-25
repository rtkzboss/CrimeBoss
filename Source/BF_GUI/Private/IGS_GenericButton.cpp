#include "IGS_GenericButton.h"

UIGS_GenericButton::UIGS_GenericButton() {
    this->HoldTime = 1.00f;
    this->HoldTicksPerSecond = 60;
    this->IsHoldable = false;
    this->HasContent = false;
    this->BoundInputAction = EIGS_InputAction::IA_UNKNOWN;
    this->HoldBorder = NULL;
    this->ProgressMaterial = NULL;
    this->Progress = NULL;
    this->ContentSlot = NULL;
    this->ButtonText = NULL;
    this->InputKeyIcon = NULL;
}

void UIGS_GenericButton::SimulateClick() {
}

void UIGS_GenericButton::SetSelected(bool inSelected) {
}

void UIGS_GenericButton::SetHasContent(bool inHasContent) {
}



void UIGS_GenericButton::OnHoldStarted() {
}



void UIGS_GenericButton::OnHoldCancelled() {
}

FEventReply UIGS_GenericButton::OnHoldBorderMouseButtonUp(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UIGS_GenericButton::OnHoldBorderMouseButtonDown(FGeometry Geometry, const FPointerEvent& PointerEvent) {
    return FEventReply{};
}

void UIGS_GenericButton::HandleHoldTick() {
}

void UIGS_GenericButton::HandleHoldFinished() {
}


