#include "IGS_WidgetFocusableSlider.h"

UIGS_WidgetFocusableSlider::UIGS_WidgetFocusableSlider() : UUserWidget(FObjectInitializer::Get()) {
    this->SliderName = NULL;
    this->SliderText = NULL;
    this->ClickDetector = NULL;
    this->SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    this->MinValue = 0.00f;
    this->CurrentValue = 0.00f;
    this->MaxValue = 1.00f;
    this->StepSize = 0.01f;
    this->LeftThumbstickThreshold = 0.50f;
    this->AnalogInputDelay = 0.10f;
    this->RoundingMode = HalfToEven;
    this->MinimumFractionalDigits = 0;
    this->MaximumFractionalDigits = 3;
    this->IsInFocusPath = false;
    this->ValueSlider = NULL;
}

void UIGS_WidgetFocusableSlider::UpdateText() const {
}

void UIGS_WidgetFocusableSlider::SetStepSizeValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::SetSpinBoxNameText(FText inSpinBoxNameText) {
}

void UIGS_WidgetFocusableSlider::SetSliderStyle(FSliderStyle inNewStyle) {
}

void UIGS_WidgetFocusableSlider::SetMinValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::SetMaxValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::SetCurrentValue(float InValue) {
}

void UIGS_WidgetFocusableSlider::ScrollRight() {
}

void UIGS_WidgetFocusableSlider::ScrollLeft() {
}

float UIGS_WidgetFocusableSlider::SanitizeValue(float InValue) const {
    return 0.0f;
}

void UIGS_WidgetFocusableSlider::ProcessSettingFontColor(FLinearColor InColor) {
}

void UIGS_WidgetFocusableSlider::OnValueChanged(float InValue) {
}


