#include "IGS_AnalogControllerSettings.h"

UIGS_AnalogControllerSettings::UIGS_AnalogControllerSettings() {
    this->BaseTurnRate = 60.00f;
    this->BaseLookUpRate = 40.00f;
    this->RightTriggerReleaseValue = 0.30f;
    this->RightTriggerPressValue = 0.60f;
    this->RightStickExponent = 1.30f;
    this->MinSensitivityRatio = 0.20f;
    this->MaxSensitivityRatio = 2.00f;
    this->SensitivityStepSize = 0.10f;
    this->MinADSMultiplierRatio = 0.10f;
    this->MaxADSMultiplierRatio = 2.00f;
    this->UserADSMultiplier = 1.00f;
    this->BaseADSMultiplier = 0.30f;
}


