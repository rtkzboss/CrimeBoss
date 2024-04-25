#include "IGS_WidgetSpinBox.h"

UIGS_WidgetSpinBox::UIGS_WidgetSpinBox() : UUserWidget(FObjectInitializer::Get()) {
    this->SpinBoxName = NULL;
    this->SpinBoxText = NULL;
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->NameBorder = NULL;
    this->ValueBorder = NULL;
    this->NameBG = NULL;
    this->ValueBG = NULL;
    this->SpinBoxNameText = FText::FromString(TEXT("##SPINBOX_NAME##"));
    this->MinValue = 0;
    this->CurrentValue = 0;
    this->MaxValue = 1;
    this->StepSizeValue = 1;
    this->UseEnumMode = false;
}

void UIGS_WidgetSpinBox::SetUseEnumMode(bool inUseEnumMode) {
}

void UIGS_WidgetSpinBox::SetStepSizeValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::SetMinValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::SetMaxValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::SetEnumNames(const TArray<FText>& inEnumNames) {
}

void UIGS_WidgetSpinBox::SetCurrentValue(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnValueIncreased(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnValueDecreased(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnRightArrowClicked() {
}

void UIGS_WidgetSpinBox::OnOnValueChanged(int32 InValue) {
}

void UIGS_WidgetSpinBox::OnLeftArrowClicked() {
}


