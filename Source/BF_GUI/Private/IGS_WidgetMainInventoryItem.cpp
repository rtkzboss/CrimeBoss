#include "IGS_WidgetMainInventoryItem.h"

UIGS_WidgetMainInventoryItem::UIGS_WidgetMainInventoryItem() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemSlotID = 0;
    this->ItemImage = NULL;
    this->WieldedText = NULL;
    this->StackSizeText = NULL;
}

void UIGS_WidgetMainInventoryItem::TemporaryOnClickItem() {
}

void UIGS_WidgetMainInventoryItem::SetupInventory(UIGS_ListInventory* inInventory) {
}

void UIGS_WidgetMainInventoryItem::SetItemWielded(bool inIsWielded) const {
}


