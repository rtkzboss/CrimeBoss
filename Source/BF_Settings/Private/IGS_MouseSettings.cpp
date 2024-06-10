#include "IGS_MouseSettings.h"

UIGS_MouseSettings::UIGS_MouseSettings() {
    (*this).MouseSensitivity = 3.499999940e-01f;
    (*this).MouseSensitivityStepSize = 1.000000047e-03f;
    (*this).MinMouseSensitivity = 1.000000047e-03f;
    (*this).MaxMouseSensitivity = 3.000000000e+00f;
    (*this).bSettingsValid = true;
}

UIGS_MouseSettings* UIGS_MouseSettings::Instance() {
    return NULL;
}


