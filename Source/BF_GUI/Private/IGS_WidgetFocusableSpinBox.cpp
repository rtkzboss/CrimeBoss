#include "IGS_WidgetFocusableSpinBox.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetFocusableSpinBox::UIGS_WidgetFocusableSpinBox() : UUserWidget(FObjectInitializer::Get()) {
    (*this).SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    (*this).MaxValue = 1;
    (*this).StepSizeValue = 1;
    (*this).LeftThumbstickThreshold = 5.000000000e-01f;
    (*this).AnalogInputDelay = 1.000000015e-01f;
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

void UIGS_WidgetFocusableSpinBox::UpdateText() const {
}

void UIGS_WidgetFocusableSpinBox::SetUseEnumMode(bool inUseEnumMode) {
}

void UIGS_WidgetFocusableSpinBox::SetStepSizeValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::SetMinValue(int32 InValue) {
    MinValue = InValue;
}

void UIGS_WidgetFocusableSpinBox::SetMaxValue(int32 InValue) {
    MaxValue = InValue;
}

void UIGS_WidgetFocusableSpinBox::SetEnumNames(const TArray<FText>& inEnumNames) {
}

void UIGS_WidgetFocusableSpinBox::SetCurrentValue(int32 InValue) {
    CurrentValue = InValue;
    OnValueChangedEvent.Broadcast(CurrentValue);
}

void UIGS_WidgetFocusableSpinBox::ScrollRight() {
}

void UIGS_WidgetFocusableSpinBox::ScrollLeft() {
}

void UIGS_WidgetFocusableSpinBox::ProcessSettingFontColor(FLinearColor InColor) {
}

void UIGS_WidgetFocusableSpinBox::OnValueIncreased(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::OnValueDecreased(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::OnValueChanged(int32 InValue) {
}




