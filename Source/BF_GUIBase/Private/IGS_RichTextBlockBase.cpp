#include "IGS_RichTextBlockBase.h"

UIGS_RichTextBlockBase::UIGS_RichTextBlockBase() : URichTextBlock(FObjectInitializer::Get()) {
    this->PreviewInputDevice = EIGS_InputDevice::ID_KeyboardAndMouse;
}

void UIGS_RichTextBlockBase::OnInputDeviceChanged(EIGS_InputDevice inInputDevice) {
}


