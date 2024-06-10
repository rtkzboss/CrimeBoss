#include "IGS_WidgetPingRadialSlice.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetPingRadialSlice::UIGS_WidgetPingRadialSlice() : UUserWidget(FObjectInitializer::Get()) {
    (*this).NormalColor.R = 5.000000000e-01f;
    (*this).NormalColor.G = 5.000000000e-01f;
    (*this).NormalColor.B = 5.000000000e-01f;
    (*this).NormalColor.A = 1.000000000e+00f;
    (*this).HoverColor.R = 1.000000000e+00f;
    (*this).HoverColor.G = 1.000000000e+00f;
    (*this).HoverColor.B = 1.000000000e+00f;
    (*this).HoverColor.A = 1.000000000e+00f;
    (*this).WieldedColor.R = 1.000000000e+00f;
    (*this).WieldedColor.G = 1.000000000e+00f;
    (*this).WieldedColor.A = 1.000000000e+00f;
    (*this).WieldedHoverColor.R = 8.962693214e-01f;
    (*this).WieldedHoverColor.G = 3.324515224e-01f;
    (*this).WieldedHoverColor.B = 6.048833020e-03f;
    (*this).WieldedHoverColor.A = 1.000000000e+00f;
    (*this).SlotBind = -1;
}

void UIGS_WidgetPingRadialSlice::SliceUnhover_Implementation() {
}

void UIGS_WidgetPingRadialSlice::SliceHover_Implementation() {
}

bool UIGS_WidgetPingRadialSlice::SliceClicked_Implementation() {
    return false;
}




