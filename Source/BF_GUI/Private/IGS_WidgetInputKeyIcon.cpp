#include "IGS_WidgetInputKeyIcon.h"

UIGS_WidgetInputKeyIcon::UIGS_WidgetInputKeyIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->InputActionToShow = EIGS_InputAction::IA_UNKNOWN;
    this->CharacterText = NULL;
    this->PreviewInputDevice = EIGS_InputDevice::ID_KeyboardAndMouse;
}

void UIGS_WidgetInputKeyIcon::SetInputActionToShow(EIGS_InputAction InAction) {
}


void UIGS_WidgetInputKeyIcon::OnInputDeviceChanged(EIGS_InputDevice inDevice) {
}

void UIGS_WidgetInputKeyIcon::ForceChangeInputDevice(EIGS_InputDevice inDevice) {
}


