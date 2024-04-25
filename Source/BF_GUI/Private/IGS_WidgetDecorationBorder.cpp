#include "IGS_WidgetDecorationBorder.h"

UIGS_WidgetDecorationBorder::UIGS_WidgetDecorationBorder() : UUserWidget(FObjectInitializer::Get()) {
    this->BorderWidth = 1.00f;
}

void UIGS_WidgetDecorationBorder::SetBorderWidth(float inBorderWidth) {
}

void UIGS_WidgetDecorationBorder::SetBorderTint(FLinearColor inBorderTint) {
}

void UIGS_WidgetDecorationBorder::OnBorderWidthChanged_Implementation(float inBorderWidth) {
}

void UIGS_WidgetDecorationBorder::OnBorderTintChanged_Implementation(FLinearColor inBorderTint) {
}


