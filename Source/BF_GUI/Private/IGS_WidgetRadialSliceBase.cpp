#include "IGS_WidgetRadialSliceBase.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetRadialSliceBase::UIGS_WidgetRadialSliceBase() {
    (*this).NormalColor.R = 5.000000000e-01f;
    (*this).NormalColor.G = 5.000000000e-01f;
    (*this).NormalColor.B = 5.000000000e-01f;
    (*this).NormalColor.A = 1.000000000e+00f;
    (*this).HoverColor.R = 1.000000000e+00f;
    (*this).HoverColor.G = 1.000000000e+00f;
    (*this).HoverColor.B = 1.000000000e+00f;
    (*this).HoverColor.A = 1.000000000e+00f;
}

void UIGS_WidgetRadialSliceBase::SliceUnhover_Implementation() {
}

void UIGS_WidgetRadialSliceBase::SliceHover_Implementation() {
}

bool UIGS_WidgetRadialSliceBase::SliceClicked_Implementation() {
    return false;
}



