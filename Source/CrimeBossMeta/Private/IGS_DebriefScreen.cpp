#include "IGS_DebriefScreen.h"

UIGS_DebriefScreen::UIGS_DebriefScreen() {
    this->IsSkipped = false;
    this->m_CurrentAnimatedWidget = NULL;
}

void UIGS_DebriefScreen::StartAnimatedDebrief() {
}

void UIGS_DebriefScreen::SetMissionResult(FIGS_MissionResult& inMissionResult) {
}

void UIGS_DebriefScreen::SetIsSkipped(bool inIsSkipped) {
}

void UIGS_DebriefScreen::PlayNextAnimation() {
}



FIGS_MissionResult UIGS_DebriefScreen::GetMissionResult() const {
    return FIGS_MissionResult{};
}

void UIGS_DebriefScreen::AddAnimation(UIGS_AnimatedWidget* inAnimatedWidget, UObject* inPayloadData) {
}


