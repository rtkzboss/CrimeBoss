#include "IGS_WidgetBotRadialMenu.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetBotRadialMenu::UIGS_WidgetBotRadialMenu() {
}

void UIGS_WidgetBotRadialMenu::OnLootBagsCountChanged_Internal(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
}



void UIGS_WidgetBotRadialMenu::CancelBotMenu() {
}

bool UIGS_WidgetBotRadialMenu::CanBotDeliver(const AIGS_GameCharacterFramework* inBotReference) const {
    return false;
}


