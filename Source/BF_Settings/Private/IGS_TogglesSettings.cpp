#include "IGS_TogglesSettings.h"

UIGS_TogglesSettings::UIGS_TogglesSettings() {
    (*this).bSprintToggleable = true;
    (*this).bCrouchToggleable = true;
    (*this).bAimToggleable = true;
    (*this).bSettingsValid = true;
}

UIGS_TogglesSettings* UIGS_TogglesSettings::Instance() {
    return NULL;
}


