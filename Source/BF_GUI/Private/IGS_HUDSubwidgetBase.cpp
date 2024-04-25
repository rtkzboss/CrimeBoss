#include "IGS_HUDSubwidgetBase.h"

UIGS_HUDSubwidgetBase::UIGS_HUDSubwidgetBase() {
    this->bShowWidget = 0;
    this->bCurrentlyRelevant = 0;
    this->VisibilityMode = EIGS_HUDVisibilityMode::HUD_RelevantOnly;
    this->bHiddenOnStartup = false;
}


void UIGS_HUDSubwidgetBase::SetWidgetRelevancy(bool inEnabled) {
}

void UIGS_HUDSubwidgetBase::SetVisibilityMode(EIGS_HUDVisibilityMode inVisibilityMode) {
}

void UIGS_HUDSubwidgetBase::SetShowWidget(bool inEnabled) {
}


void UIGS_HUDSubwidgetBase::RefreshShowWidget() {
}



bool UIGS_HUDSubwidgetBase::IsRelevant() {
    return false;
}


void UIGS_HUDSubwidgetBase::ForceShowWidget(bool inShow) {
}

void UIGS_HUDSubwidgetBase::ForceHideWidget(bool inHide) {
}


