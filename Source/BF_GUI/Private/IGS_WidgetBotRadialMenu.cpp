#include "IGS_WidgetBotRadialMenu.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_WheelMenuType.h"

UIGS_WidgetBotRadialMenu::UIGS_WidgetBotRadialMenu() {
}

void UIGS_WidgetBotRadialMenu::OnLootBagsCountChanged_Internal(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
}



void UIGS_WidgetBotRadialMenu::CancelBotMenu() {
}

bool UIGS_WidgetBotRadialMenu::CanBotDeliver(const AIGS_GameCharacterFramework* inBotReference) const {
    return false;
}

void UIGS_WidgetBotRadialMenu::CallBotCommand(EIGS_BotCommandDefinition inCommand) {
}


