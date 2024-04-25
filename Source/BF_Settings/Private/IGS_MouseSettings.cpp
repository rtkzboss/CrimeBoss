#include "IGS_MouseSettings.h"

UIGS_MouseSettings::UIGS_MouseSettings() {
    this->bSettingsValid = true;
    this->MouseSensitivity = 0.35f;
    this->InvertedVerticalLook = false;
    this->MouseSensitivityStepSize = 0.00f;
    this->MinMouseSensitivity = 0.00f;
    this->MaxMouseSensitivity = 3.00f;
}

UIGS_MouseSettings* UIGS_MouseSettings::Instance() {
    return NULL;
}


