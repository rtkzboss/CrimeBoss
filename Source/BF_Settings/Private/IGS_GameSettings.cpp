#include "IGS_GameSettings.h"

UIGS_GameSettings::UIGS_GameSettings() {
    (*this).Language = TEXT("en-US");
    (*this).bUseAltDollarDragon = true;
    (*this).bHalloweenMode = true;
    (*this).MenuBackgroundIndex = -1;
    (*this).bTutorialsEnabled = true;
    (*this).bFriendlyOutline = true;
    (*this).ColorVisionDeficiencySeverity = 5.000000000e+01f;
    (*this).bUseSystemDefaultLanguage = true;
    (*this).bSettingsValid = true;
}

UIGS_GameSettings* UIGS_GameSettings::Instance() {
    return NULL;
}


