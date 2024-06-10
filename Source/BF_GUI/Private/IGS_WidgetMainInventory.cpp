#include "IGS_WidgetMainInventory.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetMainInventory::UIGS_WidgetMainInventory() : UUserWidget(FObjectInitializer::Get()) {
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


