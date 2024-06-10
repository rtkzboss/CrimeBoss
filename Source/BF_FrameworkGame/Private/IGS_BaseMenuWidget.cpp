#include "IGS_BaseMenuWidget.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_BaseMenuWidget::UIGS_BaseMenuWidget() {
    (*this).OpenScreenDelayAfterInitialization = 5.000000000e-01f;
}

void UIGS_BaseMenuWidget::SwitchToScreen(FGameplayTag inScreenTag) {
}


void UIGS_BaseMenuWidget::SetForceHidden(bool IsHidden) {
}



void UIGS_BaseMenuWidget::OpenScreenOnInitialization() {
}



void UIGS_BaseMenuWidget::OnScreenOpen_Internal(FGameplayTag inScreenTag) {
}


bool UIGS_BaseMenuWidget::IsTopContentVisible() const {
    return false;
}

bool UIGS_BaseMenuWidget::IsBottomContentVisible() const {
    return false;
}

bool UIGS_BaseMenuWidget::IsBaseScreenVisible() const {
    return false;
}

UIGS_Screen* UIGS_BaseMenuWidget::GetScreenToBeOpenOnInitialization_Implementation() {
    return NULL;
}


