#include "IGS_WorldWidgetData.h"

FIGS_WorldWidgetData::FIGS_WorldWidgetData() {
    (*this).WidgetClass = nullptr;
    (*this).bShowProgressBar = false;
    (*this).bShowDistance = false;
    (*this).bIsGrenade = false;
    (*this).GrenadeID = nullptr;
    (*this).FadeDistance = 1.000000000e+03f;
    (*this).bInvertFading = false;
    (*this).bShrinkWithDistance = true;
    (*this).Pivot.X = 5.000000000e-01f;
    (*this).Pivot.Y = 5.000000000e-01f;
    (*this).bTreatEdgeAsOnScreen = false;
    (*this).bOuterEdge = false;
    (*this).bStartAtCenter = false;
    (*this).bStartWithEffect = false;
    (*this).bShowOnlyOffScreen = false;
    (*this).bShowArrow = true;
    (*this).bHideWhenOccluded = false;
}

