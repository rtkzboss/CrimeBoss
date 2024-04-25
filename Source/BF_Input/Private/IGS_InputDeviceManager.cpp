#include "IGS_InputDeviceManager.h"

UIGS_InputDeviceManager::UIGS_InputDeviceManager() {
    this->DefaultDevice = EIGS_InputDevice::ID_KeyboardAndMouse;
    this->DefaultGamepadDevice = EIGS_InputDevice::ID_Gamepad_XOne;
    this->DefaultVRDevice = EIGS_InputDevice::ID_VR_Oculus;
}

void UIGS_InputDeviceManager::TriggerKeyBindUIUpdate() {
}

void UIGS_InputDeviceManager::RefreshCurrentInputDevice() {
}

EIGS_InputDevice UIGS_InputDeviceManager::GetCurrentInputDevice() const {
    return EIGS_InputDevice::ID_UNKNOWN;
}


