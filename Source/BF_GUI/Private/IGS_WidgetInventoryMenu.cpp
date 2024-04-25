#include "IGS_WidgetInventoryMenu.h"

UIGS_WidgetInventoryMenu::UIGS_WidgetInventoryMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->InventoryWidget = NULL;
}

void UIGS_WidgetInventoryMenu::SetupInventoryContainer(UIGS_ListInventory* inOwningContainer) const {
}


