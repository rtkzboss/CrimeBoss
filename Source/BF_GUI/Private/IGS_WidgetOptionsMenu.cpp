#include "IGS_WidgetOptionsMenu.h"

UIGS_WidgetOptionsMenu::UIGS_WidgetOptionsMenu() {
    this->GameSetButton = NULL;
    this->GraphicsSetButton = NULL;
    this->SoundSetButton = NULL;
    this->ControlsSetButton = NULL;
    this->ApplyButton = NULL;
    this->RevertButton = NULL;
    this->CloseButton = NULL;
    this->SettingsWidgetSwitcher = NULL;
}

void UIGS_WidgetOptionsMenu::UpdateMenu(bool inSoundSubmenuOnly) const {
}

void UIGS_WidgetOptionsMenu::ShiftCurrentMenuSelected(int32 Direction) {
}

void UIGS_WidgetOptionsMenu::SetupInMainMenu(APlayerController* inOwningPlayer) {
}

void UIGS_WidgetOptionsMenu::SetupInGame(AIGS_PlayerControllerRoot* inOwningPlayer, UIGS_GUIController* inGUIController, bool inWasSystemMenuOpen) {
}

void UIGS_WidgetOptionsMenu::SetSettingsButtonsState(bool inState) const {
}


void UIGS_WidgetOptionsMenu::OpenFirstTab() {
}


void UIGS_WidgetOptionsMenu::OnRevertButtonClicked() const {
}

void UIGS_WidgetOptionsMenu::OnApplyButtonClicked() const {
}



