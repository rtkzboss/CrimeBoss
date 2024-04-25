#include "IGS_WidgetMainInventory.h"

UIGS_WidgetMainInventory::UIGS_WidgetMainInventory() : UUserWidget(FObjectInitializer::Get()) {
    this->WeaponsScrollBox = NULL;
    this->GadgetsScrollBox = NULL;
    this->ItemsScrollBox = NULL;
    this->LootScrollBox = NULL;
    this->WidgetMainInventoryItemClass = NULL;
    this->WidgetDragItemClass = NULL;
    this->OwningInventory = NULL;
    this->InventoryCategorySwitcher = NULL;
}

void UIGS_WidgetMainInventory::Setup(UIGS_ListInventory* inOwningContainer) {
}

void UIGS_WidgetMainInventory::SetHighlightItem(int32 inSlotId, EIGS_SlotHighlight inHighlight) {
}







void UIGS_WidgetMainInventory::InitItem(FIGS_ListItemHolder inHolder) {
}

UIGS_ListInventory* UIGS_WidgetMainInventory::GetOwningContainer() const {
    return NULL;
}


