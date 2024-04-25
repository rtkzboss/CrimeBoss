#include "IGS_WidgetGridContainerSlot.h"

UIGS_WidgetGridContainerSlot::UIGS_WidgetGridContainerSlot() : UUserWidget(FObjectInitializer::Get()) {
    this->ContainerSlotRow = -1;
    this->ContainerSlotColumn = -1;
    this->ContainerSlotId = -1;
    this->ItemRootSlotId = -1;
    this->SlotSizeBox = NULL;
    this->SlotImage = NULL;
    this->bIsOccupied = false;
    this->bIsMouseOver = false;
}

void UIGS_WidgetGridContainerSlot::SetIsOccupied(bool inOccupied) {
}

bool UIGS_WidgetGridContainerSlot::GetIsOccupied() const {
    return false;
}


