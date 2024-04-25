#include "IGS_WidgetButtonInternal.h"

UIGS_WidgetButtonInternal::UIGS_WidgetButtonInternal() {
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
}

void UIGS_WidgetButtonInternal::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UIGS_WidgetButtonInternal::SetStyle(const FButtonStyle& InStyle) {
}

void UIGS_WidgetButtonInternal::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UIGS_WidgetButtonInternal::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UIGS_WidgetButtonInternal::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}

void UIGS_WidgetButtonInternal::SetBackgroundColor(FLinearColor InBackgroundColor) {
}

bool UIGS_WidgetButtonInternal::IsPressed() const {
    return false;
}


