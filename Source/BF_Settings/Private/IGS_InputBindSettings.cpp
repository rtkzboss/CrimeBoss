#include "IGS_InputBindSettings.h"

UIGS_InputBindSettings::UIGS_InputBindSettings() {
    this->bSettingsValid = true;
}

void UIGS_InputBindSettings::SetInputAxisBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, float InValue, bool inAlternativeKey) {
}

void UIGS_InputBindSettings::SetInputActionBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, bool inAlternativeKey) {
}

void UIGS_InputBindSettings::RevertSettings() {
}

void UIGS_InputBindSettings::ResetToDefaults() {
}

UIGS_InputBindSettings* UIGS_InputBindSettings::Instance() {
    return NULL;
}

void UIGS_InputBindSettings::FailsafeFillEmptyBindings() {
}

void UIGS_InputBindSettings::CacheBindings() {
}

void UIGS_InputBindSettings::ApplySettings(bool inSave) {
}


