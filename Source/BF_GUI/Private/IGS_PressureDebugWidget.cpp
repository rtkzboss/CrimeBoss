#include "IGS_PressureDebugWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_PressureDebugWidget::UIGS_PressureDebugWidget() {
    (*this).PressureColor.R = 1.000000000e+00f;
    (*this).PressureColor.A = 1.000000000e+00f;
    (*this).LegendColor.R = 1.000000000e+00f;
    (*this).LegendColor.G = 8.500000238e-01f;
    (*this).LegendColor.A = 7.500000000e-01f;
    (*this).GreyLegendColor.R = 5.000000000e-01f;
    (*this).GreyLegendColor.G = 5.000000000e-01f;
    (*this).GreyLegendColor.B = 5.000000000e-01f;
    (*this).GreyLegendColor.A = 2.500000000e-01f;
}



