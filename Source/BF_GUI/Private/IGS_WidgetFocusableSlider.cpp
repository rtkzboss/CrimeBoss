#include "IGS_WidgetFocusableSlider.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetFocusableSlider::UIGS_WidgetFocusableSlider() : UUserWidget(FObjectInitializer::Get()) {
    (*this).SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    (*this).MaxValue = 1.000000000e+00f;
    (*this).StepSize = 9.999999776e-03f;
    (*this).LeftThumbstickThreshold = 5.000000000e-01f;
    (*this).AnalogInputDelay = 1.000000015e-01f;
    (*this).MaximumFractionalDigits = 3;
    (*this).FontColor.R = 1.000000000e+00f;
    (*this).FontColor.G = 1.000000000e+00f;
    (*this).FontColor.B = 1.000000000e+00f;
    (*this).FontColor.A = 1.000000000e+00f;
    (*this).DisabledFontColor.R = 5.000000000e-01f;
    (*this).DisabledFontColor.G = 5.000000000e-01f;
    (*this).DisabledFontColor.B = 5.000000000e-01f;
    (*this).DisabledFontColor.A = 1.000000000e+00f;
    (*this).BackgroundColor.R = 5.000000000e-01f;
    (*this).BackgroundColor.G = 5.000000000e-01f;
    (*this).BackgroundColor.B = 5.000000000e-01f;
    (*this).BackgroundColor.A = 1.000000000e+00f;
    (*this).DisabledBackgroundColor.R = 1.000000015e-01f;
    (*this).DisabledBackgroundColor.G = 1.000000015e-01f;
    (*this).DisabledBackgroundColor.B = 1.000000015e-01f;
    (*this).DisabledBackgroundColor.A = 1.000000000e+00f;
    (*this).NormalButtonColor.R = 5.000000000e-01f;
    (*this).NormalButtonColor.G = 5.000000000e-01f;
    (*this).NormalButtonColor.B = 5.000000000e-01f;
    (*this).NormalButtonColor.A = 1.000000000e+00f;
    (*this).HoveredButtonColor.R = 1.000000000e+00f;
    (*this).HoveredButtonColor.G = 1.000000000e+00f;
    (*this).HoveredButtonColor.B = 1.000000000e+00f;
    (*this).HoveredButtonColor.A = 1.000000000e+00f;
    (*this).PressedButtonColor.R = 1.000000000e+00f;
    (*this).PressedButtonColor.G = 1.000000000e+00f;
    (*this).PressedButtonColor.B = 1.000000000e+00f;
    (*this).PressedButtonColor.A = 1.000000000e+00f;
    (*this).SelectedButtonColor.R = 1.000000000e+00f;
    (*this).SelectedButtonColor.G = 1.000000000e+00f;
    (*this).SelectedButtonColor.B = 1.000000000e+00f;
    (*this).SelectedButtonColor.A = 1.000000000e+00f;
    (*this).DisabledButtonColor.R = 1.000000015e-01f;
    (*this).DisabledButtonColor.G = 1.000000015e-01f;
    (*this).DisabledButtonColor.B = 1.000000015e-01f;
    (*this).DisabledButtonColor.A = 1.000000000e+00f;
    (*this).NormalImageTint.R = 1.000000000e+00f;
    (*this).NormalImageTint.G = 1.000000000e+00f;
    (*this).NormalImageTint.B = 1.000000000e+00f;
    (*this).NormalImageTint.A = 1.000000000e+00f;
    (*this).HoveredImageTint.R = 1.000000000e+00f;
    (*this).HoveredImageTint.G = 1.000000000e+00f;
    (*this).HoveredImageTint.B = 1.000000000e+00f;
    (*this).HoveredImageTint.A = 1.000000000e+00f;
    (*this).PressedImageTint.R = 1.000000000e+00f;
    (*this).PressedImageTint.G = 1.000000000e+00f;
    (*this).PressedImageTint.B = 1.000000000e+00f;
    (*this).PressedImageTint.A = 1.000000000e+00f;
    (*this).SelectedImageTint.R = 1.000000000e+00f;
    (*this).SelectedImageTint.G = 1.000000000e+00f;
    (*this).SelectedImageTint.B = 1.000000000e+00f;
    (*this).SelectedImageTint.A = 1.000000000e+00f;
    (*this).DisabledImageTint.R = 5.000000000e-01f;
    (*this).DisabledImageTint.G = 5.000000000e-01f;
    (*this).DisabledImageTint.B = 5.000000000e-01f;
    (*this).DisabledImageTint.A = 1.000000000e+00f;
    (*this).NormalBorderTint.R = 1.000000000e+00f;
    (*this).NormalBorderTint.G = 1.000000000e+00f;
    (*this).NormalBorderTint.B = 1.000000000e+00f;
    (*this).NormalBorderTint.A = 1.000000000e+00f;
    (*this).HoveredBorderTint.R = 1.000000000e+00f;
    (*this).HoveredBorderTint.G = 1.000000000e+00f;
    (*this).HoveredBorderTint.B = 1.000000000e+00f;
    (*this).HoveredBorderTint.A = 1.000000000e+00f;
    (*this).PressedBorderTint.R = 1.000000000e+00f;
    (*this).PressedBorderTint.G = 1.000000000e+00f;
    (*this).PressedBorderTint.B = 1.000000000e+00f;
    (*this).PressedBorderTint.A = 1.000000000e+00f;
    (*this).SelectedBorderTint.R = 1.000000000e+00f;
    (*this).SelectedBorderTint.G = 1.000000000e+00f;
    (*this).SelectedBorderTint.B = 1.000000000e+00f;
    (*this).SelectedBorderTint.A = 1.000000000e+00f;
    (*this).DisabledBorderTint.R = 5.000000000e-01f;
    (*this).DisabledBorderTint.G = 5.000000000e-01f;
    (*this).DisabledBorderTint.B = 5.000000000e-01f;
    (*this).DisabledBorderTint.A = 1.000000000e+00f;
}

void UIGS_WidgetFocusableSlider::UpdateText() const {
}

void UIGS_WidgetFocusableSlider::SetStepSizeValue(float InValue) {
    StepSize = InValue;
}

void UIGS_WidgetFocusableSlider::SetSpinBoxNameText(FText inSpinBoxNameText) {
    SpinBoxNameText = inSpinBoxNameText;
}

void UIGS_WidgetFocusableSlider::SetSliderStyle(FSliderStyle inNewStyle) {
}

void UIGS_WidgetFocusableSlider::SetMinValue(float InValue) {
    MinValue = InValue;
}

void UIGS_WidgetFocusableSlider::SetMaxValue(float InValue) {
    MaxValue = InValue;
}

void UIGS_WidgetFocusableSlider::SetCurrentValue(float InValue) {
    auto factor = powf(10.f, MaximumFractionalDigits);
    CurrentValue = roundf(InValue * factor) / factor;
    OnValueChangedEvent.Broadcast(CurrentValue);
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


