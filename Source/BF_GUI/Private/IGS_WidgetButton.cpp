#include "IGS_WidgetButton.h"
#include "EIGS_InputAction.h"
#include "Input/CommonInputMode.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetButton::UIGS_WidgetButton() {
    (*this).NormalFontColor.R = 8.000000119e-01f;
    (*this).NormalFontColor.G = 8.000000119e-01f;
    (*this).NormalFontColor.B = 8.000000119e-01f;
    (*this).NormalFontColor.A = 1.000000000e+00f;
    (*this).HoveredFontColor.R = 1.000000000e+00f;
    (*this).HoveredFontColor.G = 1.000000000e+00f;
    (*this).HoveredFontColor.B = 1.000000000e+00f;
    (*this).HoveredFontColor.A = 1.000000000e+00f;
    (*this).PressedFontColor.R = 1.000000000e+00f;
    (*this).PressedFontColor.G = 1.000000000e+00f;
    (*this).PressedFontColor.B = 1.000000000e+00f;
    (*this).PressedFontColor.A = 1.000000000e+00f;
    (*this).SelectedFontColor.R = 1.000000000e+00f;
    (*this).SelectedFontColor.G = 1.000000000e+00f;
    (*this).SelectedFontColor.B = 1.000000000e+00f;
    (*this).SelectedFontColor.A = 1.000000000e+00f;
    (*this).DisabledFontColor.R = 5.000000000e-01f;
    (*this).DisabledFontColor.G = 5.000000000e-01f;
    (*this).DisabledFontColor.B = 5.000000000e-01f;
    (*this).DisabledFontColor.A = 1.000000000e+00f;
    (*this).NormalImageTint.R = 8.000000119e-01f;
    (*this).NormalImageTint.G = 8.000000119e-01f;
    (*this).NormalImageTint.B = 8.000000119e-01f;
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
    (*this).BorderWidth = 4.000000000e+00f;
    (*this).NormalBorderTint.R = 8.000000119e-01f;
    (*this).NormalBorderTint.G = 8.000000119e-01f;
    (*this).NormalBorderTint.B = 8.000000119e-01f;
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
    (*this).FlagSize = 8.000000000e+00f;
}


