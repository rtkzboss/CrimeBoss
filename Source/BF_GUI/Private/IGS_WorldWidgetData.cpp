#include "IGS_WorldWidgetData.h"

FIGS_WorldWidgetData::FIGS_WorldWidgetData() {
    this->WidgetClass = NULL;
    this->bShowProgressBar = false;
    this->bShowDistance = false;
    this->bIsGrenade = false;
    this->GrenadeID = NULL;
    this->FadeDistance = 0.00f;
    this->bInvertFading = false;
    this->bShrinkWithDistance = false;
    this->bTreatEdgeAsOnScreen = false;
    this->bOuterEdge = false;
    this->bStartAtCenter = false;
    this->bStartWithEffect = false;
    this->bShowOnlyOffScreen = false;
    this->bShowArrow = false;
    this->bHideWhenOccluded = false;
}

