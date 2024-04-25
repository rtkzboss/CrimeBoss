#include "IGS_ControllerSettings.h"

UIGS_ControllerSettings::UIGS_ControllerSettings() {
    this->bSettingsValid = true;
    this->ControllerSensitivity = 1.00f;
    this->InvertedVerticalLook = false;
    this->LeftDeadzone = 0.10f;
    this->RightDeadzone = 0.10f;
    this->ADSMultiplier = 1.00f;
    this->AimAssistMultiplier = 1.00f;
    this->bUseLinearControllerCurve = false;
    this->VibrationIntensity = 2;
    this->bShouldPrioritizeUseInsteadOfReload = true;
    this->bSwapPingWithDropItemControls = false;
}

UIGS_ControllerSettings* UIGS_ControllerSettings::Instance() {
    return NULL;
}

float UIGS_ControllerSettings::GetRightTriggerReleaseThreshold() const {
    return 0.0f;
}

float UIGS_ControllerSettings::GetRightTriggerPressThreshold() const {
    return 0.0f;
}


