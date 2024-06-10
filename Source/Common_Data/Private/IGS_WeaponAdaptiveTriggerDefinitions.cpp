#include "IGS_WeaponAdaptiveTriggerDefinitions.h"

FIGS_WeaponAdaptiveTriggerDefinitions::FIGS_WeaponAdaptiveTriggerDefinitions() {
    (*this).FeedbackMode.OverrideEnabled = false;
    (*this).FeedbackMode.Position = 0;
    (*this).FeedbackMode.Strength = 0;
    (*this).WeaponMode.OverrideEnabled = false;
    (*this).WeaponMode.StartPosition = 2;
    (*this).WeaponMode.EndPosition = 2;
    (*this).WeaponMode.Strength = 0;
    (*this).VibrationMode.OverrideEnabled = false;
    (*this).VibrationMode.Position = 0;
    (*this).VibrationMode.Frequency = 0;
    (*this).VibrationMode.Amplitude = 0;
}

