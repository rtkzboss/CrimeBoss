#include "IGS_WidgetFocusableSpinBox.h"

UIGS_WidgetFocusableSpinBox::UIGS_WidgetFocusableSpinBox() : UUserWidget(FObjectInitializer::Get()) {
    this->SpinBoxName = NULL;
    this->SpinBoxText = NULL;
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->ClickDetector = NULL;
    this->SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    this->MinValue = 0;
    this->CurrentValue = 0;
    this->MaxValue = 1;
    this->StepSizeValue = 1;
    this->LeftThumbstickThreshold = 0.50f;
    this->AnalogInputDelay = 0.10f;
    this->UseEnumMode = false;
    this->HoveredCount = 0;
}

void UIGS_WidgetFocusableSpinBox::UpdateText() const {
}

void UIGS_WidgetFocusableSpinBox::SetUseEnumMode(bool inUseEnumMode) {
}

void UIGS_WidgetFocusableSpinBox::SetStepSizeValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::SetMinValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::SetMaxValue(int32 InValue) {
}

void UIGS_WidgetFocusableSpinBox::SetEnumNames(const TArray<FText>& inEnumNames) {
}

void UIGS_WidgetFocusableSpinBox::SetCurrentValue(int32 InValue) {
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




