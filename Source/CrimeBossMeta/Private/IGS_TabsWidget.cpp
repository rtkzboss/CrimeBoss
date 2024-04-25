#include "IGS_TabsWidget.h"

UIGS_TabsWidget::UIGS_TabsWidget() {
    this->InputEnabled = true;
    this->SelectedIndex = 0;
    this->TabsHorizontalBox = NULL;
}

void UIGS_TabsWidget::SetTabIndex(int32 inIndex) {
}

void UIGS_TabsWidget::SetInputEnabled(bool inEnabled) {
}



bool UIGS_TabsWidget::IsInputEnabled() const {
    return false;
}

void UIGS_TabsWidget::ChangeTab(int32 Direction) {
}

void UIGS_TabsWidget::AddTab(UUserWidget* inTab) {
}


