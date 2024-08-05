#include "IGS_DebriefScreen.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_DebriefScreen::UIGS_DebriefScreen() {
}

void UIGS_DebriefScreen::StartAnimatedDebrief() {
}

void UIGS_DebriefScreen::SetMissionResult(FIGS_MissionResult& inMissionResult) {
}

void UIGS_DebriefScreen::SetIsSkipped(bool inIsSkipped) {
}

void UIGS_DebriefScreen::SetDebriefBonuses(TArray<FIGS_DebriefBonus> inBonuses) {
}

void UIGS_DebriefScreen::PlayNextAnimation() {
}



bool UIGS_DebriefScreen::HasSomeDebriefBonuses() const {
    return false;
}

FIGS_MissionResult UIGS_DebriefScreen::GetMissionResult() const {
    return FIGS_MissionResult{};
}

FIGS_DebriefBonus UIGS_DebriefScreen::GetDebriefBonusByTag(FGameplayTag inTag, bool& outSuccess) const {
    return FIGS_DebriefBonus{};
}

void UIGS_DebriefScreen::AddAnimation(UIGS_AnimatedWidget* inAnimatedWidget, UObject* inPayloadData) {
}


