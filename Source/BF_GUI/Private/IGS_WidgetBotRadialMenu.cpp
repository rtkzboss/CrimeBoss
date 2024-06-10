#include "IGS_WidgetBotRadialMenu.h"

UIGS_WidgetBotRadialMenu::UIGS_WidgetBotRadialMenu() {
    this->PlayerCommandComponent = NULL;
}

void UIGS_WidgetBotRadialMenu::OnLootBagsCountChanged_Internal(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
}



void UIGS_WidgetBotRadialMenu::CancelBotMenu() {
}

bool UIGS_WidgetBotRadialMenu::CanBotDeliver(const AIGS_GameCharacterFramework* inBotReference) const {
    return false;
}


