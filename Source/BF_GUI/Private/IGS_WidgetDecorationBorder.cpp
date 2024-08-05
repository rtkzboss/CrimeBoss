#include "IGS_WidgetDecorationBorder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetDecorationBorder::UIGS_WidgetDecorationBorder() : UUserWidget(FObjectInitializer::Get()) {
    (*this).BorderTint.R = 1.000000000e+00f;
    (*this).BorderTint.G = 1.000000000e+00f;
    (*this).BorderTint.B = 1.000000000e+00f;
    (*this).BorderTint.A = 1.000000000e+00f;
    (*this).BorderWidth = 1.000000000e+00f;
}

void UIGS_WidgetDecorationBorder::SetBorderWidth(float inBorderWidth) {
}

void UIGS_WidgetDecorationBorder::SetBorderTint(FLinearColor inBorderTint) {
}

void UIGS_WidgetDecorationBorder::OnBorderWidthChanged_Implementation(float inBorderWidth) {
}

void UIGS_WidgetDecorationBorder::OnBorderTintChanged_Implementation(FLinearColor inBorderTint) {
}


