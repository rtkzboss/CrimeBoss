#include "IGS_GenericButton.h"
#include "Input/CommonInputMode.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_GenericButton::UIGS_GenericButton() {
    (*this).HoldTime = 1.000000000e+00f;
    (*this).HoldTicksPerSecond = 60;
    (*this).BoundInputAction = EIGS_InputAction::IA_UNKNOWN;
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

void UIGS_GenericButton::InitInputActionIcon() {
}

void UIGS_GenericButton::HandleHoldTick() {
}

void UIGS_GenericButton::HandleHoldFinished() {
}


