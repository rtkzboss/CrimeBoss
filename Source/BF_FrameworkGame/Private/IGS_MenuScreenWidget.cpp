#include "IGS_MenuScreenWidget.h"

UIGS_MenuScreenWidget::UIGS_MenuScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UIGS_MenuScreenWidget::RequestSubscreenChange_Implementation(FGameplayTag inTag) {
}

void UIGS_MenuScreenWidget::RefreshFocus_Implementation() {
}

void UIGS_MenuScreenWidget::OnSwitchedTo_Implementation() {
}

void UIGS_MenuScreenWidget::OnSwitchedFrom_Implementation() {
}


void UIGS_MenuScreenWidget::OnMainScreenSwitch_Implementation(FGameplayTag inEntireScreenTag) {
}

void UIGS_MenuScreenWidget::OnExit_Implementation() {
}



bool UIGS_MenuScreenWidget::GoBackInternal_Implementation() {
    return false;
}

bool UIGS_MenuScreenWidget::GoBack_Implementation() {
    return false;
}



