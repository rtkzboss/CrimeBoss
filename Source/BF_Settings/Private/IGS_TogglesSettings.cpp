#include "IGS_TogglesSettings.h"

UIGS_TogglesSettings::UIGS_TogglesSettings() {
    this->bSettingsValid = true;
    this->bSprintToggleable = true;
    this->bCrouchToggleable = true;
    this->bAimToggleable = true;
    this->bSprintInterruptsReload = false;
    this->bMagCheckInSprintAllowed = false;
}

UIGS_TogglesSettings* UIGS_TogglesSettings::Instance() {
    return NULL;
}


