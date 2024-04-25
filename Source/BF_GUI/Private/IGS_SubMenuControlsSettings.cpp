#include "IGS_SubMenuControlsSettings.h"

UIGS_SubMenuControlsSettings::UIGS_SubMenuControlsSettings() {
    this->InvertVerticalLookSpinBox = NULL;
    this->ControllerSensitivitySlider = NULL;
    this->ControllerSensitivityMultiplier = 10;
    this->ControllerLeftDeadzoneSlider = NULL;
    this->ControllerRightDeadzoneSlider = NULL;
    this->DeadzoneMultiplier = 100.00f;
    this->ControllerADSMultiplierSlider = NULL;
    this->ControllerLinearExpoSpinBox = NULL;
    this->ControllerVibrationIntensitySpinBox = NULL;
    this->ControllerUseOverReloadPrioSpinBox = NULL;
    this->ControllerSwitchPingAndDropItemSpinBox = NULL;
    this->ControllerAimAssistIntensitySlider = NULL;
    this->InvertMouseSpinBox = NULL;
    this->MouseSensitivitySlider = NULL;
    this->MouseSensitivityMultiplier = 100.00f;
    this->SprintToggleSpinBox = NULL;
    this->CrouchToggleSpinBox = NULL;
    this->AimToggleSpinBox = NULL;
    this->SprintInterruptReloadToggleSpinBox = NULL;
    this->MagCheckInterruptSprintToggleSpinBox = NULL;
}


