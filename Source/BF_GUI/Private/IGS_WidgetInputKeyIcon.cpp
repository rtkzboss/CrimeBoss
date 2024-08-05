#include "IGS_WidgetInputKeyIcon.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetInputKeyIcon::UIGS_WidgetInputKeyIcon() : UUserWidget(FObjectInitializer::Get()) {
    (*this).InputActionToShow = EIGS_InputAction::IA_UNKNOWN;
}

void UIGS_WidgetInputKeyIcon::SetInputActionToShow(EIGS_InputAction InAction) {
}


void UIGS_WidgetInputKeyIcon::OnInputDeviceChanged(EIGS_InputDevice inDevice) {
}

void UIGS_WidgetInputKeyIcon::ForceChangeInputDevice(EIGS_InputDevice inDevice) {
}


