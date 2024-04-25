#include "IGS_Slider.h"

UIGS_Slider::UIGS_Slider() {
    this->Value = 0.00f;
    this->UseInteger = false;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->Orientation = Orient_Horizontal;
    this->IndentHandle = false;
    this->Locked = false;
    this->MouseUsesStep = false;
    this->RequiresControllerLock = true;
    this->StepSize = 0.01f;
    this->AnalogInputDelay = 0.10f;
    this->SlideIncreaseSpeed = 0.50f;
    this->CurrentAnalogInputDelay = 0.10f;
    this->IsFocusable = true;
    this->LeftThumbstickThreshold = 0.50f;
    this->IncreaseSpeedOverTime = false;
}

void UIGS_Slider::SetValue(float InValue) {
}

void UIGS_Slider::SetStepSize(float InValue) {
}

void UIGS_Slider::SetSliderHandleColor(FLinearColor InValue) {
}

void UIGS_Slider::SetSliderBarColor(FLinearColor InValue) {
}

void UIGS_Slider::SetMinValue(float InValue) {
}

void UIGS_Slider::SetMaxValue(float InValue) {
}

void UIGS_Slider::SetLocked(bool InValue) {
}

void UIGS_Slider::SetIndentHandle(bool InValue) {
}

void UIGS_Slider::ScrollRight() {
}

void UIGS_Slider::ScrollLeft() {
}

float UIGS_Slider::SanitizeValue(float InValue) const {
    return 0.0f;
}

float UIGS_Slider::GetValue() const {
    return 0.0f;
}

float UIGS_Slider::GetNormalizedValue() const {
    return 0.0f;
}

bool UIGS_Slider::AnalogValueChange(const FGeometry& InGeometry, const FAnalogInputEvent& InAnalogEvent) {
    return false;
}


