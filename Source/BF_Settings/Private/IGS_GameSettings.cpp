#include "IGS_GameSettings.h"

UIGS_GameSettings::UIGS_GameSettings() {
    this->bSettingsValid = true;
    this->Language = TEXT("en-US");
    this->bOnlyMainDialogues = false;
    this->bSubtitlesEnabledValue = true;
    this->bShowFPS = false;
    this->bShowPing = false;
    this->bUseWhiteBaker = false;
    this->bUseAltDollarDragon = true;
    this->bHalloweenMode = true;
    this->MenuBackgroundIndex = -1;
    this->bTutorialsEnabled = true;
    this->bFriendlyOutline = true;
    this->ColorVisionDeficiencyType = EColorVisionDeficiency::NormalVision;
    this->ShowCrosshairSetting = EIGS_ShowCrosshairSetting::Full;
    this->ColorVisionDeficiencySeverity = 50.00f;
    this->bUseSystemDefaultLanguage = true;
    this->bChangedDefaultLanguage = false;
}

UIGS_GameSettings* UIGS_GameSettings::Instance() {
    return NULL;
}


